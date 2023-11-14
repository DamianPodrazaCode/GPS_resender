#include "outudp.h"
#include "mainwindow.h"
#include "ui_outudp.h"

OutUdp::OutUdp(QWidget *parent) : QDialog(parent), ui(new Ui::OutUdp) {
    ui->setupUi(this);
}

OutUdp::~OutUdp() {
    delete ui;
}

void OutUdp::on_pb_startUDP_clicked() {
    ipAddr = ui->le_ip->text();
    port = ui->le_port->text().toInt();
    fUdpStart = true;
}

void OutUdp::on_pb_stopUDP_clicked() {
    fUdpStart = false;
}
