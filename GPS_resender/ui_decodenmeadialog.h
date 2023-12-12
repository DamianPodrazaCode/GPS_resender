/********************************************************************************
** Form generated from reading UI file 'decodenmeadialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DECODENMEADIALOG_H
#define UI_DECODENMEADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DecodeNMEADialog
{
public:
    QHBoxLayout *horizontalLayout_20;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_6;
    QLineEdit *le_gll;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_34;
    QLineEdit *gll_lat;
    QLabel *label_35;
    QLineEdit *gll_lon;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_36;
    QLineEdit *gll_utc;
    QLabel *label_37;
    QLineEdit *gll_stat;
    QLabel *label_38;
    QLineEdit *gll_mode;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_16;
    QLineEdit *rmc_utc;
    QLabel *label_22;
    QLineEdit *rmc_date;
    QLabel *label_17;
    QLineEdit *rmc_stat;
    QLineEdit *le_rmc;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_20;
    QLineEdit *rmc_sog;
    QLabel *label_21;
    QLineEdit *rmc_cog;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_23;
    QLineEdit *rmc_mv;
    QLabel *label_24;
    QLineEdit *rmc_mode;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_19;
    QLineEdit *rmc_lat;
    QLabel *label_18;
    QLineEdit *rmc_lon;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QLineEdit *le_vtg;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_25;
    QLineEdit *vtg_hid;
    QLabel *label_28;
    QLineEdit *vtg_mhid;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_29;
    QLineEdit *vtg_s_k;
    QLabel *label_32;
    QLineEdit *vtg_s_km;
    QLabel *label_33;
    QLineEdit *vtg_mode;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *gga_utc;
    QLabel *label_4;
    QLineEdit *gga_pfi;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *gga_lat;
    QLabel *label_3;
    QLineEdit *gga_lon;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *gga_su;
    QLabel *label_6;
    QLineEdit *gga_hdop;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLineEdit *gga_alt;
    QLabel *label_8;
    QLineEdit *gga_gs;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLineEdit *gga_aod;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_26;
    QLineEdit *gga_aod_id;
    QLineEdit *le_gga;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_2;
    QLineEdit *le_gsa;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_10;
    QLineEdit *gsa_m1;
    QLabel *label_11;
    QLineEdit *gsa_m2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_12;
    QLineEdit *gsa_su;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_13;
    QLineEdit *gsa_pdop;
    QLabel *label_14;
    QLineEdit *gsa_hdop;
    QLabel *label_15;
    QLineEdit *gsa_vdop;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_5;
    QPlainTextEdit *pte_pgsv;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPlainTextEdit *pte_lgsv;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_7;
    QLineEdit *le_zda;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_39;
    QLineEdit *zda_time;
    QLabel *label_40;
    QLineEdit *zda_day;
    QLabel *label_41;
    QLineEdit *zda_month;
    QLabel *label_42;
    QLineEdit *zda_year;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_8;
    QPlainTextEdit *pte_chn;

    void setupUi(QDialog *DecodeNMEADialog)
    {
        if (DecodeNMEADialog->objectName().isEmpty())
            DecodeNMEADialog->setObjectName("DecodeNMEADialog");
        DecodeNMEADialog->resize(1128, 722);
        horizontalLayout_20 = new QHBoxLayout(DecodeNMEADialog);
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(DecodeNMEADialog);
        groupBox->setObjectName("groupBox");
        groupBox->setMinimumSize(QSize(550, 0));
        groupBox->setMaximumSize(QSize(550, 16777215));
        gridLayout_6 = new QGridLayout(groupBox);
        gridLayout_6->setObjectName("gridLayout_6");
        le_gll = new QLineEdit(groupBox);
        le_gll->setObjectName("le_gll");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_gll->sizePolicy().hasHeightForWidth());
        le_gll->setSizePolicy(sizePolicy);
        le_gll->setMaximumSize(QSize(16777215, 24));
        le_gll->setReadOnly(true);

        gridLayout_6->addWidget(le_gll, 0, 0, 1, 1);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        label_34 = new QLabel(groupBox);
        label_34->setObjectName("label_34");

        horizontalLayout_17->addWidget(label_34);

        gll_lat = new QLineEdit(groupBox);
        gll_lat->setObjectName("gll_lat");

        horizontalLayout_17->addWidget(gll_lat);

        label_35 = new QLabel(groupBox);
        label_35->setObjectName("label_35");

        horizontalLayout_17->addWidget(label_35);

        gll_lon = new QLineEdit(groupBox);
        gll_lon->setObjectName("gll_lon");

        horizontalLayout_17->addWidget(gll_lon);


        gridLayout_6->addLayout(horizontalLayout_17, 1, 0, 1, 1);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        label_36 = new QLabel(groupBox);
        label_36->setObjectName("label_36");

        horizontalLayout_18->addWidget(label_36);

        gll_utc = new QLineEdit(groupBox);
        gll_utc->setObjectName("gll_utc");

        horizontalLayout_18->addWidget(gll_utc);

        label_37 = new QLabel(groupBox);
        label_37->setObjectName("label_37");

        horizontalLayout_18->addWidget(label_37);

        gll_stat = new QLineEdit(groupBox);
        gll_stat->setObjectName("gll_stat");

        horizontalLayout_18->addWidget(gll_stat);

        label_38 = new QLabel(groupBox);
        label_38->setObjectName("label_38");

        horizontalLayout_18->addWidget(label_38);

        gll_mode = new QLineEdit(groupBox);
        gll_mode->setObjectName("gll_mode");

        horizontalLayout_18->addWidget(gll_mode);


        gridLayout_6->addLayout(horizontalLayout_18, 2, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(DecodeNMEADialog);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setMinimumSize(QSize(550, 0));
        groupBox_2->setMaximumSize(QSize(550, 16777215));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName("gridLayout_3");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName("label_16");

        horizontalLayout_9->addWidget(label_16);

        rmc_utc = new QLineEdit(groupBox_2);
        rmc_utc->setObjectName("rmc_utc");

        horizontalLayout_9->addWidget(rmc_utc);

        label_22 = new QLabel(groupBox_2);
        label_22->setObjectName("label_22");

        horizontalLayout_9->addWidget(label_22);

        rmc_date = new QLineEdit(groupBox_2);
        rmc_date->setObjectName("rmc_date");

        horizontalLayout_9->addWidget(rmc_date);

        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName("label_17");

        horizontalLayout_9->addWidget(label_17);

        rmc_stat = new QLineEdit(groupBox_2);
        rmc_stat->setObjectName("rmc_stat");

        horizontalLayout_9->addWidget(rmc_stat);


        gridLayout_3->addLayout(horizontalLayout_9, 1, 0, 1, 1);

        le_rmc = new QLineEdit(groupBox_2);
        le_rmc->setObjectName("le_rmc");
        le_rmc->setReadOnly(true);

        gridLayout_3->addWidget(le_rmc, 0, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_20 = new QLabel(groupBox_2);
        label_20->setObjectName("label_20");

        horizontalLayout_11->addWidget(label_20);

        rmc_sog = new QLineEdit(groupBox_2);
        rmc_sog->setObjectName("rmc_sog");

        horizontalLayout_11->addWidget(rmc_sog);

        label_21 = new QLabel(groupBox_2);
        label_21->setObjectName("label_21");

        horizontalLayout_11->addWidget(label_21);

        rmc_cog = new QLineEdit(groupBox_2);
        rmc_cog->setObjectName("rmc_cog");

        horizontalLayout_11->addWidget(rmc_cog);


        gridLayout_3->addLayout(horizontalLayout_11, 3, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_23 = new QLabel(groupBox_2);
        label_23->setObjectName("label_23");

        horizontalLayout_12->addWidget(label_23);

        rmc_mv = new QLineEdit(groupBox_2);
        rmc_mv->setObjectName("rmc_mv");

        horizontalLayout_12->addWidget(rmc_mv);

        label_24 = new QLabel(groupBox_2);
        label_24->setObjectName("label_24");

        horizontalLayout_12->addWidget(label_24);

        rmc_mode = new QLineEdit(groupBox_2);
        rmc_mode->setObjectName("rmc_mode");

        horizontalLayout_12->addWidget(rmc_mode);


        gridLayout_3->addLayout(horizontalLayout_12, 4, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName("label_19");

        horizontalLayout_10->addWidget(label_19);

        rmc_lat = new QLineEdit(groupBox_2);
        rmc_lat->setObjectName("rmc_lat");

        horizontalLayout_10->addWidget(rmc_lat);

        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName("label_18");

        horizontalLayout_10->addWidget(label_18);

        rmc_lon = new QLineEdit(groupBox_2);
        rmc_lon->setObjectName("rmc_lon");

        horizontalLayout_10->addWidget(rmc_lon);


        gridLayout_3->addLayout(horizontalLayout_10, 2, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(DecodeNMEADialog);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setMinimumSize(QSize(550, 0));
        groupBox_3->setMaximumSize(QSize(550, 16777215));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName("gridLayout_4");
        le_vtg = new QLineEdit(groupBox_3);
        le_vtg->setObjectName("le_vtg");
        le_vtg->setReadOnly(true);

        gridLayout_4->addWidget(le_vtg, 0, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_25 = new QLabel(groupBox_3);
        label_25->setObjectName("label_25");

        horizontalLayout_13->addWidget(label_25);

        vtg_hid = new QLineEdit(groupBox_3);
        vtg_hid->setObjectName("vtg_hid");

        horizontalLayout_13->addWidget(vtg_hid);

        label_28 = new QLabel(groupBox_3);
        label_28->setObjectName("label_28");

        horizontalLayout_13->addWidget(label_28);

        vtg_mhid = new QLineEdit(groupBox_3);
        vtg_mhid->setObjectName("vtg_mhid");

        horizontalLayout_13->addWidget(vtg_mhid);


        gridLayout_4->addLayout(horizontalLayout_13, 1, 0, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_29 = new QLabel(groupBox_3);
        label_29->setObjectName("label_29");

        horizontalLayout_14->addWidget(label_29);

        vtg_s_k = new QLineEdit(groupBox_3);
        vtg_s_k->setObjectName("vtg_s_k");

        horizontalLayout_14->addWidget(vtg_s_k);

        label_32 = new QLabel(groupBox_3);
        label_32->setObjectName("label_32");

        horizontalLayout_14->addWidget(label_32);

        vtg_s_km = new QLineEdit(groupBox_3);
        vtg_s_km->setObjectName("vtg_s_km");

        horizontalLayout_14->addWidget(vtg_s_km);

        label_33 = new QLabel(groupBox_3);
        label_33->setObjectName("label_33");

        horizontalLayout_14->addWidget(label_33);

        vtg_mode = new QLineEdit(groupBox_3);
        vtg_mode->setObjectName("vtg_mode");

        horizontalLayout_14->addWidget(vtg_mode);


        gridLayout_4->addLayout(horizontalLayout_14, 2, 0, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(DecodeNMEADialog);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setMinimumSize(QSize(550, 0));
        groupBox_4->setMaximumSize(QSize(550, 16777215));
        gridLayout = new QGridLayout(groupBox_4);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox_4);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        gga_utc = new QLineEdit(groupBox_4);
        gga_utc->setObjectName("gga_utc");

        horizontalLayout->addWidget(gga_utc);

        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        gga_pfi = new QLineEdit(groupBox_4);
        gga_pfi->setObjectName("gga_pfi");

        horizontalLayout->addWidget(gga_pfi);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        gga_lat = new QLineEdit(groupBox_4);
        gga_lat->setObjectName("gga_lat");

        horizontalLayout_2->addWidget(gga_lat);

        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        gga_lon = new QLineEdit(groupBox_4);
        gga_lon->setObjectName("gga_lon");

        horizontalLayout_2->addWidget(gga_lon);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName("label_5");

        horizontalLayout_3->addWidget(label_5);

        gga_su = new QLineEdit(groupBox_4);
        gga_su->setObjectName("gga_su");

        horizontalLayout_3->addWidget(gga_su);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName("label_6");

        horizontalLayout_3->addWidget(label_6);

        gga_hdop = new QLineEdit(groupBox_4);
        gga_hdop->setObjectName("gga_hdop");

        horizontalLayout_3->addWidget(gga_hdop);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName("label_7");

        horizontalLayout_4->addWidget(label_7);

        gga_alt = new QLineEdit(groupBox_4);
        gga_alt->setObjectName("gga_alt");

        horizontalLayout_4->addWidget(gga_alt);

        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName("label_8");

        horizontalLayout_4->addWidget(label_8);

        gga_gs = new QLineEdit(groupBox_4);
        gga_gs->setObjectName("gga_gs");

        horizontalLayout_4->addWidget(gga_gs);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName("label_9");

        horizontalLayout_5->addWidget(label_9);

        gga_aod = new QLineEdit(groupBox_4);
        gga_aod->setObjectName("gga_aod");

        horizontalLayout_5->addWidget(gga_aod);


        gridLayout->addLayout(horizontalLayout_5, 5, 0, 1, 1);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        label_26 = new QLabel(groupBox_4);
        label_26->setObjectName("label_26");

        horizontalLayout_21->addWidget(label_26);

        gga_aod_id = new QLineEdit(groupBox_4);
        gga_aod_id->setObjectName("gga_aod_id");

        horizontalLayout_21->addWidget(gga_aod_id);


        gridLayout->addLayout(horizontalLayout_21, 5, 1, 1, 1);

        le_gga = new QLineEdit(groupBox_4);
        le_gga->setObjectName("le_gga");
        le_gga->setReadOnly(true);

        gridLayout->addWidget(le_gga, 0, 0, 1, 2);


        verticalLayout->addWidget(groupBox_4);


        horizontalLayout_20->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox_5 = new QGroupBox(DecodeNMEADialog);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setMinimumSize(QSize(550, 0));
        groupBox_5->setMaximumSize(QSize(550, 16777215));
        gridLayout_2 = new QGridLayout(groupBox_5);
        gridLayout_2->setObjectName("gridLayout_2");
        le_gsa = new QLineEdit(groupBox_5);
        le_gsa->setObjectName("le_gsa");
        le_gsa->setReadOnly(true);

        gridLayout_2->addWidget(le_gsa, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName("label_10");

        horizontalLayout_6->addWidget(label_10);

        gsa_m1 = new QLineEdit(groupBox_5);
        gsa_m1->setObjectName("gsa_m1");

        horizontalLayout_6->addWidget(gsa_m1);

        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName("label_11");

        horizontalLayout_6->addWidget(label_11);

        gsa_m2 = new QLineEdit(groupBox_5);
        gsa_m2->setObjectName("gsa_m2");

        horizontalLayout_6->addWidget(gsa_m2);


        gridLayout_2->addLayout(horizontalLayout_6, 1, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName("label_12");

        horizontalLayout_7->addWidget(label_12);

        gsa_su = new QLineEdit(groupBox_5);
        gsa_su->setObjectName("gsa_su");

        horizontalLayout_7->addWidget(gsa_su);


        gridLayout_2->addLayout(horizontalLayout_7, 2, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName("label_13");

        horizontalLayout_8->addWidget(label_13);

        gsa_pdop = new QLineEdit(groupBox_5);
        gsa_pdop->setObjectName("gsa_pdop");

        horizontalLayout_8->addWidget(gsa_pdop);

        label_14 = new QLabel(groupBox_5);
        label_14->setObjectName("label_14");

        horizontalLayout_8->addWidget(label_14);

        gsa_hdop = new QLineEdit(groupBox_5);
        gsa_hdop->setObjectName("gsa_hdop");

        horizontalLayout_8->addWidget(gsa_hdop);

        label_15 = new QLabel(groupBox_5);
        label_15->setObjectName("label_15");

        horizontalLayout_8->addWidget(label_15);

        gsa_vdop = new QLineEdit(groupBox_5);
        gsa_vdop->setObjectName("gsa_vdop");

        horizontalLayout_8->addWidget(gsa_vdop);


        gridLayout_2->addLayout(horizontalLayout_8, 3, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(DecodeNMEADialog);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setMinimumSize(QSize(550, 0));
        groupBox_6->setMaximumSize(QSize(550, 16777215));
        gridLayout_5 = new QGridLayout(groupBox_6);
        gridLayout_5->setObjectName("gridLayout_5");
        pte_pgsv = new QPlainTextEdit(groupBox_6);
        pte_pgsv->setObjectName("pte_pgsv");
        QFont font;
        font.setFamilies({QString::fromUtf8("Consolas")});
        pte_pgsv->setFont(font);
        pte_pgsv->setLineWrapMode(QPlainTextEdit::NoWrap);
        pte_pgsv->setReadOnly(true);

        gridLayout_5->addWidget(pte_pgsv, 0, 0, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer);

        pushButton = new QPushButton(groupBox_6);
        pushButton->setObjectName("pushButton");
        pushButton->setEnabled(false);

        horizontalLayout_15->addWidget(pushButton);


        gridLayout_5->addLayout(horizontalLayout_15, 1, 0, 1, 1);

        pte_lgsv = new QPlainTextEdit(groupBox_6);
        pte_lgsv->setObjectName("pte_lgsv");
        pte_lgsv->setFont(font);
        pte_lgsv->setLineWrapMode(QPlainTextEdit::NoWrap);
        pte_lgsv->setReadOnly(true);

        gridLayout_5->addWidget(pte_lgsv, 2, 0, 1, 1);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_2);

        pushButton_2 = new QPushButton(groupBox_6);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setEnabled(false);

        horizontalLayout_16->addWidget(pushButton_2);


        gridLayout_5->addLayout(horizontalLayout_16, 3, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_6);

        groupBox_7 = new QGroupBox(DecodeNMEADialog);
        groupBox_7->setObjectName("groupBox_7");
        groupBox_7->setMinimumSize(QSize(550, 0));
        groupBox_7->setMaximumSize(QSize(550, 16777215));
        gridLayout_7 = new QGridLayout(groupBox_7);
        gridLayout_7->setObjectName("gridLayout_7");
        le_zda = new QLineEdit(groupBox_7);
        le_zda->setObjectName("le_zda");
        le_zda->setReadOnly(true);

        gridLayout_7->addWidget(le_zda, 0, 0, 1, 1);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        label_39 = new QLabel(groupBox_7);
        label_39->setObjectName("label_39");

        horizontalLayout_19->addWidget(label_39);

        zda_time = new QLineEdit(groupBox_7);
        zda_time->setObjectName("zda_time");

        horizontalLayout_19->addWidget(zda_time);

        label_40 = new QLabel(groupBox_7);
        label_40->setObjectName("label_40");

        horizontalLayout_19->addWidget(label_40);

        zda_day = new QLineEdit(groupBox_7);
        zda_day->setObjectName("zda_day");

        horizontalLayout_19->addWidget(zda_day);

        label_41 = new QLabel(groupBox_7);
        label_41->setObjectName("label_41");

        horizontalLayout_19->addWidget(label_41);

        zda_month = new QLineEdit(groupBox_7);
        zda_month->setObjectName("zda_month");

        horizontalLayout_19->addWidget(zda_month);

        label_42 = new QLabel(groupBox_7);
        label_42->setObjectName("label_42");

        horizontalLayout_19->addWidget(label_42);

        zda_year = new QLineEdit(groupBox_7);
        zda_year->setObjectName("zda_year");

        horizontalLayout_19->addWidget(zda_year);


        gridLayout_7->addLayout(horizontalLayout_19, 1, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_7);

        groupBox_8 = new QGroupBox(DecodeNMEADialog);
        groupBox_8->setObjectName("groupBox_8");
        groupBox_8->setMinimumSize(QSize(550, 0));
        groupBox_8->setMaximumSize(QSize(550, 16777215));
        gridLayout_8 = new QGridLayout(groupBox_8);
        gridLayout_8->setObjectName("gridLayout_8");
        pte_chn = new QPlainTextEdit(groupBox_8);
        pte_chn->setObjectName("pte_chn");

        gridLayout_8->addWidget(pte_chn, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_8);


        horizontalLayout_20->addLayout(verticalLayout_2);


        retranslateUi(DecodeNMEADialog);

        QMetaObject::connectSlotsByName(DecodeNMEADialog);
    } // setupUi

    void retranslateUi(QDialog *DecodeNMEADialog)
    {
        DecodeNMEADialog->setWindowTitle(QCoreApplication::translate("DecodeNMEADialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DecodeNMEADialog", "$GPGLL", nullptr));
        label_34->setText(QCoreApplication::translate("DecodeNMEADialog", "Latitude:", nullptr));
        label_35->setText(QCoreApplication::translate("DecodeNMEADialog", "Longitude:", nullptr));
        label_36->setText(QCoreApplication::translate("DecodeNMEADialog", "UTC Time:", nullptr));
        label_37->setText(QCoreApplication::translate("DecodeNMEADialog", "Status:", nullptr));
        label_38->setText(QCoreApplication::translate("DecodeNMEADialog", "Mode:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("DecodeNMEADialog", "$GPRMC", nullptr));
        label_16->setText(QCoreApplication::translate("DecodeNMEADialog", "UTC Time:", nullptr));
        label_22->setText(QCoreApplication::translate("DecodeNMEADialog", "Date:", nullptr));
        label_17->setText(QCoreApplication::translate("DecodeNMEADialog", "Status:", nullptr));
        label_20->setText(QCoreApplication::translate("DecodeNMEADialog", "Speed over Ground:", nullptr));
        label_21->setText(QCoreApplication::translate("DecodeNMEADialog", "Course over Ground:", nullptr));
        label_23->setText(QCoreApplication::translate("DecodeNMEADialog", "Magnetic Variation:", nullptr));
        label_24->setText(QCoreApplication::translate("DecodeNMEADialog", "Mode:", nullptr));
        label_19->setText(QCoreApplication::translate("DecodeNMEADialog", "Latitude:", nullptr));
        label_18->setText(QCoreApplication::translate("DecodeNMEADialog", "Longitude:", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("DecodeNMEADialog", "$GPVTG", nullptr));
        label_25->setText(QCoreApplication::translate("DecodeNMEADialog", "Course/T", nullptr));
        label_28->setText(QCoreApplication::translate("DecodeNMEADialog", "Course/M", nullptr));
        label_29->setText(QCoreApplication::translate("DecodeNMEADialog", "Speed:", nullptr));
        label_32->setText(QCoreApplication::translate("DecodeNMEADialog", "Speed:", nullptr));
        label_33->setText(QCoreApplication::translate("DecodeNMEADialog", "Mode:", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("DecodeNMEADialog", "$GPGGA", nullptr));
        label->setText(QCoreApplication::translate("DecodeNMEADialog", "UTC Time:", nullptr));
        label_4->setText(QCoreApplication::translate("DecodeNMEADialog", "Position Fix Indicator:", nullptr));
        label_2->setText(QCoreApplication::translate("DecodeNMEADialog", "Latitude:", nullptr));
        label_3->setText(QCoreApplication::translate("DecodeNMEADialog", "Longitude:", nullptr));
        label_5->setText(QCoreApplication::translate("DecodeNMEADialog", "Satellites Used:", nullptr));
        label_6->setText(QCoreApplication::translate("DecodeNMEADialog", "HDOP:", nullptr));
        label_7->setText(QCoreApplication::translate("DecodeNMEADialog", "Altitude:", nullptr));
        label_8->setText(QCoreApplication::translate("DecodeNMEADialog", "Geoidal Separation:", nullptr));
        label_9->setText(QCoreApplication::translate("DecodeNMEADialog", "DGS age:", nullptr));
        label_26->setText(QCoreApplication::translate("DecodeNMEADialog", "DGS id:", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("DecodeNMEADialog", "$GPGSA", nullptr));
        label_10->setText(QCoreApplication::translate("DecodeNMEADialog", "Mode1:", nullptr));
        label_11->setText(QCoreApplication::translate("DecodeNMEADialog", "Mode2:", nullptr));
        label_12->setText(QCoreApplication::translate("DecodeNMEADialog", "Satellite Used (CH1-12):", nullptr));
        label_13->setText(QCoreApplication::translate("DecodeNMEADialog", "PDOP:", nullptr));
        label_14->setText(QCoreApplication::translate("DecodeNMEADialog", "HDOP:", nullptr));
        label_15->setText(QCoreApplication::translate("DecodeNMEADialog", "VDOP:", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("DecodeNMEADialog", "$GPGSV, $GLGSV", nullptr));
        pte_pgsv->setPlainText(QCoreApplication::translate("DecodeNMEADialog", "1\n"
"2\n"
"3\n"
"4", nullptr));
        pushButton->setText(QCoreApplication::translate("DecodeNMEADialog", "Satelite GPS", nullptr));
        pte_lgsv->setPlainText(QCoreApplication::translate("DecodeNMEADialog", "1\n"
"2\n"
"3\n"
"4", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DecodeNMEADialog", "Satelite Glonass:", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("DecodeNMEADialog", "$GPZDA", nullptr));
        label_39->setText(QCoreApplication::translate("DecodeNMEADialog", "UTC Time:", nullptr));
        label_40->setText(QCoreApplication::translate("DecodeNMEADialog", "Day:", nullptr));
        label_41->setText(QCoreApplication::translate("DecodeNMEADialog", "Month:", nullptr));
        label_42->setText(QCoreApplication::translate("DecodeNMEADialog", "Year:", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("DecodeNMEADialog", "$PMTKCHN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DecodeNMEADialog: public Ui_DecodeNMEADialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DECODENMEADIALOG_H
