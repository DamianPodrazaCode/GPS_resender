#include "outudp.h"
#include "mainwindow.h"
#include "ui_outudp.h"

OutUdp::OutUdp(QWidget *parent) : QDialog(parent), ui(new Ui::OutUdp) {
    ui->setupUi(this);
}

OutUdp::~OutUdp() {
    delete ui;
}

void OutUdp::on_pb_sendUDP_clicked() {
}
