#ifndef OUTUDP_H
#define OUTUDP_H

#include <QDialog>

namespace Ui {
class OutUdp;
}

class OutUdp : public QDialog {
    Q_OBJECT

public:
    explicit OutUdp(QWidget *parent = nullptr);
    ~OutUdp();

    bool fUdpStart = false;
    QString ipAddr;
    uint16_t port;

private slots:

    void on_pb_startUDP_clicked();

    void on_pb_stopUDP_clicked();

private:
    Ui::OutUdp *ui;
};

#endif // OUTUDP_H
