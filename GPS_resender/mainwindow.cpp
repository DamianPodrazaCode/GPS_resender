#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    fill_cb_serialInfo();
}

MainWindow::~MainWindow() {
    COMPORT->close();
    qInfo() << COMPORT->isOpen();
    delete COMPORT;

    delete ui;
}

void MainWindow::read_data() {
    if (COMPORT->isOpen()) {

        while (COMPORT->bytesAvailable()) {
            dataFromSerial.append(COMPORT->readAll());
        }
        while (dataFromSerial.contains(char(10))) {
            QString lineShow = dataFromSerial.left(dataFromSerial.indexOf(char(10)));
            lineShow.replace(char(13), "");
            if (!ui->pb_term_Stop->isChecked()) {
                ui->pte_term->appendPlainText(lineShow);
                // if (lineShow.contains(ui->le_extract->text())) {
                //                    if (ui->le_change->text() != "") {
                //                        lineShow.replace(ui->le_extract->text(), ui->le_change->text());
                //                        ui->le_udpSend->setText(lineShow);
                //                    } else {
                //                        ui->le_udpSend->setText(lineShow);
                //                    }
                //}
            }
            dataFromSerial.remove(0, dataFromSerial.indexOf(char(10)) + 1);
        }
    }
}

void MainWindow::fill_cb_serialInfo() {
    ui->cb_serial_port->clear();
    for (const QSerialPortInfo &portInfo : QSerialPortInfo::availablePorts()) {
        portInfoList.append(portInfo.portName() + ";" + portInfo.description() + ";" + portInfo.manufacturer() + ";"
                            + portInfo.serialNumber() + ";" + QString::number(portInfo.productIdentifier(), 16) + ";"
                            + QString::number(portInfo.vendorIdentifier(), 16) + ";" + portInfo.systemLocation());

        // sprawdzenie czyu port otwarty, jeżeli nie to dodanie do listy możliwych portów
        QSerialPort *COMPORT = new QSerialPort();
        COMPORT->setPortName(portInfo.portName());
        COMPORT->clearError();
        COMPORT->open(QSerialPort::ReadWrite);
        if (COMPORT->isOpen()) {
            ui->cb_serial_port->addItem(portInfo.portName());
        }
        COMPORT->close();
        delete COMPORT;
    }
}

void MainWindow::on_pb_serial_connect_toggled(bool checked) {
    if (checked) {
        COMPORT = new QSerialPort();
        COMPORT->setPortName(ui->cb_serial_port->currentText());
        COMPORT->setBaudRate(ui->cb_serial_baud->currentText().toInt());
        COMPORT->setParity(QSerialPort::NoParity);
        COMPORT->setDataBits(QSerialPort::Data8);
        COMPORT->setStopBits(QSerialPort::OneStop);
        COMPORT->setFlowControl(QSerialPort::NoFlowControl);
        COMPORT->clearError();
        COMPORT->open(QSerialPort::ReadWrite);
        if (!COMPORT->isOpen()) {
            COMPORT->close();
            delete COMPORT;
            close();
        }
        ui->pb_serial_connect->setText("Disconnect");

        connect(COMPORT, SIGNAL(readyRead()), this, SLOT(read_data()));

    } else {
        disconnect(COMPORT, SIGNAL(readyRead()), this, SLOT(read_data()));
        COMPORT->close();
        delete COMPORT;
        ui->pb_serial_connect->setText("Connect");
    }
}

void MainWindow::on_pb_term_Stop_toggled(bool checked) {
    if (checked) {
        ui->pb_term_Stop->setText("Start");
    } else {
        ui->pb_term_Stop->setText("Stop");
    }
}


void MainWindow::on_pb_term_clear_clicked() {
    ui->pte_term->clear();
}


void MainWindow::on_le_term_textChanged(const QString &arg1) {
    QByteArray text = arg1.toLatin1();
    qInfo() << text;
}

