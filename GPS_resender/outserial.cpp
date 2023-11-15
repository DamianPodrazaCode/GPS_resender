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
