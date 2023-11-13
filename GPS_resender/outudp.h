#ifndef OUTUDP_H
#define OUTUDP_H

#include <QDialog>

namespace Ui {
class OutUdp;
}

class OutUdp : public QDialog
{
    Q_OBJECT

public:
    explicit OutUdp(QWidget *parent = nullptr);
    ~OutUdp();

private:
    Ui::OutUdp *ui;
};

#endif // OUTUDP_H
