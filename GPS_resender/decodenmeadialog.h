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

public slots:
    void updateNMEA();

private slots:
    void on_l_gll_windowTitleChanged(const QString &title);

    void on_le_GLL_textChanged(const QString &arg1);

private:
    Ui::DecodeNMEADialog *ui;
};

#endif // DECODENMEADIALOG_H
