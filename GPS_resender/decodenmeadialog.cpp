#include "decodenmeadialog.h"
#include "ui_decodenmeadialog.h"

DecodeNMEADialog::DecodeNMEADialog(QWidget *parent) : QDialog(parent), ui(new Ui::DecodeNMEADialog) {
    ui->setupUi(this);
}

DecodeNMEADialog::~DecodeNMEADialog() {
    delete ui;
}

void DecodeNMEADialog::setGLL(QString str) {
    ui->le_gll->setText(str);
}

void DecodeNMEADialog::setRMC(QString str) {
    ui->le_rmc->setText(str);
}

void DecodeNMEADialog::setVTG(QString str) {
    ui->le_vtg->setText(str);
}

void DecodeNMEADialog::setGGA(QString str) {
    ui->le_gga->setText(str);
}

void DecodeNMEADialog::setGSA(QString str) {
    ui->le_gsa->setText(str);
}

void DecodeNMEADialog::setGSV(QString str) {
}

void DecodeNMEADialog::setZDA(QString str) {
    ui->le_zda->setText(str);
}

void DecodeNMEADialog::setCHN(QString str) {
    ui->le_chn->setText(str);
}

void DecodeNMEADialog::on_DecodeNMEADialog_rejected()
{

}

