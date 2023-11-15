#ifndef OUTSERIAL_H
#define OUTSERIAL_H

#include <QDialog>
#include <QSerialPort>
#include <QSerialPortInfo>

namespace Ui {
class OutSerial;
}

class OutSerial : public QDialog {
    Q_OBJECT

public:
    explicit OutSerial(QWidget *parent = nullptr);
    ~OutSerial();

    QSerialPort *COMPORT_OUT = nullptr;

private slots:
    void on_pb_scan_clicked();
    void on_pb_connect_clicked();
    void on_pb_disconnect_clicked();

    void on_OutSerial_rejected();

private:
    Ui::OutSerial *ui;
    QStringList portInfoList;
    void fill_cb_serialInfo();
};

#endif // OUTSERIAL_H
