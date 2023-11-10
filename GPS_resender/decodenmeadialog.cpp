#include "decodenmeadialog.h"
#include "ui_decodenmeadialog.h"

DecodeNMEADialog::DecodeNMEADialog(QWidget *parent) : QDialog(parent), ui(new Ui::DecodeNMEADialog) {
    ui->setupUi(this);
    connect(parent, SIGNAL(updateNMEA_signal()), this, SLOT(updateNMEA()));
}

DecodeNMEADialog::~DecodeNMEADialog() {
    delete ui;
}

void DecodeNMEADialog::updateNMEA() {
    ui->le_GLL->setText("aaa");
}

void DecodeNMEADialog::on_l_gll_windowTitleChanged(const QString &title) {
    qInfo() << "change" << title;
}

void DecodeNMEADialog::on_le_GLL_textChanged(const QString &arg1)
{
    qInfo() << "change" << arg1;
}

