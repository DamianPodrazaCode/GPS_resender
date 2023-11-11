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

void DecodeNMEADialog::on_le_gll_textChanged(const QString &arg1) {
    // qInfo() << arg1;
    QString temp = arg1;
    temp.remove(0, temp.indexOf(',') + 1);
    QString lat = temp.left(temp.indexOf(','));
    temp.remove(0, temp.indexOf(',') + 1);
    QString latIn = temp.left(temp.indexOf(','));
    temp.remove(0, temp.indexOf(',') + 1);
    QString lon = temp.left(temp.indexOf(','));
    temp.remove(0, temp.indexOf(',') + 1);
    QString lonIn = temp.left(temp.indexOf(','));
    temp.remove(0, temp.indexOf(',') + 1);
    QString utcTime = temp.left(temp.indexOf(','));
    temp.remove(0, temp.indexOf(',') + 1);
    QString stat = temp.left(temp.indexOf(','));
    temp.remove(0, temp.indexOf(',') + 1);
    QString mode = temp.left(temp.indexOf('*'));

    ui->gll_lat->setText(lat + " " + latIn);
    ui->gll_lon->setText(lon + " " + lonIn);
    ui->gll_utc->setText(utcTime);
    if (stat == "A")
        ui->gll_stat->setText("A - Data Valid");
    else if (stat == "V")
        ui->gll_stat->setText("A - Data Not Valid");
    else
        ui->gll_stat->setText("---");
    if (mode == "A")
        ui->gll_mode->setText("A - Autonomous");
    else if (mode == "D")
        ui->gll_mode->setText("D - DGPS");
    else if (mode == "E")
        ui->gll_mode->setText("E - DR");
    else
        ui->gll_mode->setText("---");
}

void DecodeNMEADialog::on_le_rmc_textChanged(const QString &arg1) {
    QString temp = arg1;
    temp.remove(0, temp.indexOf(',') + 1);
    QString utcTime = temp.left(temp.indexOf(','));
    temp.remove(0, temp.indexOf(',') + 1);
    QString stat = temp.left(temp.indexOf(','));
    temp.remove(0, temp.indexOf(',') + 1);
    QString lat = temp.left(temp.indexOf(','));
    temp.remove(0, temp.indexOf(',') + 1);
    QString latIn = temp.left(temp.indexOf(','));
    temp.remove(0, temp.indexOf(',') + 1);
    QString lon = temp.left(temp.indexOf(','));
    temp.remove(0, temp.indexOf(',') + 1);
    QString lonIn = temp.left(temp.indexOf(','));
    temp.remove(0, temp.indexOf(',') + 1);
    QString sog = temp.left(temp.indexOf(','));
    temp.remove(0, temp.indexOf(',') + 1);
    QString cog = temp.left(temp.indexOf(','));
    temp.remove(0, temp.indexOf(',') + 1);
    QString date = temp.left(temp.indexOf(','));
    temp.remove(0, temp.indexOf(',') + 1);
    QString mv = temp.left(temp.indexOf(','));
    temp.remove(0, temp.indexOf(',') + 1);
    QString mvIn = temp.left(temp.indexOf(','));
    temp.remove(0, temp.indexOf(',') + 1);
    QString mode = temp.left(temp.indexOf('*'));

    ui->rmc_utc->setText(utcTime);
    // ui->rmc_stat->setText(stat);
    if (stat == "A")
        ui->rmc_stat->setText("A - Data Valid");
    else if (stat == "V")
        ui->rmc_stat->setText("A - Data Not Valid");
    else
        ui->rmc_stat->setText("---");
    ui->rmc_lat->setText(lat + " " + latIn);
    ui->rmc_lon->setText(lon + " " + lonIn);
    ui->rmc_sog->setText(sog + " knots");
    ui->rmc_cog->setText(sog + " degrees");
    ui->rmc_date->setText(date);
    ui->rmc_mv->setText(mv + " " + mvIn);

    if (mode == "A")
        ui->rmc_mode->setText("A - Autonomous");
    else if (mode == "D")
        ui->rmc_mode->setText("D - Differential");
    else if (mode == "E")
        ui->rmc_mode->setText("E - Estimated");
    else
        ui->rmc_mode->setText("---");
}

void DecodeNMEADialog::on_le_vtg_textChanged(const QString &arg1) {
    QString temp = arg1;
    temp.remove(0, temp.indexOf(',') + 1);
    QString course_t = temp.left(temp.indexOf(','));
    temp.remove(0, temp.indexOf(',') + 1);
    temp.remove(0, temp.indexOf(',') + 1);
    QString course_m = temp.left(temp.indexOf(','));
    temp.remove(0, temp.indexOf(',') + 1);
    temp.remove(0, temp.indexOf(',') + 1);
    QString speed_k = temp.left(temp.indexOf(','));
    temp.remove(0, temp.indexOf(',') + 1);
    temp.remove(0, temp.indexOf(',') + 1);
    QString speed_km = temp.left(temp.indexOf(','));
    temp.remove(0, temp.indexOf(',') + 1);
    temp.remove(0, temp.indexOf(',') + 1);
    QString mode = temp.left(temp.indexOf('*'));

    ui->vtg_hid->setText(course_t + " degrees");
    ui->vtg_mhid->setText(course_m + " degrees");
    ui->vtg_s_k->setText(speed_k + " knots");
    ui->vtg_s_km->setText(speed_km + " km/h");
    if (mode == "A")
        ui->vtg_mode->setText("A - Autonomous");
    else if (mode == "D")
        ui->vtg_mode->setText("D - Differential");
    else if (mode == "E")
        ui->vtg_mode->setText("E - Estimated");
    else
        ui->vtg_mode->setText("---");
}

void DecodeNMEADialog::on_le_gga_textChanged(const QString &arg1) {
    QString temp = arg1;
    temp.remove(0, temp.indexOf(',') + 1);
    QString utcTime = temp.left(temp.indexOf(','));
    temp.remove(0, temp.indexOf(',') + 1);
    QString lat = temp.left(temp.indexOf(','));
    temp.remove(0, temp.indexOf(',') + 1);
    QString latIn = temp.left(temp.indexOf(','));
    temp.remove(0, temp.indexOf(',') + 1);
    QString lon = temp.left(temp.indexOf(','));
    temp.remove(0, temp.indexOf(',') + 1);
    QString lonIn = temp.left(temp.indexOf(','));
    temp.remove(0, temp.indexOf(',') + 1);
    QString pfix = temp.left(temp.indexOf(','));
    temp.remove(0, temp.indexOf(',') + 1);
    QString satU = temp.left(temp.indexOf(','));
    temp.remove(0, temp.indexOf(',') + 1);
    QString hdop = temp.left(temp.indexOf(','));
    temp.remove(0, temp.indexOf(',') + 1);
    QString alt = temp.left(temp.indexOf(','));
    temp.remove(0, temp.indexOf(',') + 1);
    temp.remove(0, temp.indexOf(',') + 1);
    QString geo = temp.left(temp.indexOf(','));
    temp.remove(0, temp.indexOf(',') + 1);
    temp.remove(0, temp.indexOf(',') + 1);
    QString aod = temp.left(temp.indexOf('*'));

    ui->gga_utc->setText(utcTime);
    ui->gga_lat->setText(lat + " " + latIn);
    ui->gga_lon->setText(lon + " " + lonIn);
    if (pfix == "0")
        ui->gga_pfi->setText("0 - Fix not avaiable");
    else if (pfix == "1")
        ui->gga_pfi->setText("1 - GPS fix");
    else if (pfix == "2")
        ui->gga_pfi->setText("2 - Differential GPS fix");
    else
        ui->gga_pfi->setText("---");
    ui->gga_su->setText(satU);
    ui->gga_hdop->setText(hdop);
    ui->gga_alt->setText(alt + " meters");
    ui->gga_gs->setText(geo + " meters");
    ui->gga_aod->setText(aod + " second");
}
