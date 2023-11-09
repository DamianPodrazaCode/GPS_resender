#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDebug>
#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>

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

private slots:
    void read_data();

    void on_pb_serial_connect_toggled(bool checked);
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

private:
    Ui::MainWindow *ui;
    QSerialPort *COMPORT = nullptr;
    QStringList portInfoList;
    void fill_cb_serialInfo();
    QByteArray dataFromSerial;
    uint32_t checksum;
    QString out_send;
};
#endif // MAINWINDOW_H
