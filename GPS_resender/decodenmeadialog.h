#ifndef DECODENMEADIALOG_H
#define DECODENMEADIALOG_H

#include <QDialog>
#include <QStringList>

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
    void setPGSV(QString str);
    void setLGSV(QString str);
    void setZDA(QString str);
    void setCHN(QString str);

private slots:

private:
    Ui::DecodeNMEADialog *ui;
    int pgsvCount = 0;
    int lgsvCount = 0;
    QStringList lPGSV;
    QStringList lLGSV;
};

#endif // DECODENMEADIALOG_H
