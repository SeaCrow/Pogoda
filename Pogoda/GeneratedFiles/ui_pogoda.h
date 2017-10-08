/********************************************************************************
** Form generated from reading UI file 'pogoda.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POGODA_H
#define UI_POGODA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PogodaClass
{
public:
    QWidget *centralWidget;
    QLabel *label_mapka_tlo;
    QComboBox *comboBox_zielona;
    QComboBox *comboBox_wroclaw;
    QComboBox *comboBox_katowice;
    QComboBox *comboBox_krakow;
    QComboBox *comboBox_rzeszow;
    QComboBox *comboBox_lodz;
    QComboBox *comboBox_lublin;
    QComboBox *comboBox_warszawa;
    QComboBox *comboBox_poznan;
    QComboBox *comboBox_gorzow;
    QComboBox *comboBox_szczecin;
    QComboBox *comboBox_bydgoszcz;
    QComboBox *comboBox_gdansk;
    QComboBox *comboBox_olsztyn;
    QComboBox *comboBox_bialystok;
    QComboBox *comboBox_suwalki;
    QLabel *label_ico_zielona;
    QLabel *label_ico_gorzow;
    QLabel *label_ico_szczecin;
    QLabel *label_ico_bydgoszcz;
    QLabel *label_ico_poznan;
    QLabel *label_ico_warszawa;
    QLabel *label_ico_olsztyn;
    QLabel *label_ico_suwalki;
    QLabel *label_ico_gdansk;
    QLabel *label_ico_lodz;
    QLabel *label_ico_lublin;
    QLabel *label_ico_bialystok;
    QLabel *label_ico_katowice;
    QLabel *label_ico_krakow;
    QLabel *label_ico_rzeszow;
    QLabel *label_ico_wroclaw;
    QPushButton *pushButton_dzien;
    QPushButton *pushButton_noc;
    QPushButton *pushButton_save;
    QLineEdit *lineEdit_zielona;
    QLineEdit *lineEdit_wroclaw;
    QLineEdit *lineEdit_katowice;
    QLineEdit *lineEdit_krakow;
    QLineEdit *lineEdit_rzeszow;
    QLineEdit *lineEdit_lublin;
    QLineEdit *lineEdit_lodz;
    QLineEdit *lineEdit_gorzow;
    QLineEdit *lineEdit_poznan;
    QLineEdit *lineEdit_warszawa;
    QLineEdit *lineEdit_bialystok;
    QLineEdit *lineEdit_olsztyn;
    QLineEdit *lineEdit_suwalki;
    QLineEdit *lineEdit_bydgoszcz;
    QLineEdit *lineEdit_szczecin;
    QLineEdit *lineEdit_gdansk;
    QCheckBox *checkBox_adv;
    QRadioButton *radioButton_pogoda;
    QRadioButton *radioButton_temperatura;
    QComboBox *comboBox_adv;
    QPushButton *pushButton_podglad;
    QPushButton *pushButton_itemUp;
    QPushButton *pushButton_itemDown;
    QPushButton *pushButton_itemLeft;
    QPushButton *pushButton_itemRight;
    QPushButton *pushButton_savepos;
    QCheckBox *checkBox_adv_miasta;
    QLabel *label_author;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PogodaClass)
    {
        if (PogodaClass->objectName().isEmpty())
            PogodaClass->setObjectName(QStringLiteral("PogodaClass"));
        PogodaClass->resize(1110, 642);
        centralWidget = new QWidget(PogodaClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_mapka_tlo = new QLabel(centralWidget);
        label_mapka_tlo->setObjectName(QStringLiteral("label_mapka_tlo"));
        label_mapka_tlo->setGeometry(QRect(10, 50, 960, 540));
        label_mapka_tlo->setFrameShape(QFrame::StyledPanel);
        label_mapka_tlo->setPixmap(QPixmap(QString::fromUtf8(":/Pogoda/images/Dzien_50.png")));
        label_mapka_tlo->setScaledContents(false);
        comboBox_zielona = new QComboBox(centralWidget);
        comboBox_zielona->setObjectName(QStringLiteral("comboBox_zielona"));
        comboBox_zielona->setGeometry(QRect(130, 280, 100, 22));
        comboBox_zielona->setEditable(false);
        comboBox_zielona->setFrame(true);
        comboBox_wroclaw = new QComboBox(centralWidget);
        comboBox_wroclaw->setObjectName(QStringLiteral("comboBox_wroclaw"));
        comboBox_wroclaw->setGeometry(QRect(240, 360, 100, 22));
        comboBox_wroclaw->setEditable(false);
        comboBox_wroclaw->setFrame(true);
        comboBox_katowice = new QComboBox(centralWidget);
        comboBox_katowice->setObjectName(QStringLiteral("comboBox_katowice"));
        comboBox_katowice->setGeometry(QRect(350, 424, 100, 22));
        comboBox_katowice->setEditable(false);
        comboBox_katowice->setFrame(true);
        comboBox_krakow = new QComboBox(centralWidget);
        comboBox_krakow->setObjectName(QStringLiteral("comboBox_krakow"));
        comboBox_krakow->setGeometry(QRect(490, 450, 100, 22));
        comboBox_krakow->setEditable(false);
        comboBox_krakow->setFrame(true);
        comboBox_rzeszow = new QComboBox(centralWidget);
        comboBox_rzeszow->setObjectName(QStringLiteral("comboBox_rzeszow"));
        comboBox_rzeszow->setGeometry(QRect(620, 458, 100, 22));
        comboBox_rzeszow->setEditable(false);
        comboBox_rzeszow->setFrame(true);
        comboBox_lodz = new QComboBox(centralWidget);
        comboBox_lodz->setObjectName(QStringLiteral("comboBox_lodz"));
        comboBox_lodz->setGeometry(QRect(410, 340, 100, 22));
        comboBox_lodz->setEditable(false);
        comboBox_lodz->setFrame(true);
        comboBox_lublin = new QComboBox(centralWidget);
        comboBox_lublin->setObjectName(QStringLiteral("comboBox_lublin"));
        comboBox_lublin->setGeometry(QRect(600, 345, 100, 22));
        comboBox_lublin->setEditable(false);
        comboBox_lublin->setFrame(true);
        comboBox_warszawa = new QComboBox(centralWidget);
        comboBox_warszawa->setObjectName(QStringLiteral("comboBox_warszawa"));
        comboBox_warszawa->setGeometry(QRect(480, 260, 100, 22));
        comboBox_warszawa->setEditable(false);
        comboBox_warszawa->setFrame(true);
        comboBox_poznan = new QComboBox(centralWidget);
        comboBox_poznan->setObjectName(QStringLiteral("comboBox_poznan"));
        comboBox_poznan->setGeometry(QRect(320, 232, 100, 22));
        comboBox_poznan->setEditable(false);
        comboBox_poznan->setFrame(true);
        comboBox_gorzow = new QComboBox(centralWidget);
        comboBox_gorzow->setObjectName(QStringLiteral("comboBox_gorzow"));
        comboBox_gorzow->setGeometry(QRect(140, 195, 100, 22));
        comboBox_gorzow->setEditable(false);
        comboBox_gorzow->setFrame(true);
        comboBox_szczecin = new QComboBox(centralWidget);
        comboBox_szczecin->setObjectName(QStringLiteral("comboBox_szczecin"));
        comboBox_szczecin->setGeometry(QRect(150, 110, 100, 22));
        comboBox_szczecin->setEditable(false);
        comboBox_szczecin->setFrame(true);
        comboBox_bydgoszcz = new QComboBox(centralWidget);
        comboBox_bydgoszcz->setObjectName(QStringLiteral("comboBox_bydgoszcz"));
        comboBox_bydgoszcz->setGeometry(QRect(300, 145, 100, 22));
        comboBox_bydgoszcz->setEditable(false);
        comboBox_bydgoszcz->setFrame(true);
        comboBox_gdansk = new QComboBox(centralWidget);
        comboBox_gdansk->setObjectName(QStringLiteral("comboBox_gdansk"));
        comboBox_gdansk->setGeometry(QRect(310, 80, 100, 22));
        comboBox_gdansk->setEditable(false);
        comboBox_gdansk->setFrame(true);
        comboBox_olsztyn = new QComboBox(centralWidget);
        comboBox_olsztyn->setObjectName(QStringLiteral("comboBox_olsztyn"));
        comboBox_olsztyn->setGeometry(QRect(460, 150, 100, 22));
        comboBox_olsztyn->setEditable(false);
        comboBox_olsztyn->setFrame(true);
        comboBox_bialystok = new QComboBox(centralWidget);
        comboBox_bialystok->setObjectName(QStringLiteral("comboBox_bialystok"));
        comboBox_bialystok->setGeometry(QRect(600, 200, 100, 22));
        comboBox_bialystok->setEditable(false);
        comboBox_bialystok->setFrame(true);
        comboBox_suwalki = new QComboBox(centralWidget);
        comboBox_suwalki->setObjectName(QStringLiteral("comboBox_suwalki"));
        comboBox_suwalki->setGeometry(QRect(560, 105, 100, 22));
        comboBox_suwalki->setEditable(false);
        comboBox_suwalki->setFrame(true);
        label_ico_zielona = new QLabel(centralWidget);
        label_ico_zielona->setObjectName(QStringLiteral("label_ico_zielona"));
        label_ico_zielona->setGeometry(QRect(115, 230, 124, 107));
        label_ico_gorzow = new QLabel(centralWidget);
        label_ico_gorzow->setObjectName(QStringLiteral("label_ico_gorzow"));
        label_ico_gorzow->setGeometry(QRect(130, 140, 124, 107));
        label_ico_szczecin = new QLabel(centralWidget);
        label_ico_szczecin->setObjectName(QStringLiteral("label_ico_szczecin"));
        label_ico_szczecin->setGeometry(QRect(135, 60, 124, 107));
        label_ico_bydgoszcz = new QLabel(centralWidget);
        label_ico_bydgoszcz->setObjectName(QStringLiteral("label_ico_bydgoszcz"));
        label_ico_bydgoszcz->setGeometry(QRect(285, 95, 124, 107));
        label_ico_poznan = new QLabel(centralWidget);
        label_ico_poznan->setObjectName(QStringLiteral("label_ico_poznan"));
        label_ico_poznan->setGeometry(QRect(308, 178, 124, 107));
        label_ico_warszawa = new QLabel(centralWidget);
        label_ico_warszawa->setObjectName(QStringLiteral("label_ico_warszawa"));
        label_ico_warszawa->setGeometry(QRect(465, 205, 124, 107));
        label_ico_olsztyn = new QLabel(centralWidget);
        label_ico_olsztyn->setObjectName(QStringLiteral("label_ico_olsztyn"));
        label_ico_olsztyn->setGeometry(QRect(445, 95, 124, 107));
        label_ico_suwalki = new QLabel(centralWidget);
        label_ico_suwalki->setObjectName(QStringLiteral("label_ico_suwalki"));
        label_ico_suwalki->setGeometry(QRect(542, 55, 124, 107));
        label_ico_gdansk = new QLabel(centralWidget);
        label_ico_gdansk->setObjectName(QStringLiteral("label_ico_gdansk"));
        label_ico_gdansk->setGeometry(QRect(290, 40, 124, 107));
        label_ico_lodz = new QLabel(centralWidget);
        label_ico_lodz->setObjectName(QStringLiteral("label_ico_lodz"));
        label_ico_lodz->setGeometry(QRect(407, 282, 124, 107));
        label_ico_lublin = new QLabel(centralWidget);
        label_ico_lublin->setObjectName(QStringLiteral("label_ico_lublin"));
        label_ico_lublin->setGeometry(QRect(588, 288, 124, 107));
        label_ico_bialystok = new QLabel(centralWidget);
        label_ico_bialystok->setObjectName(QStringLiteral("label_ico_bialystok"));
        label_ico_bialystok->setGeometry(QRect(590, 145, 124, 107));
        label_ico_katowice = new QLabel(centralWidget);
        label_ico_katowice->setObjectName(QStringLiteral("label_ico_katowice"));
        label_ico_katowice->setGeometry(QRect(358, 372, 124, 107));
        label_ico_krakow = new QLabel(centralWidget);
        label_ico_krakow->setObjectName(QStringLiteral("label_ico_krakow"));
        label_ico_krakow->setGeometry(QRect(480, 392, 124, 107));
        label_ico_rzeszow = new QLabel(centralWidget);
        label_ico_rzeszow->setObjectName(QStringLiteral("label_ico_rzeszow"));
        label_ico_rzeszow->setGeometry(QRect(604, 388, 124, 107));
        label_ico_wroclaw = new QLabel(centralWidget);
        label_ico_wroclaw->setObjectName(QStringLiteral("label_ico_wroclaw"));
        label_ico_wroclaw->setGeometry(QRect(235, 303, 124, 107));
        pushButton_dzien = new QPushButton(centralWidget);
        pushButton_dzien->setObjectName(QStringLiteral("pushButton_dzien"));
        pushButton_dzien->setGeometry(QRect(10, 0, 71, 41));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Pogoda/images/ikonki/slonce_50.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_dzien->setIcon(icon);
        pushButton_dzien->setIconSize(QSize(32, 32));
        pushButton_noc = new QPushButton(centralWidget);
        pushButton_noc->setObjectName(QStringLiteral("pushButton_noc"));
        pushButton_noc->setGeometry(QRect(80, 0, 71, 41));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Pogoda/images/ikonki/ksiezyc_50.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_noc->setIcon(icon1);
        pushButton_noc->setIconSize(QSize(32, 32));
        pushButton_save = new QPushButton(centralWidget);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));
        pushButton_save->setGeometry(QRect(260, 0, 71, 41));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Pogoda/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_save->setIcon(icon2);
        pushButton_save->setIconSize(QSize(16, 16));
        lineEdit_zielona = new QLineEdit(centralWidget);
        lineEdit_zielona->setObjectName(QStringLiteral("lineEdit_zielona"));
        lineEdit_zielona->setGeometry(QRect(260, 265, 41, 31));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        lineEdit_zielona->setFont(font);
        lineEdit_wroclaw = new QLineEdit(centralWidget);
        lineEdit_wroclaw->setObjectName(QStringLiteral("lineEdit_wroclaw"));
        lineEdit_wroclaw->setGeometry(QRect(356, 344, 41, 31));
        lineEdit_wroclaw->setFont(font);
        lineEdit_katowice = new QLineEdit(centralWidget);
        lineEdit_katowice->setObjectName(QStringLiteral("lineEdit_katowice"));
        lineEdit_katowice->setGeometry(QRect(440, 410, 41, 31));
        lineEdit_katowice->setFont(font);
        lineEdit_krakow = new QLineEdit(centralWidget);
        lineEdit_krakow->setObjectName(QStringLiteral("lineEdit_krakow"));
        lineEdit_krakow->setGeometry(QRect(580, 437, 41, 31));
        lineEdit_krakow->setFont(font);
        lineEdit_rzeszow = new QLineEdit(centralWidget);
        lineEdit_rzeszow->setObjectName(QStringLiteral("lineEdit_rzeszow"));
        lineEdit_rzeszow->setGeometry(QRect(715, 442, 41, 31));
        lineEdit_rzeszow->setFont(font);
        lineEdit_lublin = new QLineEdit(centralWidget);
        lineEdit_lublin->setObjectName(QStringLiteral("lineEdit_lublin"));
        lineEdit_lublin->setGeometry(QRect(698, 330, 41, 31));
        lineEdit_lublin->setFont(font);
        lineEdit_lodz = new QLineEdit(centralWidget);
        lineEdit_lodz->setObjectName(QStringLiteral("lineEdit_lodz"));
        lineEdit_lodz->setGeometry(QRect(515, 325, 41, 31));
        lineEdit_lodz->setFont(font);
        lineEdit_gorzow = new QLineEdit(centralWidget);
        lineEdit_gorzow->setObjectName(QStringLiteral("lineEdit_gorzow"));
        lineEdit_gorzow->setGeometry(QRect(270, 180, 41, 31));
        lineEdit_gorzow->setFont(font);
        lineEdit_poznan = new QLineEdit(centralWidget);
        lineEdit_poznan->setObjectName(QStringLiteral("lineEdit_poznan"));
        lineEdit_poznan->setGeometry(QRect(425, 215, 41, 31));
        lineEdit_poznan->setFont(font);
        lineEdit_warszawa = new QLineEdit(centralWidget);
        lineEdit_warszawa->setObjectName(QStringLiteral("lineEdit_warszawa"));
        lineEdit_warszawa->setGeometry(QRect(586, 243, 41, 31));
        lineEdit_warszawa->setFont(font);
        lineEdit_bialystok = new QLineEdit(centralWidget);
        lineEdit_bialystok->setObjectName(QStringLiteral("lineEdit_bialystok"));
        lineEdit_bialystok->setGeometry(QRect(700, 185, 41, 31));
        lineEdit_bialystok->setFont(font);
        lineEdit_olsztyn = new QLineEdit(centralWidget);
        lineEdit_olsztyn->setObjectName(QStringLiteral("lineEdit_olsztyn"));
        lineEdit_olsztyn->setGeometry(QRect(560, 138, 41, 31));
        lineEdit_olsztyn->setFont(font);
        lineEdit_suwalki = new QLineEdit(centralWidget);
        lineEdit_suwalki->setObjectName(QStringLiteral("lineEdit_suwalki"));
        lineEdit_suwalki->setGeometry(QRect(655, 93, 41, 31));
        lineEdit_suwalki->setFont(font);
        lineEdit_bydgoszcz = new QLineEdit(centralWidget);
        lineEdit_bydgoszcz->setObjectName(QStringLiteral("lineEdit_bydgoszcz"));
        lineEdit_bydgoszcz->setGeometry(QRect(410, 130, 41, 31));
        lineEdit_bydgoszcz->setFont(font);
        lineEdit_szczecin = new QLineEdit(centralWidget);
        lineEdit_szczecin->setObjectName(QStringLiteral("lineEdit_szczecin"));
        lineEdit_szczecin->setGeometry(QRect(256, 98, 41, 31));
        lineEdit_szczecin->setFont(font);
        lineEdit_gdansk = new QLineEdit(centralWidget);
        lineEdit_gdansk->setObjectName(QStringLiteral("lineEdit_gdansk"));
        lineEdit_gdansk->setGeometry(QRect(415, 68, 41, 31));
        lineEdit_gdansk->setFont(font);
        checkBox_adv = new QCheckBox(centralWidget);
        checkBox_adv->setObjectName(QStringLiteral("checkBox_adv"));
        checkBox_adv->setGeometry(QRect(870, 10, 101, 17));
        radioButton_pogoda = new QRadioButton(centralWidget);
        radioButton_pogoda->setObjectName(QStringLiteral("radioButton_pogoda"));
        radioButton_pogoda->setGeometry(QRect(980, 50, 82, 17));
        radioButton_temperatura = new QRadioButton(centralWidget);
        radioButton_temperatura->setObjectName(QStringLiteral("radioButton_temperatura"));
        radioButton_temperatura->setGeometry(QRect(980, 70, 82, 17));
        comboBox_adv = new QComboBox(centralWidget);
        comboBox_adv->setObjectName(QStringLiteral("comboBox_adv"));
        comboBox_adv->setGeometry(QRect(980, 100, 121, 22));
        pushButton_podglad = new QPushButton(centralWidget);
        pushButton_podglad->setObjectName(QStringLiteral("pushButton_podglad"));
        pushButton_podglad->setGeometry(QRect(190, 0, 71, 41));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Pogoda/images/podglad.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_podglad->setIcon(icon3);
        pushButton_podglad->setIconSize(QSize(16, 16));
        pushButton_itemUp = new QPushButton(centralWidget);
        pushButton_itemUp->setObjectName(QStringLiteral("pushButton_itemUp"));
        pushButton_itemUp->setGeometry(QRect(1020, 150, 31, 31));
        pushButton_itemDown = new QPushButton(centralWidget);
        pushButton_itemDown->setObjectName(QStringLiteral("pushButton_itemDown"));
        pushButton_itemDown->setGeometry(QRect(1020, 190, 31, 31));
        pushButton_itemLeft = new QPushButton(centralWidget);
        pushButton_itemLeft->setObjectName(QStringLiteral("pushButton_itemLeft"));
        pushButton_itemLeft->setGeometry(QRect(980, 170, 31, 31));
        pushButton_itemRight = new QPushButton(centralWidget);
        pushButton_itemRight->setObjectName(QStringLiteral("pushButton_itemRight"));
        pushButton_itemRight->setGeometry(QRect(1060, 170, 31, 31));
        pushButton_savepos = new QPushButton(centralWidget);
        pushButton_savepos->setObjectName(QStringLiteral("pushButton_savepos"));
        pushButton_savepos->setGeometry(QRect(990, 240, 101, 41));
        pushButton_savepos->setIcon(icon2);
        pushButton_savepos->setIconSize(QSize(16, 16));
        checkBox_adv_miasta = new QCheckBox(centralWidget);
        checkBox_adv_miasta->setObjectName(QStringLiteral("checkBox_adv_miasta"));
        checkBox_adv_miasta->setGeometry(QRect(980, 300, 121, 17));
        label_author = new QLabel(centralWidget);
        label_author->setObjectName(QStringLiteral("label_author"));
        label_author->setGeometry(QRect(860, 590, 111, 16));
        PogodaClass->setCentralWidget(centralWidget);
        label_mapka_tlo->raise();
        label_ico_zielona->raise();
        label_ico_gorzow->raise();
        label_ico_szczecin->raise();
        label_ico_bydgoszcz->raise();
        label_ico_poznan->raise();
        label_ico_warszawa->raise();
        label_ico_olsztyn->raise();
        label_ico_suwalki->raise();
        label_ico_gdansk->raise();
        label_ico_lodz->raise();
        label_ico_lublin->raise();
        label_ico_bialystok->raise();
        label_ico_katowice->raise();
        label_ico_krakow->raise();
        label_ico_rzeszow->raise();
        label_ico_wroclaw->raise();
        comboBox_bialystok->raise();
        comboBox_bydgoszcz->raise();
        comboBox_lodz->raise();
        comboBox_gorzow->raise();
        comboBox_katowice->raise();
        comboBox_suwalki->raise();
        comboBox_lublin->raise();
        comboBox_poznan->raise();
        comboBox_rzeszow->raise();
        comboBox_warszawa->raise();
        comboBox_olsztyn->raise();
        comboBox_zielona->raise();
        comboBox_szczecin->raise();
        comboBox_krakow->raise();
        comboBox_gdansk->raise();
        comboBox_wroclaw->raise();
        pushButton_dzien->raise();
        pushButton_noc->raise();
        pushButton_save->raise();
        lineEdit_zielona->raise();
        lineEdit_wroclaw->raise();
        lineEdit_katowice->raise();
        lineEdit_krakow->raise();
        lineEdit_rzeszow->raise();
        lineEdit_lublin->raise();
        lineEdit_lodz->raise();
        lineEdit_gorzow->raise();
        lineEdit_poznan->raise();
        lineEdit_warszawa->raise();
        lineEdit_bialystok->raise();
        lineEdit_olsztyn->raise();
        lineEdit_suwalki->raise();
        lineEdit_bydgoszcz->raise();
        lineEdit_szczecin->raise();
        lineEdit_gdansk->raise();
        checkBox_adv->raise();
        radioButton_pogoda->raise();
        radioButton_temperatura->raise();
        comboBox_adv->raise();
        pushButton_podglad->raise();
        pushButton_itemUp->raise();
        pushButton_itemDown->raise();
        pushButton_itemLeft->raise();
        pushButton_itemRight->raise();
        pushButton_savepos->raise();
        checkBox_adv_miasta->raise();
        label_author->raise();
        mainToolBar = new QToolBar(PogodaClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        PogodaClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PogodaClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        PogodaClass->setStatusBar(statusBar);

        retranslateUi(PogodaClass);

        comboBox_zielona->setCurrentIndex(-1);
        comboBox_wroclaw->setCurrentIndex(-1);
        comboBox_katowice->setCurrentIndex(-1);
        comboBox_krakow->setCurrentIndex(-1);
        comboBox_rzeszow->setCurrentIndex(-1);
        comboBox_lodz->setCurrentIndex(-1);
        comboBox_lublin->setCurrentIndex(-1);
        comboBox_warszawa->setCurrentIndex(-1);
        comboBox_poznan->setCurrentIndex(-1);
        comboBox_gorzow->setCurrentIndex(-1);
        comboBox_szczecin->setCurrentIndex(-1);
        comboBox_bydgoszcz->setCurrentIndex(-1);
        comboBox_gdansk->setCurrentIndex(-1);
        comboBox_olsztyn->setCurrentIndex(-1);
        comboBox_bialystok->setCurrentIndex(-1);
        comboBox_suwalki->setCurrentIndex(-1);
        comboBox_adv->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(PogodaClass);
    } // setupUi

    void retranslateUi(QMainWindow *PogodaClass)
    {
        PogodaClass->setWindowTitle(QApplication::translate("PogodaClass", "Pogoda", 0));
        label_mapka_tlo->setText(QString());
        comboBox_zielona->clear();
        comboBox_zielona->insertItems(0, QStringList()
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce", 0)
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce/Chmury", 0)
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce/Deszcz", 0)
         << QApplication::translate("PogodaClass", "Deszcz", 0)
         << QApplication::translate("PogodaClass", "Burza", 0)
         << QApplication::translate("PogodaClass", "\305\232nieg", 0)
         << QApplication::translate("PogodaClass", "Ksi\304\231\305\274yc", 0)
         << QApplication::translate("PogodaClass", "Ksi\304\231\305\274yc/Chmury", 0)
         << QString()
        );
        comboBox_zielona->setCurrentText(QString());
        comboBox_wroclaw->clear();
        comboBox_wroclaw->insertItems(0, QStringList()
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce", 0)
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce/Chmury", 0)
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce/Deszcz", 0)
         << QApplication::translate("PogodaClass", "Deszcz", 0)
         << QApplication::translate("PogodaClass", "Burza", 0)
         << QApplication::translate("PogodaClass", "\305\232nieg", 0)
         << QApplication::translate("PogodaClass", "Ksi\304\231\305\274yc", 0)
         << QApplication::translate("PogodaClass", "Ksi\304\231\305\274yc/Chmury", 0)
         << QString()
        );
        comboBox_wroclaw->setCurrentText(QString());
        comboBox_katowice->clear();
        comboBox_katowice->insertItems(0, QStringList()
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce", 0)
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce/Chmury", 0)
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce/Deszcz", 0)
         << QApplication::translate("PogodaClass", "Deszcz", 0)
         << QApplication::translate("PogodaClass", "Burza", 0)
         << QApplication::translate("PogodaClass", "\305\232nieg", 0)
         << QApplication::translate("PogodaClass", "Ksi\304\231\305\274yc", 0)
         << QApplication::translate("PogodaClass", "Ksi\304\231\305\274yc/Chmury", 0)
         << QString()
        );
        comboBox_katowice->setCurrentText(QString());
        comboBox_krakow->clear();
        comboBox_krakow->insertItems(0, QStringList()
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce", 0)
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce/Chmury", 0)
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce/Deszcz", 0)
         << QApplication::translate("PogodaClass", "Deszcz", 0)
         << QApplication::translate("PogodaClass", "Burza", 0)
         << QApplication::translate("PogodaClass", "\305\232nieg", 0)
         << QApplication::translate("PogodaClass", "Ksi\304\231\305\274yc", 0)
         << QApplication::translate("PogodaClass", "Ksi\304\231\305\274yc/Chmury", 0)
         << QString()
        );
        comboBox_krakow->setCurrentText(QString());
        comboBox_rzeszow->clear();
        comboBox_rzeszow->insertItems(0, QStringList()
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce", 0)
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce/Chmury", 0)
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce/Deszcz", 0)
         << QApplication::translate("PogodaClass", "Deszcz", 0)
         << QApplication::translate("PogodaClass", "Burza", 0)
         << QApplication::translate("PogodaClass", "\305\232nieg", 0)
         << QApplication::translate("PogodaClass", "Ksi\304\231\305\274yc", 0)
         << QApplication::translate("PogodaClass", "Ksi\304\231\305\274yc/Chmury", 0)
         << QString()
        );
        comboBox_rzeszow->setCurrentText(QString());
        comboBox_lodz->clear();
        comboBox_lodz->insertItems(0, QStringList()
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce", 0)
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce/Chmury", 0)
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce/Deszcz", 0)
         << QApplication::translate("PogodaClass", "Deszcz", 0)
         << QApplication::translate("PogodaClass", "Burza", 0)
         << QApplication::translate("PogodaClass", "\305\232nieg", 0)
         << QApplication::translate("PogodaClass", "Ksi\304\231\305\274yc", 0)
         << QApplication::translate("PogodaClass", "Ksi\304\231\305\274yc/Chmury", 0)
         << QString()
        );
        comboBox_lodz->setCurrentText(QString());
        comboBox_lublin->clear();
        comboBox_lublin->insertItems(0, QStringList()
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce", 0)
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce/Chmury", 0)
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce/Deszcz", 0)
         << QApplication::translate("PogodaClass", "Deszcz", 0)
         << QApplication::translate("PogodaClass", "Burza", 0)
         << QApplication::translate("PogodaClass", "\305\232nieg", 0)
         << QApplication::translate("PogodaClass", "Ksi\304\231\305\274yc", 0)
         << QApplication::translate("PogodaClass", "Ksi\304\231\305\274yc/Chmury", 0)
         << QString()
        );
        comboBox_lublin->setCurrentText(QString());
        comboBox_warszawa->clear();
        comboBox_warszawa->insertItems(0, QStringList()
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce", 0)
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce/Chmury", 0)
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce/Deszcz", 0)
         << QApplication::translate("PogodaClass", "Deszcz", 0)
         << QApplication::translate("PogodaClass", "Burza", 0)
         << QApplication::translate("PogodaClass", "\305\232nieg", 0)
         << QApplication::translate("PogodaClass", "Ksi\304\231\305\274yc", 0)
         << QApplication::translate("PogodaClass", "Ksi\304\231\305\274yc/Chmury", 0)
         << QString()
        );
        comboBox_warszawa->setCurrentText(QString());
        comboBox_poznan->clear();
        comboBox_poznan->insertItems(0, QStringList()
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce", 0)
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce/Chmury", 0)
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce/Deszcz", 0)
         << QApplication::translate("PogodaClass", "Deszcz", 0)
         << QApplication::translate("PogodaClass", "Burza", 0)
         << QApplication::translate("PogodaClass", "\305\232nieg", 0)
         << QApplication::translate("PogodaClass", "Ksi\304\231\305\274yc", 0)
         << QApplication::translate("PogodaClass", "Ksi\304\231\305\274yc/Chmury", 0)
         << QString()
        );
        comboBox_poznan->setCurrentText(QString());
        comboBox_gorzow->clear();
        comboBox_gorzow->insertItems(0, QStringList()
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce", 0)
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce/Chmury", 0)
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce/Deszcz", 0)
         << QApplication::translate("PogodaClass", "Deszcz", 0)
         << QApplication::translate("PogodaClass", "Burza", 0)
         << QApplication::translate("PogodaClass", "\305\232nieg", 0)
         << QApplication::translate("PogodaClass", "Ksi\304\231\305\274yc", 0)
         << QApplication::translate("PogodaClass", "Ksi\304\231\305\274yc/Chmury", 0)
         << QString()
        );
        comboBox_gorzow->setCurrentText(QString());
        comboBox_szczecin->clear();
        comboBox_szczecin->insertItems(0, QStringList()
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce", 0)
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce/Chmury", 0)
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce/Deszcz", 0)
         << QApplication::translate("PogodaClass", "Deszcz", 0)
         << QApplication::translate("PogodaClass", "Burza", 0)
         << QApplication::translate("PogodaClass", "\305\232nieg", 0)
         << QApplication::translate("PogodaClass", "Ksi\304\231\305\274yc", 0)
         << QApplication::translate("PogodaClass", "Ksi\304\231\305\274yc/Chmury", 0)
         << QString()
        );
        comboBox_szczecin->setCurrentText(QString());
        comboBox_bydgoszcz->clear();
        comboBox_bydgoszcz->insertItems(0, QStringList()
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce", 0)
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce/Chmury", 0)
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce/Deszcz", 0)
         << QApplication::translate("PogodaClass", "Deszcz", 0)
         << QApplication::translate("PogodaClass", "Burza", 0)
         << QApplication::translate("PogodaClass", "\305\232nieg", 0)
         << QApplication::translate("PogodaClass", "Ksi\304\231\305\274yc", 0)
         << QApplication::translate("PogodaClass", "Ksi\304\231\305\274yc/Chmury", 0)
         << QString()
        );
        comboBox_bydgoszcz->setCurrentText(QString());
        comboBox_gdansk->clear();
        comboBox_gdansk->insertItems(0, QStringList()
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce", 0)
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce/Chmury", 0)
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce/Deszcz", 0)
         << QApplication::translate("PogodaClass", "Deszcz", 0)
         << QApplication::translate("PogodaClass", "Burza", 0)
         << QApplication::translate("PogodaClass", "\305\232nieg", 0)
         << QApplication::translate("PogodaClass", "Ksi\304\231\305\274yc", 0)
         << QApplication::translate("PogodaClass", "Ksi\304\231\305\274yc/Chmury", 0)
         << QString()
        );
        comboBox_gdansk->setCurrentText(QString());
        comboBox_olsztyn->clear();
        comboBox_olsztyn->insertItems(0, QStringList()
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce", 0)
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce/Chmury", 0)
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce/Deszcz", 0)
         << QApplication::translate("PogodaClass", "Deszcz", 0)
         << QApplication::translate("PogodaClass", "Burza", 0)
         << QApplication::translate("PogodaClass", "\305\232nieg", 0)
         << QApplication::translate("PogodaClass", "Ksi\304\231\305\274yc", 0)
         << QApplication::translate("PogodaClass", "Ksi\304\231\305\274yc/Chmury", 0)
         << QString()
        );
        comboBox_olsztyn->setCurrentText(QString());
        comboBox_bialystok->clear();
        comboBox_bialystok->insertItems(0, QStringList()
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce", 0)
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce/Chmury", 0)
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce/Deszcz", 0)
         << QApplication::translate("PogodaClass", "Deszcz", 0)
         << QApplication::translate("PogodaClass", "Burza", 0)
         << QApplication::translate("PogodaClass", "\305\232nieg", 0)
         << QApplication::translate("PogodaClass", "Ksi\304\231\305\274yc", 0)
         << QApplication::translate("PogodaClass", "Ksi\304\231\305\274yc/Chmury", 0)
         << QString()
        );
        comboBox_bialystok->setCurrentText(QString());
        comboBox_suwalki->clear();
        comboBox_suwalki->insertItems(0, QStringList()
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce", 0)
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce/Chmury", 0)
         << QApplication::translate("PogodaClass", "S\305\202o\305\204ce/Deszcz", 0)
         << QApplication::translate("PogodaClass", "Deszcz", 0)
         << QApplication::translate("PogodaClass", "Burza", 0)
         << QApplication::translate("PogodaClass", "\305\232nieg", 0)
         << QApplication::translate("PogodaClass", "Ksi\304\231\305\274yc", 0)
         << QApplication::translate("PogodaClass", "Ksi\304\231\305\274yc/Chmury", 0)
         << QString()
        );
        comboBox_suwalki->setCurrentText(QString());
        label_ico_zielona->setText(QString());
        label_ico_gorzow->setText(QString());
        label_ico_szczecin->setText(QString());
        label_ico_bydgoszcz->setText(QString());
        label_ico_poznan->setText(QString());
        label_ico_warszawa->setText(QString());
        label_ico_olsztyn->setText(QString());
        label_ico_suwalki->setText(QString());
        label_ico_gdansk->setText(QString());
        label_ico_lodz->setText(QString());
        label_ico_lublin->setText(QString());
        label_ico_bialystok->setText(QString());
        label_ico_katowice->setText(QString());
        label_ico_krakow->setText(QString());
        label_ico_rzeszow->setText(QString());
        label_ico_wroclaw->setText(QString());
        pushButton_dzien->setText(QApplication::translate("PogodaClass", "Dzie\305\204", 0));
        pushButton_noc->setText(QApplication::translate("PogodaClass", "Noc", 0));
        pushButton_save->setText(QApplication::translate("PogodaClass", "Zapisz", 0));
        checkBox_adv->setText(QApplication::translate("PogodaClass", "Zaawansowane", 0));
        radioButton_pogoda->setText(QApplication::translate("PogodaClass", "Pogoda", 0));
        radioButton_temperatura->setText(QApplication::translate("PogodaClass", "Temperatura", 0));
        comboBox_adv->clear();
        comboBox_adv->insertItems(0, QStringList()
         << QApplication::translate("PogodaClass", "Bia\305\202ystok", 0)
         << QApplication::translate("PogodaClass", "Bydgoszcz", 0)
         << QApplication::translate("PogodaClass", "Gdansk", 0)
         << QApplication::translate("PogodaClass", "Gorz\303\263w Wlkp.", 0)
         << QApplication::translate("PogodaClass", "Katowice", 0)
         << QApplication::translate("PogodaClass", "Krak\303\263w", 0)
         << QApplication::translate("PogodaClass", "\305\201\303\263d\305\272", 0)
         << QApplication::translate("PogodaClass", "Lublin", 0)
         << QApplication::translate("PogodaClass", "Olsztyn", 0)
         << QApplication::translate("PogodaClass", "Pozna\305\204", 0)
         << QApplication::translate("PogodaClass", "Rzesz\303\263w", 0)
         << QApplication::translate("PogodaClass", "Suwa\305\202ki", 0)
         << QApplication::translate("PogodaClass", "Szczecin", 0)
         << QApplication::translate("PogodaClass", "Warszawa", 0)
         << QApplication::translate("PogodaClass", "Wroc\305\202aw", 0)
         << QApplication::translate("PogodaClass", "Zielona G\303\263ra", 0)
        );
        pushButton_podglad->setText(QApplication::translate("PogodaClass", "Podgl\304\205d", 0));
        pushButton_itemUp->setText(QApplication::translate("PogodaClass", "\342\226\262", 0));
        pushButton_itemDown->setText(QApplication::translate("PogodaClass", "\342\226\274", 0));
        pushButton_itemLeft->setText(QApplication::translate("PogodaClass", "\342\227\204", 0));
        pushButton_itemRight->setText(QApplication::translate("PogodaClass", "\342\226\272", 0));
        pushButton_savepos->setText(QApplication::translate("PogodaClass", "Zapisz Pozycje", 0));
        checkBox_adv_miasta->setText(QApplication::translate("PogodaClass", "Miasta na wierzchu", 0));
        label_author->setText(QApplication::translate("PogodaClass", "Filip Glapi\305\204ski - \302\251 2014", 0));
    } // retranslateUi

};

namespace Ui {
    class PogodaClass: public Ui_PogodaClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POGODA_H
