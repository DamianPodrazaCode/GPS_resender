/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *cb_serial_port;
    QLabel *label_2;
    QComboBox *cb_serial_baud;
    QPushButton *pb_serial_connect;
    QPushButton *pb_reascan;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_3;
    QPushButton *pb_set_freq;
    QComboBox *cb_freq;
    QPushButton *pb_api_q_fix_ctl;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_6;
    QComboBox *cb_gps_baud;
    QPushButton *pb_set_gps_baud;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_4;
    QPushButton *pb_set_dgps;
    QPushButton *pb_api_q_dgps_mode;
    QComboBox *cb_dgps;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_5;
    QPushButton *pb_set_sbas;
    QPushButton *pb_api_q_sbas_en;
    QComboBox *cb_sbas;
    QGroupBox *groupBox_11;
    QGridLayout *gridLayout_12;
    QCheckBox *cb_GPS_search;
    QCheckBox *cb_glonass_search;
    QPushButton *pb_GNS_mode;
    QGroupBox *groupBox_10;
    QGridLayout *gridLayout_11;
    QPushButton *pb_firm;
    QGroupBox *groupBox_13;
    QVBoxLayout *verticalLayout;
    QPushButton *bp_out_serial;
    QPushButton *pb_out_udp;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pb_term_clear;
    QPushButton *pb_term_Stop;
    QHBoxLayout *horizontalLayout_2;
    QLabel *l_term_pmtk;
    QComboBox *cb_send;
    QLabel *l_term_crc;
    QPushButton *pb_term_send;
    QPlainTextEdit *pte_term;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_10;
    QPlainTextEdit *pte_PMTK_answer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pb__PMTK_answer_clear;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_8;
    QPushButton *bp_restart_hot;
    QPushButton *bp_restart_warm;
    QPushButton *bp_restart_cold;
    QPushButton *bp_restart_full;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_2;
    QComboBox *cb_out_gll;
    QComboBox *cb_out_rmc;
    QComboBox *cb_out_vtg;
    QComboBox *cb_out_gga;
    QComboBox *cb_out_gsa;
    QComboBox *cb_out_gsv;
    QComboBox *cb_out_zda;
    QComboBox *cb_out_chn;
    QPushButton *pb_out_set;
    QPushButton *pb_q_nmea_output;
    QGroupBox *groupBox_12;
    QGridLayout *gridLayout_13;
    QPushButton *pb_decode_nmea;
    QGroupBox *groupBox_14;
    QGridLayout *gridLayout_14;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *cb_marker_file;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *le_number_frames_in_file;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLabel *l_counter_files;
    QPushButton *pb_start_save_to_file;
    QLineEdit *le_googleMaps;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1176, 816);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(1176, 834));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_7 = new QGridLayout(centralwidget);
        gridLayout_7->setObjectName("gridLayout_7");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setMinimumSize(QSize(250, 0));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cb_serial_port = new QComboBox(groupBox);
        cb_serial_port->setObjectName("cb_serial_port");

        gridLayout->addWidget(cb_serial_port, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        cb_serial_baud = new QComboBox(groupBox);
        cb_serial_baud->addItem(QString());
        cb_serial_baud->addItem(QString());
        cb_serial_baud->addItem(QString());
        cb_serial_baud->addItem(QString());
        cb_serial_baud->addItem(QString());
        cb_serial_baud->addItem(QString());
        cb_serial_baud->setObjectName("cb_serial_baud");

        gridLayout->addWidget(cb_serial_baud, 0, 3, 1, 1);

        pb_serial_connect = new QPushButton(groupBox);
        pb_serial_connect->setObjectName("pb_serial_connect");
        pb_serial_connect->setCheckable(true);

        gridLayout->addWidget(pb_serial_connect, 1, 2, 1, 2);

        pb_reascan = new QPushButton(groupBox);
        pb_reascan->setObjectName("pb_reascan");
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pb_reascan->sizePolicy().hasHeightForWidth());
        pb_reascan->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(pb_reascan, 1, 0, 1, 2);


        verticalLayout_3->addWidget(groupBox);

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName("groupBox_4");
        sizePolicy1.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy1);
        groupBox_4->setMinimumSize(QSize(250, 0));
        gridLayout_3 = new QGridLayout(groupBox_4);
        gridLayout_3->setObjectName("gridLayout_3");
        pb_set_freq = new QPushButton(groupBox_4);
        pb_set_freq->setObjectName("pb_set_freq");
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pb_set_freq->sizePolicy().hasHeightForWidth());
        pb_set_freq->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(pb_set_freq, 0, 1, 1, 1);

        cb_freq = new QComboBox(groupBox_4);
        cb_freq->addItem(QString());
        cb_freq->addItem(QString());
        cb_freq->addItem(QString());
        cb_freq->addItem(QString());
        cb_freq->setObjectName("cb_freq");
        sizePolicy3.setHeightForWidth(cb_freq->sizePolicy().hasHeightForWidth());
        cb_freq->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(cb_freq, 0, 0, 1, 1);

        pb_api_q_fix_ctl = new QPushButton(groupBox_4);
        pb_api_q_fix_ctl->setObjectName("pb_api_q_fix_ctl");

        gridLayout_3->addWidget(pb_api_q_fix_ctl, 1, 0, 1, 2);


        verticalLayout_3->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName("groupBox_5");
        sizePolicy1.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy1);
        groupBox_5->setMinimumSize(QSize(250, 0));
        gridLayout_6 = new QGridLayout(groupBox_5);
        gridLayout_6->setObjectName("gridLayout_6");
        cb_gps_baud = new QComboBox(groupBox_5);
        cb_gps_baud->addItem(QString());
        cb_gps_baud->addItem(QString());
        cb_gps_baud->addItem(QString());
        cb_gps_baud->addItem(QString());
        cb_gps_baud->addItem(QString());
        cb_gps_baud->addItem(QString());
        cb_gps_baud->setObjectName("cb_gps_baud");
        sizePolicy3.setHeightForWidth(cb_gps_baud->sizePolicy().hasHeightForWidth());
        cb_gps_baud->setSizePolicy(sizePolicy3);

        gridLayout_6->addWidget(cb_gps_baud, 0, 0, 1, 1);

        pb_set_gps_baud = new QPushButton(groupBox_5);
        pb_set_gps_baud->setObjectName("pb_set_gps_baud");
        sizePolicy4.setHeightForWidth(pb_set_gps_baud->sizePolicy().hasHeightForWidth());
        pb_set_gps_baud->setSizePolicy(sizePolicy4);

        gridLayout_6->addWidget(pb_set_gps_baud, 0, 1, 1, 1);


        verticalLayout_3->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(centralwidget);
        groupBox_6->setObjectName("groupBox_6");
        sizePolicy1.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy1);
        groupBox_6->setMinimumSize(QSize(250, 0));
        gridLayout_4 = new QGridLayout(groupBox_6);
        gridLayout_4->setObjectName("gridLayout_4");
        pb_set_dgps = new QPushButton(groupBox_6);
        pb_set_dgps->setObjectName("pb_set_dgps");
        sizePolicy4.setHeightForWidth(pb_set_dgps->sizePolicy().hasHeightForWidth());
        pb_set_dgps->setSizePolicy(sizePolicy4);

        gridLayout_4->addWidget(pb_set_dgps, 0, 1, 1, 1);

        pb_api_q_dgps_mode = new QPushButton(groupBox_6);
        pb_api_q_dgps_mode->setObjectName("pb_api_q_dgps_mode");

        gridLayout_4->addWidget(pb_api_q_dgps_mode, 1, 0, 1, 2);

        cb_dgps = new QComboBox(groupBox_6);
        cb_dgps->addItem(QString());
        cb_dgps->addItem(QString());
        cb_dgps->addItem(QString());
        cb_dgps->setObjectName("cb_dgps");
        sizePolicy3.setHeightForWidth(cb_dgps->sizePolicy().hasHeightForWidth());
        cb_dgps->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(cb_dgps, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_6);

        groupBox_7 = new QGroupBox(centralwidget);
        groupBox_7->setObjectName("groupBox_7");
        sizePolicy1.setHeightForWidth(groupBox_7->sizePolicy().hasHeightForWidth());
        groupBox_7->setSizePolicy(sizePolicy1);
        groupBox_7->setMinimumSize(QSize(250, 0));
        gridLayout_5 = new QGridLayout(groupBox_7);
        gridLayout_5->setObjectName("gridLayout_5");
        pb_set_sbas = new QPushButton(groupBox_7);
        pb_set_sbas->setObjectName("pb_set_sbas");
        sizePolicy4.setHeightForWidth(pb_set_sbas->sizePolicy().hasHeightForWidth());
        pb_set_sbas->setSizePolicy(sizePolicy4);

        gridLayout_5->addWidget(pb_set_sbas, 0, 1, 1, 1);

        pb_api_q_sbas_en = new QPushButton(groupBox_7);
        pb_api_q_sbas_en->setObjectName("pb_api_q_sbas_en");

        gridLayout_5->addWidget(pb_api_q_sbas_en, 1, 0, 1, 2);

        cb_sbas = new QComboBox(groupBox_7);
        cb_sbas->addItem(QString());
        cb_sbas->addItem(QString());
        cb_sbas->setObjectName("cb_sbas");
        sizePolicy3.setHeightForWidth(cb_sbas->sizePolicy().hasHeightForWidth());
        cb_sbas->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(cb_sbas, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_7);

        groupBox_11 = new QGroupBox(centralwidget);
        groupBox_11->setObjectName("groupBox_11");
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(groupBox_11->sizePolicy().hasHeightForWidth());
        groupBox_11->setSizePolicy(sizePolicy5);
        groupBox_11->setMinimumSize(QSize(250, 0));
        gridLayout_12 = new QGridLayout(groupBox_11);
        gridLayout_12->setObjectName("gridLayout_12");
        cb_GPS_search = new QCheckBox(groupBox_11);
        cb_GPS_search->setObjectName("cb_GPS_search");
        sizePolicy3.setHeightForWidth(cb_GPS_search->sizePolicy().hasHeightForWidth());
        cb_GPS_search->setSizePolicy(sizePolicy3);

        gridLayout_12->addWidget(cb_GPS_search, 0, 0, 1, 1);

        cb_glonass_search = new QCheckBox(groupBox_11);
        cb_glonass_search->setObjectName("cb_glonass_search");
        sizePolicy3.setHeightForWidth(cb_glonass_search->sizePolicy().hasHeightForWidth());
        cb_glonass_search->setSizePolicy(sizePolicy3);

        gridLayout_12->addWidget(cb_glonass_search, 1, 0, 1, 1);

        pb_GNS_mode = new QPushButton(groupBox_11);
        pb_GNS_mode->setObjectName("pb_GNS_mode");

        gridLayout_12->addWidget(pb_GNS_mode, 0, 1, 2, 1);


        verticalLayout_3->addWidget(groupBox_11);

        groupBox_10 = new QGroupBox(centralwidget);
        groupBox_10->setObjectName("groupBox_10");
        sizePolicy5.setHeightForWidth(groupBox_10->sizePolicy().hasHeightForWidth());
        groupBox_10->setSizePolicy(sizePolicy5);
        groupBox_10->setMinimumSize(QSize(250, 0));
        gridLayout_11 = new QGridLayout(groupBox_10);
        gridLayout_11->setObjectName("gridLayout_11");
        pb_firm = new QPushButton(groupBox_10);
        pb_firm->setObjectName("pb_firm");

        gridLayout_11->addWidget(pb_firm, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_10);

        groupBox_13 = new QGroupBox(centralwidget);
        groupBox_13->setObjectName("groupBox_13");
        sizePolicy5.setHeightForWidth(groupBox_13->sizePolicy().hasHeightForWidth());
        groupBox_13->setSizePolicy(sizePolicy5);
        groupBox_13->setMinimumSize(QSize(250, 0));
        verticalLayout = new QVBoxLayout(groupBox_13);
        verticalLayout->setObjectName("verticalLayout");
        bp_out_serial = new QPushButton(groupBox_13);
        bp_out_serial->setObjectName("bp_out_serial");

        verticalLayout->addWidget(bp_out_serial);

        pb_out_udp = new QPushButton(groupBox_13);
        pb_out_udp->setObjectName("pb_out_udp");

        verticalLayout->addWidget(pb_out_udp);


        verticalLayout_3->addWidget(groupBox_13);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        gridLayout_7->addLayout(verticalLayout_3, 0, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setMinimumSize(QSize(640, 420));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pb_term_clear = new QPushButton(groupBox_2);
        pb_term_clear->setObjectName("pb_term_clear");

        horizontalLayout->addWidget(pb_term_clear);

        pb_term_Stop = new QPushButton(groupBox_2);
        pb_term_Stop->setObjectName("pb_term_Stop");
        pb_term_Stop->setCheckable(true);

        horizontalLayout->addWidget(pb_term_Stop);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        l_term_pmtk = new QLabel(groupBox_2);
        l_term_pmtk->setObjectName("l_term_pmtk");
        QFont font;
        font.setFamilies({QString::fromUtf8("Consolas")});
        l_term_pmtk->setFont(font);

        horizontalLayout_2->addWidget(l_term_pmtk);

        cb_send = new QComboBox(groupBox_2);
        cb_send->setObjectName("cb_send");
        QSizePolicy sizePolicy6(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(cb_send->sizePolicy().hasHeightForWidth());
        cb_send->setSizePolicy(sizePolicy6);
        cb_send->setEditable(true);
        cb_send->setMaxVisibleItems(15);
        cb_send->setMaxCount(15);

        horizontalLayout_2->addWidget(cb_send);

        l_term_crc = new QLabel(groupBox_2);
        l_term_crc->setObjectName("l_term_crc");
        l_term_crc->setFont(font);

        horizontalLayout_2->addWidget(l_term_crc);

        pb_term_send = new QPushButton(groupBox_2);
        pb_term_send->setObjectName("pb_term_send");

        horizontalLayout_2->addWidget(pb_term_send);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        pte_term = new QPlainTextEdit(groupBox_2);
        pte_term->setObjectName("pte_term");
        pte_term->setFont(font);
        pte_term->setLineWidth(1);
        pte_term->setLineWrapMode(QPlainTextEdit::NoWrap);
        pte_term->setReadOnly(true);
        pte_term->setMaximumBlockCount(20);

        gridLayout_2->addWidget(pte_term, 1, 0, 1, 1);


        verticalLayout_5->addWidget(groupBox_2);

        groupBox_9 = new QGroupBox(centralwidget);
        groupBox_9->setObjectName("groupBox_9");
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(groupBox_9->sizePolicy().hasHeightForWidth());
        groupBox_9->setSizePolicy(sizePolicy7);
        groupBox_9->setMinimumSize(QSize(640, 300));
        gridLayout_10 = new QGridLayout(groupBox_9);
        gridLayout_10->setObjectName("gridLayout_10");
        pte_PMTK_answer = new QPlainTextEdit(groupBox_9);
        pte_PMTK_answer->setObjectName("pte_PMTK_answer");
        pte_PMTK_answer->setFont(font);
        pte_PMTK_answer->setLineWrapMode(QPlainTextEdit::NoWrap);
        pte_PMTK_answer->setReadOnly(true);
        pte_PMTK_answer->setMaximumBlockCount(10);

        gridLayout_10->addWidget(pte_PMTK_answer, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pb__PMTK_answer_clear = new QPushButton(groupBox_9);
        pb__PMTK_answer_clear->setObjectName("pb__PMTK_answer_clear");

        horizontalLayout_3->addWidget(pb__PMTK_answer_clear);


        gridLayout_10->addLayout(horizontalLayout_3, 1, 0, 1, 1);


        verticalLayout_5->addWidget(groupBox_9);


        gridLayout_7->addLayout(verticalLayout_5, 0, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        groupBox_3->setMinimumSize(QSize(250, 0));
        gridLayout_9 = new QGridLayout(groupBox_3);
        gridLayout_9->setObjectName("gridLayout_9");
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName("gridLayout_8");
        bp_restart_hot = new QPushButton(groupBox_3);
        bp_restart_hot->setObjectName("bp_restart_hot");

        gridLayout_8->addWidget(bp_restart_hot, 0, 0, 1, 1);

        bp_restart_warm = new QPushButton(groupBox_3);
        bp_restart_warm->setObjectName("bp_restart_warm");

        gridLayout_8->addWidget(bp_restart_warm, 1, 0, 1, 1);

        bp_restart_cold = new QPushButton(groupBox_3);
        bp_restart_cold->setObjectName("bp_restart_cold");

        gridLayout_8->addWidget(bp_restart_cold, 2, 0, 1, 1);

        bp_restart_full = new QPushButton(groupBox_3);
        bp_restart_full->setObjectName("bp_restart_full");

        gridLayout_8->addWidget(bp_restart_full, 3, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_8, 0, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox_3);

        groupBox_8 = new QGroupBox(centralwidget);
        groupBox_8->setObjectName("groupBox_8");
        sizePolicy7.setHeightForWidth(groupBox_8->sizePolicy().hasHeightForWidth());
        groupBox_8->setSizePolicy(sizePolicy7);
        groupBox_8->setMinimumSize(QSize(250, 0));
        verticalLayout_2 = new QVBoxLayout(groupBox_8);
        verticalLayout_2->setObjectName("verticalLayout_2");
        cb_out_gll = new QComboBox(groupBox_8);
        cb_out_gll->addItem(QString());
        cb_out_gll->addItem(QString());
        cb_out_gll->addItem(QString());
        cb_out_gll->addItem(QString());
        cb_out_gll->addItem(QString());
        cb_out_gll->addItem(QString());
        cb_out_gll->setObjectName("cb_out_gll");

        verticalLayout_2->addWidget(cb_out_gll);

        cb_out_rmc = new QComboBox(groupBox_8);
        cb_out_rmc->addItem(QString());
        cb_out_rmc->addItem(QString());
        cb_out_rmc->addItem(QString());
        cb_out_rmc->addItem(QString());
        cb_out_rmc->addItem(QString());
        cb_out_rmc->addItem(QString());
        cb_out_rmc->setObjectName("cb_out_rmc");

        verticalLayout_2->addWidget(cb_out_rmc);

        cb_out_vtg = new QComboBox(groupBox_8);
        cb_out_vtg->addItem(QString());
        cb_out_vtg->addItem(QString());
        cb_out_vtg->addItem(QString());
        cb_out_vtg->addItem(QString());
        cb_out_vtg->addItem(QString());
        cb_out_vtg->addItem(QString());
        cb_out_vtg->setObjectName("cb_out_vtg");

        verticalLayout_2->addWidget(cb_out_vtg);

        cb_out_gga = new QComboBox(groupBox_8);
        cb_out_gga->addItem(QString());
        cb_out_gga->addItem(QString());
        cb_out_gga->addItem(QString());
        cb_out_gga->addItem(QString());
        cb_out_gga->addItem(QString());
        cb_out_gga->addItem(QString());
        cb_out_gga->setObjectName("cb_out_gga");

        verticalLayout_2->addWidget(cb_out_gga);

        cb_out_gsa = new QComboBox(groupBox_8);
        cb_out_gsa->addItem(QString());
        cb_out_gsa->addItem(QString());
        cb_out_gsa->addItem(QString());
        cb_out_gsa->addItem(QString());
        cb_out_gsa->addItem(QString());
        cb_out_gsa->addItem(QString());
        cb_out_gsa->setObjectName("cb_out_gsa");

        verticalLayout_2->addWidget(cb_out_gsa);

        cb_out_gsv = new QComboBox(groupBox_8);
        cb_out_gsv->addItem(QString());
        cb_out_gsv->addItem(QString());
        cb_out_gsv->addItem(QString());
        cb_out_gsv->addItem(QString());
        cb_out_gsv->addItem(QString());
        cb_out_gsv->addItem(QString());
        cb_out_gsv->setObjectName("cb_out_gsv");

        verticalLayout_2->addWidget(cb_out_gsv);

        cb_out_zda = new QComboBox(groupBox_8);
        cb_out_zda->addItem(QString());
        cb_out_zda->addItem(QString());
        cb_out_zda->addItem(QString());
        cb_out_zda->addItem(QString());
        cb_out_zda->addItem(QString());
        cb_out_zda->addItem(QString());
        cb_out_zda->setObjectName("cb_out_zda");

        verticalLayout_2->addWidget(cb_out_zda);

        cb_out_chn = new QComboBox(groupBox_8);
        cb_out_chn->addItem(QString());
        cb_out_chn->addItem(QString());
        cb_out_chn->addItem(QString());
        cb_out_chn->addItem(QString());
        cb_out_chn->addItem(QString());
        cb_out_chn->addItem(QString());
        cb_out_chn->setObjectName("cb_out_chn");

        verticalLayout_2->addWidget(cb_out_chn);

        pb_out_set = new QPushButton(groupBox_8);
        pb_out_set->setObjectName("pb_out_set");

        verticalLayout_2->addWidget(pb_out_set);

        pb_q_nmea_output = new QPushButton(groupBox_8);
        pb_q_nmea_output->setObjectName("pb_q_nmea_output");

        verticalLayout_2->addWidget(pb_q_nmea_output);


        verticalLayout_4->addWidget(groupBox_8);

        groupBox_12 = new QGroupBox(centralwidget);
        groupBox_12->setObjectName("groupBox_12");
        sizePolicy.setHeightForWidth(groupBox_12->sizePolicy().hasHeightForWidth());
        groupBox_12->setSizePolicy(sizePolicy);
        groupBox_12->setMinimumSize(QSize(250, 0));
        gridLayout_13 = new QGridLayout(groupBox_12);
        gridLayout_13->setObjectName("gridLayout_13");
        pb_decode_nmea = new QPushButton(groupBox_12);
        pb_decode_nmea->setObjectName("pb_decode_nmea");

        gridLayout_13->addWidget(pb_decode_nmea, 1, 0, 1, 1);

        groupBox_14 = new QGroupBox(groupBox_12);
        groupBox_14->setObjectName("groupBox_14");
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(groupBox_14->sizePolicy().hasHeightForWidth());
        groupBox_14->setSizePolicy(sizePolicy8);
        gridLayout_14 = new QGridLayout(groupBox_14);
        gridLayout_14->setObjectName("gridLayout_14");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_3 = new QLabel(groupBox_14);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        cb_marker_file = new QComboBox(groupBox_14);
        cb_marker_file->addItem(QString());
        cb_marker_file->addItem(QString());
        cb_marker_file->addItem(QString());
        cb_marker_file->addItem(QString());
        cb_marker_file->addItem(QString());
        cb_marker_file->addItem(QString());
        cb_marker_file->addItem(QString());
        cb_marker_file->setObjectName("cb_marker_file");
        sizePolicy3.setHeightForWidth(cb_marker_file->sizePolicy().hasHeightForWidth());
        cb_marker_file->setSizePolicy(sizePolicy3);

        horizontalLayout_4->addWidget(cb_marker_file);


        gridLayout_14->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_4 = new QLabel(groupBox_14);
        label_4->setObjectName("label_4");

        horizontalLayout_5->addWidget(label_4);

        le_number_frames_in_file = new QLineEdit(groupBox_14);
        le_number_frames_in_file->setObjectName("le_number_frames_in_file");

        horizontalLayout_5->addWidget(le_number_frames_in_file);


        gridLayout_14->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_5 = new QLabel(groupBox_14);
        label_5->setObjectName("label_5");

        horizontalLayout_6->addWidget(label_5);

        l_counter_files = new QLabel(groupBox_14);
        l_counter_files->setObjectName("l_counter_files");

        horizontalLayout_6->addWidget(l_counter_files);


        gridLayout_14->addLayout(horizontalLayout_6, 2, 0, 1, 1);

        pb_start_save_to_file = new QPushButton(groupBox_14);
        pb_start_save_to_file->setObjectName("pb_start_save_to_file");
        pb_start_save_to_file->setCheckable(true);

        gridLayout_14->addWidget(pb_start_save_to_file, 3, 0, 1, 1);


        gridLayout_13->addWidget(groupBox_14, 2, 0, 1, 1);

        le_googleMaps = new QLineEdit(groupBox_12);
        le_googleMaps->setObjectName("le_googleMaps");
        le_googleMaps->setReadOnly(true);

        gridLayout_13->addWidget(le_googleMaps, 0, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox_12);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);


        gridLayout_7->addLayout(verticalLayout_4, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "GPS resender", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Serial ", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Port:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Baud:", nullptr));
        cb_serial_baud->setItemText(0, QCoreApplication::translate("MainWindow", "9600", nullptr));
        cb_serial_baud->setItemText(1, QCoreApplication::translate("MainWindow", "14400", nullptr));
        cb_serial_baud->setItemText(2, QCoreApplication::translate("MainWindow", "19200", nullptr));
        cb_serial_baud->setItemText(3, QCoreApplication::translate("MainWindow", "38400", nullptr));
        cb_serial_baud->setItemText(4, QCoreApplication::translate("MainWindow", "57600", nullptr));
        cb_serial_baud->setItemText(5, QCoreApplication::translate("MainWindow", "115200", nullptr));

        pb_serial_connect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pb_reascan->setText(QCoreApplication::translate("MainWindow", "Rescan port", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "GPS NMEA Updaterate", nullptr));
        pb_set_freq->setText(QCoreApplication::translate("MainWindow", "SET", nullptr));
        cb_freq->setItemText(0, QCoreApplication::translate("MainWindow", "1000ms - 1Hz", nullptr));
        cb_freq->setItemText(1, QCoreApplication::translate("MainWindow", "500ms - 2Hz", nullptr));
        cb_freq->setItemText(2, QCoreApplication::translate("MainWindow", "200ms - 5Hz", nullptr));
        cb_freq->setItemText(3, QCoreApplication::translate("MainWindow", "100ms - 10Hz", nullptr));

        pb_api_q_fix_ctl->setText(QCoreApplication::translate("MainWindow", "Query update rate (last and previous)", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "GPS NMEA Baudrate", nullptr));
        cb_gps_baud->setItemText(0, QCoreApplication::translate("MainWindow", "9600", nullptr));
        cb_gps_baud->setItemText(1, QCoreApplication::translate("MainWindow", "14400", nullptr));
        cb_gps_baud->setItemText(2, QCoreApplication::translate("MainWindow", "19200", nullptr));
        cb_gps_baud->setItemText(3, QCoreApplication::translate("MainWindow", "38400", nullptr));
        cb_gps_baud->setItemText(4, QCoreApplication::translate("MainWindow", "57600", nullptr));
        cb_gps_baud->setItemText(5, QCoreApplication::translate("MainWindow", "115200", nullptr));

        pb_set_gps_baud->setText(QCoreApplication::translate("MainWindow", "SET", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "DGPS MODE", nullptr));
        pb_set_dgps->setText(QCoreApplication::translate("MainWindow", "SET", nullptr));
        pb_api_q_dgps_mode->setText(QCoreApplication::translate("MainWindow", "Query DGPS mode", nullptr));
        cb_dgps->setItemText(0, QCoreApplication::translate("MainWindow", "0 - No DGPS source", nullptr));
        cb_dgps->setItemText(1, QCoreApplication::translate("MainWindow", "1 - RTCM", nullptr));
        cb_dgps->setItemText(2, QCoreApplication::translate("MainWindow", "2 - WASS", nullptr));

        groupBox_7->setTitle(QCoreApplication::translate("MainWindow", "SBAS", nullptr));
        pb_set_sbas->setText(QCoreApplication::translate("MainWindow", "SET", nullptr));
        pb_api_q_sbas_en->setText(QCoreApplication::translate("MainWindow", "Query SBAS enabled", nullptr));
        cb_sbas->setItemText(0, QCoreApplication::translate("MainWindow", "0 - Disable", nullptr));
        cb_sbas->setItemText(1, QCoreApplication::translate("MainWindow", "1 - Enable", nullptr));

        groupBox_11->setTitle(QCoreApplication::translate("MainWindow", "GNSS Search mode", nullptr));
        cb_GPS_search->setText(QCoreApplication::translate("MainWindow", "GPS", nullptr));
        cb_glonass_search->setText(QCoreApplication::translate("MainWindow", "GLONASS", nullptr));
        pb_GNS_mode->setText(QCoreApplication::translate("MainWindow", "SET", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("MainWindow", "GPS firmware release", nullptr));
        pb_firm->setText(QCoreApplication::translate("MainWindow", "Get", nullptr));
        groupBox_13->setTitle(QString());
        bp_out_serial->setText(QCoreApplication::translate("MainWindow", "Out SERIAL", nullptr));
        pb_out_udp->setText(QCoreApplication::translate("MainWindow", "Out UDP", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Serial Terminal", nullptr));
        pb_term_clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        pb_term_Stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        l_term_pmtk->setText(QCoreApplication::translate("MainWindow", "$PMTK", nullptr));
        l_term_crc->setText(QCoreApplication::translate("MainWindow", "*00<CR><LF>", nullptr));
        pb_term_send->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("MainWindow", "PMTK Answer", nullptr));
        pb__PMTK_answer_clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "GPS Restart", nullptr));
        bp_restart_hot->setText(QCoreApplication::translate("MainWindow", "Hot Restart", nullptr));
        bp_restart_warm->setText(QCoreApplication::translate("MainWindow", "Warm Restart", nullptr));
        bp_restart_cold->setText(QCoreApplication::translate("MainWindow", "Cold Restart", nullptr));
        bp_restart_full->setText(QCoreApplication::translate("MainWindow", "Full Cold Restart", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("MainWindow", "NMEA Output", nullptr));
        cb_out_gll->setItemText(0, QCoreApplication::translate("MainWindow", "0 - GPGLL", nullptr));
        cb_out_gll->setItemText(1, QCoreApplication::translate("MainWindow", "1 - GPGLL", nullptr));
        cb_out_gll->setItemText(2, QCoreApplication::translate("MainWindow", "2 - GPGLL", nullptr));
        cb_out_gll->setItemText(3, QCoreApplication::translate("MainWindow", "3 - GPGLL", nullptr));
        cb_out_gll->setItemText(4, QCoreApplication::translate("MainWindow", "4 - GPGLL", nullptr));
        cb_out_gll->setItemText(5, QCoreApplication::translate("MainWindow", "5 - GPGLL", nullptr));

        cb_out_rmc->setItemText(0, QCoreApplication::translate("MainWindow", "0 - GPRMC", nullptr));
        cb_out_rmc->setItemText(1, QCoreApplication::translate("MainWindow", "1 - GPRMC", nullptr));
        cb_out_rmc->setItemText(2, QCoreApplication::translate("MainWindow", "2 - GPRMC", nullptr));
        cb_out_rmc->setItemText(3, QCoreApplication::translate("MainWindow", "3 - GPRMC", nullptr));
        cb_out_rmc->setItemText(4, QCoreApplication::translate("MainWindow", "4 - GPRMC", nullptr));
        cb_out_rmc->setItemText(5, QCoreApplication::translate("MainWindow", "5 - GPRMC", nullptr));

        cb_out_vtg->setItemText(0, QCoreApplication::translate("MainWindow", "0 - GPVTG", nullptr));
        cb_out_vtg->setItemText(1, QCoreApplication::translate("MainWindow", "1 - GPVTG", nullptr));
        cb_out_vtg->setItemText(2, QCoreApplication::translate("MainWindow", "2 - GPVTG", nullptr));
        cb_out_vtg->setItemText(3, QCoreApplication::translate("MainWindow", "3 - GPVTG", nullptr));
        cb_out_vtg->setItemText(4, QCoreApplication::translate("MainWindow", "4 - GPVTG", nullptr));
        cb_out_vtg->setItemText(5, QCoreApplication::translate("MainWindow", "5 - GPVTG", nullptr));

        cb_out_gga->setItemText(0, QCoreApplication::translate("MainWindow", "0 - GPGGA", nullptr));
        cb_out_gga->setItemText(1, QCoreApplication::translate("MainWindow", "1 - GPGGA", nullptr));
        cb_out_gga->setItemText(2, QCoreApplication::translate("MainWindow", "2 - GPGGA", nullptr));
        cb_out_gga->setItemText(3, QCoreApplication::translate("MainWindow", "3 - GPGGA", nullptr));
        cb_out_gga->setItemText(4, QCoreApplication::translate("MainWindow", "4 - GPGGA", nullptr));
        cb_out_gga->setItemText(5, QCoreApplication::translate("MainWindow", "5 - GPGGA", nullptr));

        cb_out_gsa->setItemText(0, QCoreApplication::translate("MainWindow", "0 - GPGSA", nullptr));
        cb_out_gsa->setItemText(1, QCoreApplication::translate("MainWindow", "1 - GPGSA", nullptr));
        cb_out_gsa->setItemText(2, QCoreApplication::translate("MainWindow", "2 - GPGSA", nullptr));
        cb_out_gsa->setItemText(3, QCoreApplication::translate("MainWindow", "3 - GPGSA", nullptr));
        cb_out_gsa->setItemText(4, QCoreApplication::translate("MainWindow", "4 - GPGSA", nullptr));
        cb_out_gsa->setItemText(5, QCoreApplication::translate("MainWindow", "5 - GPGSA", nullptr));

        cb_out_gsv->setItemText(0, QCoreApplication::translate("MainWindow", "0 - GPGSV,GLGSV", nullptr));
        cb_out_gsv->setItemText(1, QCoreApplication::translate("MainWindow", "1 - GPGSV,GLGSV", nullptr));
        cb_out_gsv->setItemText(2, QCoreApplication::translate("MainWindow", "2 - GPGSV,GLGSV", nullptr));
        cb_out_gsv->setItemText(3, QCoreApplication::translate("MainWindow", "3 - GPGSV,GLGSV", nullptr));
        cb_out_gsv->setItemText(4, QCoreApplication::translate("MainWindow", "4 - GPGSV,GLGSV", nullptr));
        cb_out_gsv->setItemText(5, QCoreApplication::translate("MainWindow", "5 - GPGSV,GLGSV", nullptr));

        cb_out_zda->setItemText(0, QCoreApplication::translate("MainWindow", "0 - GPZDA", nullptr));
        cb_out_zda->setItemText(1, QCoreApplication::translate("MainWindow", "1 - GPZDA", nullptr));
        cb_out_zda->setItemText(2, QCoreApplication::translate("MainWindow", "2 - GPZDA", nullptr));
        cb_out_zda->setItemText(3, QCoreApplication::translate("MainWindow", "3 - GPZDA", nullptr));
        cb_out_zda->setItemText(4, QCoreApplication::translate("MainWindow", "4 - GPZDA", nullptr));
        cb_out_zda->setItemText(5, QCoreApplication::translate("MainWindow", "5 - GPZDA", nullptr));

        cb_out_chn->setItemText(0, QCoreApplication::translate("MainWindow", "0 - PMTKCHN", nullptr));
        cb_out_chn->setItemText(1, QCoreApplication::translate("MainWindow", "1 - PMTKCHN", nullptr));
        cb_out_chn->setItemText(2, QCoreApplication::translate("MainWindow", "2 - PMTKCHN", nullptr));
        cb_out_chn->setItemText(3, QCoreApplication::translate("MainWindow", "3 - PMTKCHN", nullptr));
        cb_out_chn->setItemText(4, QCoreApplication::translate("MainWindow", "4 - PMTKCHN", nullptr));
        cb_out_chn->setItemText(5, QCoreApplication::translate("MainWindow", "5 - PMTKCHN", nullptr));

        pb_out_set->setText(QCoreApplication::translate("MainWindow", "SET", nullptr));
        pb_q_nmea_output->setText(QCoreApplication::translate("MainWindow", "Query NMEA OUTPUT", nullptr));
        groupBox_12->setTitle(QString());
        pb_decode_nmea->setText(QCoreApplication::translate("MainWindow", "Decode NMEA", nullptr));
        groupBox_14->setTitle(QCoreApplication::translate("MainWindow", "Save to File", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Marker", nullptr));
        cb_marker_file->setItemText(0, QCoreApplication::translate("MainWindow", "GPGGA", nullptr));
        cb_marker_file->setItemText(1, QCoreApplication::translate("MainWindow", "GPGLL", nullptr));
        cb_marker_file->setItemText(2, QCoreApplication::translate("MainWindow", "GPRMC", nullptr));
        cb_marker_file->setItemText(3, QCoreApplication::translate("MainWindow", "GPVTG", nullptr));
        cb_marker_file->setItemText(4, QCoreApplication::translate("MainWindow", "GPGSA", nullptr));
        cb_marker_file->setItemText(5, QCoreApplication::translate("MainWindow", "GPGSV", nullptr));
        cb_marker_file->setItemText(6, QString());

        label_4->setText(QCoreApplication::translate("MainWindow", "Number frames", nullptr));
        le_number_frames_in_file->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Counter file", nullptr));
        l_counter_files->setText(QCoreApplication::translate("MainWindow", "000000", nullptr));
        pb_start_save_to_file->setText(QCoreApplication::translate("MainWindow", "Start SAVE to file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
