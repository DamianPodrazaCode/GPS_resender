/********************************************************************************
** Form generated from reading UI file 'outudp.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTUDP_H
#define UI_OUTUDP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_OutUdp
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *le_ip;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *le_port;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pb_startUDP;
    QPushButton *pb_stopUDP;

    void setupUi(QDialog *OutUdp)
    {
        if (OutUdp->objectName().isEmpty())
            OutUdp->setObjectName("OutUdp");
        OutUdp->resize(272, 127);
        gridLayout = new QGridLayout(OutUdp);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(OutUdp);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        le_ip = new QLineEdit(OutUdp);
        le_ip->setObjectName("le_ip");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_ip->sizePolicy().hasHeightForWidth());
        le_ip->setSizePolicy(sizePolicy);
        le_ip->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(le_ip);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(OutUdp);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        le_port = new QLineEdit(OutUdp);
        le_port->setObjectName("le_port");
        sizePolicy.setHeightForWidth(le_port->sizePolicy().hasHeightForWidth());
        le_port->setSizePolicy(sizePolicy);
        le_port->setMinimumSize(QSize(0, 0));

        horizontalLayout_2->addWidget(le_port);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pb_startUDP = new QPushButton(OutUdp);
        pb_startUDP->setObjectName("pb_startUDP");
        pb_startUDP->setCheckable(false);
        pb_startUDP->setChecked(false);

        horizontalLayout_3->addWidget(pb_startUDP);

        pb_stopUDP = new QPushButton(OutUdp);
        pb_stopUDP->setObjectName("pb_stopUDP");

        horizontalLayout_3->addWidget(pb_stopUDP);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        retranslateUi(OutUdp);

        QMetaObject::connectSlotsByName(OutUdp);
    } // setupUi

    void retranslateUi(QDialog *OutUdp)
    {
        OutUdp->setWindowTitle(QCoreApplication::translate("OutUdp", "OUT UDP", nullptr));
        label->setText(QCoreApplication::translate("OutUdp", "Host Address:", nullptr));
        le_ip->setText(QCoreApplication::translate("OutUdp", "255.255.255.255", nullptr));
        label_2->setText(QCoreApplication::translate("OutUdp", "Port:", nullptr));
        le_port->setText(QCoreApplication::translate("OutUdp", "3333", nullptr));
        pb_startUDP->setText(QCoreApplication::translate("OutUdp", "Start UDP", nullptr));
        pb_stopUDP->setText(QCoreApplication::translate("OutUdp", "Stop UDP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OutUdp: public Ui_OutUdp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTUDP_H
