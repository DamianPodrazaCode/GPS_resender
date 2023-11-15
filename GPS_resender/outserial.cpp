#include "outserial.h"
#include "ui_outserial.h"

OutSerial::OutSerial(QWidget *parent) : QDialog(parent), ui(new Ui::OutSerial) {
    ui->setupUi(this);
    fill_cb_serialInfo();
}

OutSerial::~OutSerial() {
    delete ui;
}

void OutSerial::fill_cb_serialInfo() {
    ui->cb_ports->clear();
    for (const QSerialPortInfo &portInfo : QSerialPortInfo::availablePorts()) {
        portInfoList.append(portInfo.portName() + ";" + portInfo.description() + ";" + portInfo.manufacturer() + ";"
                            + portInfo.serialNumber() + ";" + QString::number(portInfo.productIdentifier(), 16) + ";"
                            + QString::number(portInfo.vendorIdentifier(), 16) + ";" + portInfo.systemLocation());

        // sprawdzenie czyu port otwarty, jeżeli nie to dodanie do listy możliwych portów
        QSerialPort *COMPORT_OUT = new QSerialPort();
        COMPORT_OUT->setPortName(portInfo.portName());
        COMPORT_OUT->clearError();
        COMPORT_OUT->open(QSerialPort::ReadWrite);
        if (COMPORT_OUT->isOpen()) {
            ui->cb_ports->addItem(portInfo.portName());
        }
        COMPORT_OUT->close();
        delete COMPORT_OUT;
    }
}

void OutSerial::on_pb_scan_clicked() {
    fill_cb_serialInfo();
}

void OutSerial::on_pb_connect_clicked() {
    ui->pb_connect->setDisabled(true);
    ui->pb_disconnect->setEnabled(true);
    COMPORT_OUT = new QSerialPort();
    COMPORT_OUT->setPortName(ui->cb_ports->currentText());
    COMPORT_OUT->setBaudRate(ui->cb_baudrate->currentText().toInt());
    COMPORT_OUT->setParity((QSerialPort::Parity)ui->cb_parity->currentIndex());
    COMPORT_OUT->setDataBits((QSerialPort::DataBits)ui->cb_databits->currentText().toInt());
    COMPORT_OUT->setStopBits((QSerialPort::StopBits)(ui->cb_stpBits->currentText().toInt() + 1));
    COMPORT_OUT->setFlowControl((QSerialPort::FlowControl)ui->cb_flowControl->currentIndex());
    COMPORT_OUT->clearError();
    COMPORT_OUT->open(QSerialPort::ReadWrite);
    if (!COMPORT_OUT->isOpen()) {
        COMPORT_OUT->close();
        delete COMPORT_OUT;
        close();
    }
    COMPORT_OUT->flush();
}

void OutSerial::on_pb_disconnect_clicked() {
    ui->pb_connect->setEnabled(true);
    ui->pb_disconnect->setDisabled(true);
    COMPORT_OUT->close();
    COMPORT_OUT = nullptr;
}

void OutSerial::on_OutSerial_rejected() {
    if (COMPORT_OUT != nullptr)
        if (COMPORT_OUT->isOpen()) {
            COMPORT_OUT->close();
            COMPORT_OUT = nullptr;
        }
}
