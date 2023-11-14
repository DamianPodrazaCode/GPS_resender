#include "outtcp.h"
#include "ui_outtcp.h"

OutTcp::OutTcp(QWidget *parent) : QDialog(parent), ui(new Ui::OutTcp) {
    ui->setupUi(this);
}

OutTcp::~OutTcp() {
    delete ui;
}
