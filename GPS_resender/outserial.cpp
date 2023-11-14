#include "outserial.h"
#include "ui_outserial.h"

OutSerial::OutSerial(QWidget *parent) : QDialog(parent), ui(new Ui::OutSerial) {
    ui->setupUi(this);
}

OutSerial::~OutSerial() {
    delete ui;
}
