#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    fill_cb_serialInfo();
}

MainWindow::~MainWindow() {
    COMPORT->close();
    // qInfo() << COMPORT->isOpen();
    delete COMPORT;

    delete ui;
}

void MainWindow::read_data() {
    if (COMPORT->isOpen()) {

        while (COMPORT->bytesAvailable()) {
            dataFromSerial.append(COMPORT->readAll());
        }
        while (dataFromSerial.contains(char(10))) {
            QString lineShow = dataFromSerial.left(dataFromSerial.indexOf(char(10)));
            lineShow.replace(char(13), "");
            if (!ui->pb_term_Stop->isChecked()) {
                if (lineShow.contains("PMTK")) {
                    // usuanie resztki poprzedniej danej bez zakończenia <LF>
                    if (lineShow.indexOf("$PMTK") > 0) {
                        lineShow.remove(0, lineShow.indexOf("$PMTK"));
                    }
                    ui->pte_PMTK_answer->appendPlainText(lineShow);
                } else {
                    ui->pte_term->appendPlainText(lineShow);
                }
                if (lineShow.contains("GPGGA")) {
                    ui->le_googleMaps->setText(encodeGPSfromGGA(lineShow));
                }
            }
            dataFromSerial.remove(0, dataFromSerial.indexOf(char(10)) + 1);
        }
    }
}

void MainWindow::fill_cb_serialInfo() {
    ui->cb_serial_port->clear();
    for (const QSerialPortInfo &portInfo : QSerialPortInfo::availablePorts()) {
        portInfoList.append(portInfo.portName() + ";" + portInfo.description() + ";" + portInfo.manufacturer() + ";"
                            + portInfo.serialNumber() + ";" + QString::number(portInfo.productIdentifier(), 16) + ";"
                            + QString::number(portInfo.vendorIdentifier(), 16) + ";" + portInfo.systemLocation());

        // sprawdzenie czyu port otwarty, jeżeli nie to dodanie do listy możliwych portów
        QSerialPort *COMPORT = new QSerialPort();
        COMPORT->setPortName(portInfo.portName());
        COMPORT->clearError();
        COMPORT->open(QSerialPort::ReadWrite);
        if (COMPORT->isOpen()) {
            ui->cb_serial_port->addItem(portInfo.portName());
        }
        COMPORT->close();
        delete COMPORT;
    }
}

QString MainWindow::decimalToLonLat(double value) {
    double degValue = value / 100; // kropka o dwa miejsca w lewo
    int degrees = (int)degValue;   // obcięcie od prawej do kropki
    double gps = degrees + (((degValue - degrees) * 100) / 60);
    return QString::number(gps, 'f', 7);
}

QString MainWindow::encodeGPSfromGGA(QString GGAstr) {
    QString temp = GGAstr;
    temp.remove(0, temp.indexOf(',') + 1).remove(0, temp.indexOf(',') + 1);
    QString sMapLat = temp.left(temp.indexOf(','));
    temp.remove(0, temp.indexOf(',') + 1).remove(0, temp.indexOf(',') + 1);
    QString sMapLon = temp.left(temp.indexOf(','));
    temp = decimalToLonLat(sMapLat.toDouble()) + " " + decimalToLonLat(sMapLon.toDouble());
    return temp;
}

void MainWindow::sendCommand(QString cmd) {
    QByteArray text = QString("PMTK").toLatin1() + cmd.toLatin1();
    int checksum = 0;
    for (int var = 0; var < text.length(); ++var) {
        checksum = checksum ^ text.at(var);
    }
    QString outSend = "$" + text + "*" + QString::number(checksum, 16) + "\r\n";
    if (COMPORT != nullptr) {
        COMPORT->write(outSend.toLatin1());
    }
}

void MainWindow::on_pb_serial_connect_toggled(bool checked) {
    if (checked) {
        COMPORT = new QSerialPort();
        COMPORT->setPortName(ui->cb_serial_port->currentText());
        COMPORT->setBaudRate(ui->cb_serial_baud->currentText().toInt());
        COMPORT->setParity(QSerialPort::NoParity);
        COMPORT->setDataBits(QSerialPort::Data8);
        COMPORT->setStopBits(QSerialPort::OneStop);
        COMPORT->setFlowControl(QSerialPort::NoFlowControl);
        COMPORT->clearError();
        COMPORT->open(QSerialPort::ReadWrite);
        if (!COMPORT->isOpen()) {
            COMPORT->close();
            delete COMPORT;
            close();
        }
        COMPORT->flush();
        ui->pb_serial_connect->setText("Disconnect");

        connect(COMPORT, SIGNAL(readyRead()), this, SLOT(read_data()));

    } else {
        disconnect(COMPORT, SIGNAL(readyRead()), this, SLOT(read_data()));
        COMPORT->close();
        delete COMPORT;
        COMPORT = nullptr;
        ui->pb_serial_connect->setText("Connect");
    }
}

void MainWindow::on_pb_term_Stop_toggled(bool checked) {
    if (checked) {
        ui->pb_term_Stop->setText("Start");
    } else {
        ui->pb_term_Stop->setText("Stop");
    }
}

void MainWindow::on_pb_term_clear_clicked() {
    ui->pte_term->clear();
}

void MainWindow::on_pb_term_send_clicked() {
    ui->pte_term->clear();
    ui->cb_send->insertItem(0, ui->cb_send->currentText());
    sendCommand(ui->cb_send->currentText().toLatin1());
    QApplication::processEvents();
}

void MainWindow::on_cb_send_editTextChanged(const QString &arg1) {
    QByteArray text = QString("PMTK").toLatin1() + arg1.toLatin1();
    int checksum = 0;
    for (int var = 0; var < text.length(); ++var) {
        checksum = checksum ^ text.at(var);
    }
    ui->l_term_crc->setText("*" + QString::number(checksum, 16) + "<CR><LF>");
}

void MainWindow::on_bp_restart_hot_clicked() {
    sendCommand("101");
}

void MainWindow::on_bp_restart_warm_clicked() {
    sendCommand("102");
}

void MainWindow::on_bp_restart_cold_clicked() {
    sendCommand("103");
}

void MainWindow::on_bp_restart_full_clicked() {
    sendCommand("104");
}

void MainWindow::on_pb_set_freq_clicked() {
    switch (ui->cb_freq->currentIndex()) {
    case 0:
        sendCommand("220,1000");
        break;
    case 1:
        sendCommand("220,500");
        break;
    case 2:
        sendCommand("220,200");
        break;
    case 3:
        sendCommand("220,100");
        break;
    default:
        break;
    }
}

void MainWindow::on_pb_api_q_fix_ctl_clicked() {
    sendCommand("400");
}

void MainWindow::on_pb_set_gps_baud_clicked() {
    sendCommand("251," + ui->cb_gps_baud->currentText());

    //    QApplication::processEvents();
    //    disconnect(COMPORT, SIGNAL(readyRead()), this, SLOT(read_data()));
    //    COMPORT->close();
    //    qInfo() << ui->cb_gps_baud->currentText().toInt();
    //    qInfo() << COMPORT->setBaudRate(ui->cb_gps_baud->currentText().toInt());
    //    qInfo() << COMPORT->open(QSerialPort::ReadWrite);
    //    COMPORT->flush();
    //    connect(COMPORT, SIGNAL(readyRead()), this, SLOT(read_data()));
}

void MainWindow::on_pb_set_dgps_clicked() {
    sendCommand("301," + QString::number(ui->cb_dgps->currentIndex()));
}

void MainWindow::on_pb_api_q_dgps_mode_clicked() {
    sendCommand("401");
}

void MainWindow::on_pb_set_sbas_clicked() {
    sendCommand("313," + QString::number(ui->cb_dgps->currentIndex()));
}

void MainWindow::on_pb_api_q_sbas_en_clicked() {
    sendCommand("413");
}

void MainWindow::on_pb_out_set_clicked() {
    QString out = "314,";
    out += QString::number(ui->cb_out_gll->currentIndex()) + ",";
    out += QString::number(ui->cb_out_rmc->currentIndex()) + ",";
    out += QString::number(ui->cb_out_vtg->currentIndex()) + ",";
    out += QString::number(ui->cb_out_gga->currentIndex()) + ",";
    out += QString::number(ui->cb_out_gsa->currentIndex()) + ",";
    out += QString::number(ui->cb_out_gsv->currentIndex()) + ",";
    out += "0,0,0,0,0,0,0,0,0,0,0,";
    out += QString::number(ui->cb_out_zda->currentIndex()) + ",";
    out += QString::number(ui->cb_out_chn->currentIndex());
    sendCommand(out);
}

void MainWindow::on_pb_q_nmea_output_clicked() {
    sendCommand("414");
}

void MainWindow::on_pb__PMTK_answer_clear_clicked() {
    ui->pte_PMTK_answer->clear();
}

void MainWindow::on_pb_firm_clicked() {
    sendCommand("605");
}

void MainWindow::on_pb_GNS_mode_clicked() {
    QString out = "353,";
    out += QString::number(ui->cb_GPS_search->isChecked()) + ",";
    out += QString::number(ui->cb_glonass_search->isChecked());
    sendCommand(out);
}

void MainWindow::on_pushButton_clicked() {
    fill_cb_serialInfo();
}
