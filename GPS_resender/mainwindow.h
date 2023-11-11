#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "decodenmeadialog.h"
#include <QDebug>
#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QSettings>
#include <QThread>
#include <QFile>
#include <QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:

private slots:
    void read_data();

    void on_pb_serial_connect_toggled(bool checked);
    void on_pb_reascan_clicked();

    void on_pb_term_Stop_toggled(bool checked);
    void on_pb_term_clear_clicked();
    void on_pb_term_send_clicked();
    void on_cb_send_editTextChanged(const QString &arg1);

    void on_bp_restart_hot_clicked();
    void on_bp_restart_warm_clicked();
    void on_bp_restart_cold_clicked();
    void on_bp_restart_full_clicked();

    void on_pb_set_freq_clicked();
    void on_pb_api_q_fix_ctl_clicked();

    void on_pb_set_gps_baud_clicked();

    void on_pb_set_dgps_clicked();
    void on_pb_api_q_dgps_mode_clicked();

    void on_pb_set_sbas_clicked();
    void on_pb_api_q_sbas_en_clicked();

    void on_pb_out_set_clicked();
    void on_pb_q_nmea_output_clicked();

    void on_pb__PMTK_answer_clear_clicked();
    void on_pb_firm_clicked();
    void on_pb_GNS_mode_clicked();

    void on_pb_decode_nmea_clicked();

    void on_pb_start_save_to_file_clicked();

    void on_pb_start_save_to_file_toggled(bool checked);

private:
    QString getSettings(QString group, QString key);
    void setSettings(QString group, QString key, QString value);
    Ui::MainWindow *ui;
    QSerialPort *COMPORT = nullptr;
    QStringList portInfoList;
    void fill_cb_serialInfo();
    QByteArray dataFromSerial;
    // uint32_t checksum;
    // QString out_send;
    QString decimalToLonLat(double value);
    QString encodeGPSfromGGA(QString GGAstr);
    void sendCommand(QString cmd);
    DecodeNMEADialog *dnd = nullptr;
};
#endif // MAINWINDOW_H
