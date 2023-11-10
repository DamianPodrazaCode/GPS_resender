#ifndef DECODENMEADIALOG_H
#define DECODENMEADIALOG_H

#include <QDialog>

namespace Ui {
class DecodeNMEADialog;
}

class DecodeNMEADialog : public QDialog {
    Q_OBJECT

public:
    explicit DecodeNMEADialog(QWidget *parent = nullptr);
    ~DecodeNMEADialog();

    void setGLL(QString str);
    void setRMC(QString str);
    void setVTG(QString str);
    void setGGA(QString str);
    void setGSA(QString str);
    void setGSV(QString str);
    void setZDA(QString str);
    void setCHN(QString str);

private slots:

    void on_DecodeNMEADialog_rejected();

private:
    Ui::DecodeNMEADialog *ui;
};

#endif // DECODENMEADIALOG_H
