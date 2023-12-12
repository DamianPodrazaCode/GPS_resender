/********************************************************************************
** Form generated from reading UI file 'outserial.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTSERIAL_H
#define UI_OUTSERIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_OutSerial
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pb_scan;
    QComboBox *cb_ports;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *cb_baudrate;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *cb_databits;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *cb_flowControl;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QComboBox *cb_parity;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QComboBox *cb_stpBits;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer;
    QPushButton *pb_connect;
    QPushButton *pb_disconnect;

    void setupUi(QDialog *OutSerial)
    {
        if (OutSerial->objectName().isEmpty())
            OutSerial->setObjectName("OutSerial");
        OutSerial->resize(257, 236);
        gridLayout = new QGridLayout(OutSerial);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pb_scan = new QPushButton(OutSerial);
        pb_scan->setObjectName("pb_scan");

        horizontalLayout->addWidget(pb_scan);

        cb_ports = new QComboBox(OutSerial);
        cb_ports->setObjectName("cb_ports");
        cb_ports->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(cb_ports);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(OutSerial);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        cb_baudrate = new QComboBox(OutSerial);
        cb_baudrate->addItem(QString());
        cb_baudrate->addItem(QString());
        cb_baudrate->addItem(QString());
        cb_baudrate->addItem(QString());
        cb_baudrate->addItem(QString());
        cb_baudrate->setObjectName("cb_baudrate");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cb_baudrate->sizePolicy().hasHeightForWidth());
        cb_baudrate->setSizePolicy(sizePolicy);
        cb_baudrate->setMinimumSize(QSize(148, 0));
        cb_baudrate->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_2->addWidget(cb_baudrate);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(OutSerial);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        cb_databits = new QComboBox(OutSerial);
        cb_databits->addItem(QString());
        cb_databits->addItem(QString());
        cb_databits->addItem(QString());
        cb_databits->addItem(QString());
        cb_databits->setObjectName("cb_databits");
        sizePolicy.setHeightForWidth(cb_databits->sizePolicy().hasHeightForWidth());
        cb_databits->setSizePolicy(sizePolicy);
        cb_databits->setMinimumSize(QSize(148, 0));
        cb_databits->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_3->addWidget(cb_databits);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_3 = new QLabel(OutSerial);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        cb_flowControl = new QComboBox(OutSerial);
        cb_flowControl->addItem(QString());
        cb_flowControl->addItem(QString());
        cb_flowControl->addItem(QString());
        cb_flowControl->setObjectName("cb_flowControl");
        sizePolicy.setHeightForWidth(cb_flowControl->sizePolicy().hasHeightForWidth());
        cb_flowControl->setSizePolicy(sizePolicy);
        cb_flowControl->setMinimumSize(QSize(148, 0));
        cb_flowControl->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_4->addWidget(cb_flowControl);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_4 = new QLabel(OutSerial);
        label_4->setObjectName("label_4");

        horizontalLayout_5->addWidget(label_4);

        cb_parity = new QComboBox(OutSerial);
        cb_parity->addItem(QString());
        cb_parity->addItem(QString());
        cb_parity->addItem(QString());
        cb_parity->addItem(QString());
        cb_parity->addItem(QString());
        cb_parity->setObjectName("cb_parity");
        sizePolicy.setHeightForWidth(cb_parity->sizePolicy().hasHeightForWidth());
        cb_parity->setSizePolicy(sizePolicy);
        cb_parity->setMinimumSize(QSize(148, 0));
        cb_parity->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_5->addWidget(cb_parity);


        gridLayout->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_5 = new QLabel(OutSerial);
        label_5->setObjectName("label_5");

        horizontalLayout_6->addWidget(label_5);

        cb_stpBits = new QComboBox(OutSerial);
        cb_stpBits->addItem(QString());
        cb_stpBits->addItem(QString());
        cb_stpBits->addItem(QString());
        cb_stpBits->setObjectName("cb_stpBits");
        sizePolicy.setHeightForWidth(cb_stpBits->sizePolicy().hasHeightForWidth());
        cb_stpBits->setSizePolicy(sizePolicy);
        cb_stpBits->setMinimumSize(QSize(148, 0));
        cb_stpBits->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_6->addWidget(cb_stpBits);


        gridLayout->addLayout(horizontalLayout_6, 5, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        pb_connect = new QPushButton(OutSerial);
        pb_connect->setObjectName("pb_connect");

        horizontalLayout_7->addWidget(pb_connect);

        pb_disconnect = new QPushButton(OutSerial);
        pb_disconnect->setObjectName("pb_disconnect");

        horizontalLayout_7->addWidget(pb_disconnect);


        gridLayout->addLayout(horizontalLayout_7, 6, 0, 1, 1);


        retranslateUi(OutSerial);

        cb_baudrate->setCurrentIndex(4);
        cb_databits->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(OutSerial);
    } // setupUi

    void retranslateUi(QDialog *OutSerial)
    {
        OutSerial->setWindowTitle(QCoreApplication::translate("OutSerial", "OUT Serial Port", nullptr));
        pb_scan->setText(QCoreApplication::translate("OutSerial", "Scan Ports", nullptr));
        label->setText(QCoreApplication::translate("OutSerial", "Baud Rate", nullptr));
        cb_baudrate->setItemText(0, QCoreApplication::translate("OutSerial", "9600", nullptr));
        cb_baudrate->setItemText(1, QCoreApplication::translate("OutSerial", "19200", nullptr));
        cb_baudrate->setItemText(2, QCoreApplication::translate("OutSerial", "38400", nullptr));
        cb_baudrate->setItemText(3, QCoreApplication::translate("OutSerial", "57600", nullptr));
        cb_baudrate->setItemText(4, QCoreApplication::translate("OutSerial", "115200", nullptr));

        label_2->setText(QCoreApplication::translate("OutSerial", "Data Bits", nullptr));
        cb_databits->setItemText(0, QCoreApplication::translate("OutSerial", "5", nullptr));
        cb_databits->setItemText(1, QCoreApplication::translate("OutSerial", "6", nullptr));
        cb_databits->setItemText(2, QCoreApplication::translate("OutSerial", "7", nullptr));
        cb_databits->setItemText(3, QCoreApplication::translate("OutSerial", "8", nullptr));

        label_3->setText(QCoreApplication::translate("OutSerial", "Flow Control", nullptr));
        cb_flowControl->setItemText(0, QCoreApplication::translate("OutSerial", "NoFlowControl", nullptr));
        cb_flowControl->setItemText(1, QCoreApplication::translate("OutSerial", "HardwareControl", nullptr));
        cb_flowControl->setItemText(2, QCoreApplication::translate("OutSerial", "SoftwareControl", nullptr));

        label_4->setText(QCoreApplication::translate("OutSerial", "Parity", nullptr));
        cb_parity->setItemText(0, QCoreApplication::translate("OutSerial", "NoParity", nullptr));
        cb_parity->setItemText(1, QCoreApplication::translate("OutSerial", "EvenParity", nullptr));
        cb_parity->setItemText(2, QCoreApplication::translate("OutSerial", "OddParity", nullptr));
        cb_parity->setItemText(3, QCoreApplication::translate("OutSerial", "SpaceParity", nullptr));
        cb_parity->setItemText(4, QCoreApplication::translate("OutSerial", "MarkParity", nullptr));

        label_5->setText(QCoreApplication::translate("OutSerial", "Stop Bits", nullptr));
        cb_stpBits->setItemText(0, QCoreApplication::translate("OutSerial", "OneStop", nullptr));
        cb_stpBits->setItemText(1, QCoreApplication::translate("OutSerial", "TwoStop", nullptr));
        cb_stpBits->setItemText(2, QCoreApplication::translate("OutSerial", "OneAndHalfStop", nullptr));

        pb_connect->setText(QCoreApplication::translate("OutSerial", "Connect", nullptr));
        pb_disconnect->setText(QCoreApplication::translate("OutSerial", "Disconnect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OutSerial: public Ui_OutSerial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTSERIAL_H
