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
        COMPORT->flush();
        ui->pb_serial_connect->setText("Disconnect");

        connect(COMPORT, SIGNAL(readyRead()), this, SLOT(read_data()));

    } else {
        disconnect(COMPORT, SIGNAL(readyRead()), this, SLOT(read_data()));
        COMPORT->close();
        delete COMPORT;
        COMPORT = nullptr;
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

void MainWindow::on_pb_term_send_clicked() {
    ui->pte_term->clear();
    ui->cb_send->insertItem(0, ui->cb_send->currentText());
    QApplication::processEvents();
    if (COMPORT != nullptr) {
        //    qInfo() << "send to GPS";
        COMPORT->write(out_send.toLatin1());
        COMPORT->flush();
    }
    QApplication::processEvents();
}

void MainWindow::on_cb_send_editTextChanged(const QString &arg1) {
    QByteArray text = QString("PMTK").toLatin1() + arg1.toLatin1();
    checksum = 0;
    for (int var = 0; var < text.length(); ++var) {
        checksum = checksum ^ text.at(var);
    }
    out_send = QString::number(checksum, 16);
    ui->l_term_crc->setText("*" + out_send + "<CR><LF>");
    out_send = "$" + text + "*" + out_send + "\r\n";
    // qInfo() << out_send;
}

void MainWindow::on_bp_restart_hot_clicked() {
    ui->cb_send->setEditText("101");
    on_pb_term_send_clicked();
}

void MainWindow::on_bp_restart_warm_clicked() {
    ui->cb_send->setEditText("102");
    on_pb_term_send_clicked();
}

void MainWindow::on_bp_restart_cold_clicked() {
    ui->cb_send->setEditText("103");
    on_pb_term_send_clicked();
}

void MainWindow::on_bp_restart_full_clicked() {
    ui->cb_send->setEditText("104");
    on_pb_term_send_clicked();
}

void MainWindow::on_pb_set_freq_clicked() {
    switch (ui->cb_freq->currentIndex()) {
    case 0:
        ui->cb_send->setEditText("220,1000");
        on_pb_term_send_clicked();
        break;
    case 1:
        ui->cb_send->setEditText("220,500");
        on_pb_term_send_clicked();
        break;
    case 2:
        ui->cb_send->setEditText("220,200");
        on_pb_term_send_clicked();
        break;
    case 3:
        ui->cb_send->setEditText("220,100");
        on_pb_term_send_clicked();
        break;
    default:
        break;
    }
}

void MainWindow::on_pb_api_q_fix_ctl_clicked() {
    ui->cb_send->setEditText("400");
    on_pb_term_send_clicked();
}

void MainWindow::on_pb_set_gps_baud_clicked() {
    ui->cb_send->setEditText("251," + ui->cb_gps_baud->currentText());
}
