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

void DecodeNMEADialog::setPGSV(QString str) {
    QString temp = str;
    temp = temp.remove(0, temp.indexOf(',') + 1);
    pgsvCount = temp.left(temp.indexOf(',')).toInt();
    temp = temp.remove(0, temp.indexOf(',') + 1);
    int index = temp.left(temp.indexOf(',')).toInt();
    // qInfo() << temp << pgsvCount << index;
    if ((index - 1) == lPGSV.count()) {
        lPGSV.append(str);
    } else if (lPGSV.count() > 0) {
        ui->pte_pgsv->clear();
        for (int i = 0; i < pgsvCount; ++i) {
            if (i < lPGSV.count())
                ui->pte_pgsv->appendPlainText(lPGSV.at(i));
        }
        lPGSV.clear();
        lPGSV.append(str);
    }
}

void DecodeNMEADialog::setLGSV(QString str) {
    QString temp = str;
    temp = temp.remove(0, temp.indexOf(',') + 1);
    lgsvCount = temp.left(temp.indexOf(',')).toInt();
    temp = temp.remove(0, temp.indexOf(',') + 1);
    int index = temp.left(temp.indexOf(',')).toInt();
    // qInfo() << temp << lgsvCount << index;
    if ((index - 1) == lLGSV.count()) {
        lLGSV.append(str);
    } else if (lLGSV.count() > 0) {
        ui->pte_lgsv->clear();
        for (int i = 0; i < lgsvCount; ++i) {
            if (i < lLGSV.count())
                ui->pte_lgsv->appendPlainText(lLGSV.at(i));
        }
        lLGSV.clear();
        lLGSV.append(str);
    }
}

void DecodeNMEADialog::setZDA(QString str) {
    ui->le_zda->setText(str);
}

void DecodeNMEADialog::setCHN(QString str) {
    ui->pte_chn->clear();
    ui->pte_chn->appendPlainText(str);
}
