#ifndef OUTTCP_H
#define OUTTCP_H

#include <QDialog>

namespace Ui {
class OutTcp;
}

class OutTcp : public QDialog
{
    Q_OBJECT

public:
    explicit OutTcp(QWidget *parent = nullptr);
    ~OutTcp();

private:
    Ui::OutTcp *ui;
};

#endif // OUTTCP_H
