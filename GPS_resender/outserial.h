#ifndef OUTSERIAL_H
#define OUTSERIAL_H

#include <QDialog>

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
};

#endif // OUTSERIAL_H
