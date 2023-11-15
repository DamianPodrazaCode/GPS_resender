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

private:
    Ui::OutSerial *ui;
    QSerialPort *COMPORT_OUT = nullptr;
    QStringList portInfoList;
    void fill_cb_serialInfo();
};

#endif // OUTSERIAL_H
