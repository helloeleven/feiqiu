/********************************************************************************
** Form generated from reading UI file 'userinfopage.ui'
**
** Created: Fri Aug 1 13:28:52 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINFOPAGE_H
#define UI_USERINFOPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStackedWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserInfoPage
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page_5;
    QLabel *label_27;
    QPushButton *pushButton_15;
    QLineEdit *userEmail;
    QLabel *label_28;
    QLineEdit *userName;
    QLabel *label_29;
    QLineEdit *userCellphone;
    QLabel *label_30;
    QLabel *label_31;
    QLineEdit *userHomephone;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLineEdit *userOtherInfo;
    QGroupBox *groupBox_7;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QComboBox *headpic;
    QComboBox *comboBox_6;
    QLabel *label_38;
    QGroupBox *groupBox_8;
    QLabel *label_39;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QLineEdit *userTelephone;
    QGroupBox *groupBox_9;
    QTextEdit *userSign;
    QLineEdit *userAddress;
    QCheckBox *checkBox_3;
    QWidget *page_6;
    QLabel *label;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_10;
    QCheckBox *checkBox_11;
    QCheckBox *checkBox_12;
    QWidget *page_7;
    QLabel *label_6;
    QCheckBox *checkBox_17;
    QCheckBox *checkBox_18;
    QCheckBox *checkBox_19;
    QCheckBox *checkBox_20;
    QCheckBox *checkBox_21;
    QCheckBox *checkBox_22;
    QCheckBox *checkBox_23;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_4;
    QCheckBox *checkBox_24;
    QWidget *page_8;
    QCheckBox *checkBox_13;
    QCheckBox *checkBox_14;
    QCheckBox *checkBox_15;
    QCheckBox *checkBox_16;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QLabel *label_4;
    QLabel *label_5;
    QListWidget *listWidget;
    QPushButton *SaveInfo;
    QPushButton *Cancel;

    void setupUi(QDialog *UserInfoPage)
    {
        if (UserInfoPage->objectName().isEmpty())
            UserInfoPage->setObjectName(QString::fromUtf8("UserInfoPage"));
        UserInfoPage->resize(589, 495);
        UserInfoPage->setStyleSheet(QString::fromUtf8(""));
        stackedWidget = new QStackedWidget(UserInfoPage);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(200, 30, 371, 401));
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        label_27 = new QLabel(page_5);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(10, 10, 251, 16));
        pushButton_15 = new QPushButton(page_5);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(190, 240, 128, 23));
        userEmail = new QLineEdit(page_5);
        userEmail->setObjectName(QString::fromUtf8("userEmail"));
        userEmail->setGeometry(QRect(260, 330, 99, 20));
        label_28 = new QLabel(page_5);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(190, 360, 54, 16));
        userName = new QLineEdit(page_5);
        userName->setObjectName(QString::fromUtf8("userName"));
        userName->setGeometry(QRect(80, 30, 133, 20));
        label_29 = new QLabel(page_5);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(30, 30, 48, 16));
        userCellphone = new QLineEdit(page_5);
        userCellphone->setObjectName(QString::fromUtf8("userCellphone"));
        userCellphone->setGeometry(QRect(80, 330, 98, 20));
        label_30 = new QLabel(page_5);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(20, 360, 60, 16));
        label_31 = new QLabel(page_5);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(20, 300, 60, 16));
        userHomephone = new QLineEdit(page_5);
        userHomephone->setObjectName(QString::fromUtf8("userHomephone"));
        userHomephone->setGeometry(QRect(260, 300, 96, 20));
        label_32 = new QLabel(page_5);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(20, 330, 60, 16));
        label_33 = new QLabel(page_5);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(190, 300, 60, 16));
        label_34 = new QLabel(page_5);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(190, 330, 54, 16));
        userOtherInfo = new QLineEdit(page_5);
        userOtherInfo->setObjectName(QString::fromUtf8("userOtherInfo"));
        userOtherInfo->setGeometry(QRect(260, 360, 99, 20));
        groupBox_7 = new QGroupBox(page_5);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(20, 80, 331, 71));
        label_35 = new QLabel(groupBox_7);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(2, 11, 48, 16));
        label_36 = new QLabel(groupBox_7);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(136, 11, 48, 16));
        label_37 = new QLabel(groupBox_7);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(194, 11, 54, 16));
        pushButton_16 = new QPushButton(groupBox_7);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(255, 41, 75, 23));
        pushButton_17 = new QPushButton(groupBox_7);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        pushButton_17->setGeometry(QRect(255, 12, 75, 23));
        headpic = new QComboBox(groupBox_7);
        headpic->setObjectName(QString::fromUtf8("headpic"));
        headpic->setGeometry(QRect(60, 20, 69, 41));
        headpic->setIconSize(QSize(32, 32));
        comboBox_6 = new QComboBox(page_5);
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));
        comboBox_6->setGeometry(QRect(80, 60, 69, 20));
        label_38 = new QLabel(page_5);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(30, 60, 36, 16));
        label_38->setMaximumSize(QSize(47, 16777215));
        groupBox_8 = new QGroupBox(page_5);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(20, 160, 151, 131));
        label_39 = new QLabel(groupBox_8);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(11, 21, 54, 16));
        pushButton_18 = new QPushButton(groupBox_8);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        pushButton_18->setGeometry(QRect(72, 51, 75, 23));
        pushButton_19 = new QPushButton(groupBox_8);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        pushButton_19->setGeometry(QRect(72, 22, 75, 23));
        userTelephone = new QLineEdit(page_5);
        userTelephone->setObjectName(QString::fromUtf8("userTelephone"));
        userTelephone->setGeometry(QRect(80, 300, 95, 20));
        groupBox_9 = new QGroupBox(page_5);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(180, 160, 169, 78));
        userSign = new QTextEdit(groupBox_9);
        userSign->setObjectName(QString::fromUtf8("userSign"));
        userSign->setGeometry(QRect(10, 13, 151, 61));
        userAddress = new QLineEdit(page_5);
        userAddress->setObjectName(QString::fromUtf8("userAddress"));
        userAddress->setGeometry(QRect(80, 360, 98, 20));
        checkBox_3 = new QCheckBox(page_5);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(190, 270, 143, 16));
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        label = new QLabel(page_6);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 54, 12));
        checkBox = new QCheckBox(page_6);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(20, 30, 131, 16));
        checkBox_2 = new QCheckBox(page_6);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(20, 50, 181, 16));
        checkBox_4 = new QCheckBox(page_6);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(20, 70, 201, 16));
        checkBox_5 = new QCheckBox(page_6);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(20, 90, 201, 16));
        checkBox_6 = new QCheckBox(page_6);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setGeometry(QRect(20, 110, 281, 16));
        checkBox_7 = new QCheckBox(page_6);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));
        checkBox_7->setGeometry(QRect(20, 130, 241, 16));
        checkBox_8 = new QCheckBox(page_6);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));
        checkBox_8->setGeometry(QRect(20, 150, 271, 16));
        checkBox_9 = new QCheckBox(page_6);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));
        checkBox_9->setGeometry(QRect(20, 170, 241, 16));
        checkBox_10 = new QCheckBox(page_6);
        checkBox_10->setObjectName(QString::fromUtf8("checkBox_10"));
        checkBox_10->setGeometry(QRect(20, 190, 281, 16));
        checkBox_11 = new QCheckBox(page_6);
        checkBox_11->setObjectName(QString::fromUtf8("checkBox_11"));
        checkBox_11->setGeometry(QRect(20, 210, 191, 16));
        checkBox_12 = new QCheckBox(page_6);
        checkBox_12->setObjectName(QString::fromUtf8("checkBox_12"));
        checkBox_12->setGeometry(QRect(20, 230, 101, 16));
        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        label_6 = new QLabel(page_7);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 10, 91, 16));
        checkBox_17 = new QCheckBox(page_7);
        checkBox_17->setObjectName(QString::fromUtf8("checkBox_17"));
        checkBox_17->setGeometry(QRect(20, 40, 201, 16));
        checkBox_18 = new QCheckBox(page_7);
        checkBox_18->setObjectName(QString::fromUtf8("checkBox_18"));
        checkBox_18->setGeometry(QRect(20, 70, 201, 16));
        checkBox_19 = new QCheckBox(page_7);
        checkBox_19->setObjectName(QString::fromUtf8("checkBox_19"));
        checkBox_19->setGeometry(QRect(20, 100, 321, 16));
        checkBox_20 = new QCheckBox(page_7);
        checkBox_20->setObjectName(QString::fromUtf8("checkBox_20"));
        checkBox_20->setGeometry(QRect(20, 130, 191, 16));
        checkBox_21 = new QCheckBox(page_7);
        checkBox_21->setObjectName(QString::fromUtf8("checkBox_21"));
        checkBox_21->setGeometry(QRect(20, 190, 131, 16));
        checkBox_22 = new QCheckBox(page_7);
        checkBox_22->setObjectName(QString::fromUtf8("checkBox_22"));
        checkBox_22->setGeometry(QRect(20, 160, 201, 16));
        checkBox_23 = new QCheckBox(page_7);
        checkBox_23->setObjectName(QString::fromUtf8("checkBox_23"));
        checkBox_23->setGeometry(QRect(20, 220, 91, 16));
        lineEdit_2 = new QLineEdit(page_7);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(230, 160, 113, 20));
        lineEdit_3 = new QLineEdit(page_7);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(160, 190, 113, 20));
        pushButton = new QPushButton(page_7);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 190, 41, 23));
        lineEdit_4 = new QLineEdit(page_7);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(130, 220, 111, 20));
        pushButton_4 = new QPushButton(page_7);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(270, 220, 41, 23));
        checkBox_24 = new QCheckBox(page_7);
        checkBox_24->setObjectName(QString::fromUtf8("checkBox_24"));
        checkBox_24->setGeometry(QRect(20, 250, 141, 16));
        stackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QString::fromUtf8("page_8"));
        checkBox_13 = new QCheckBox(page_8);
        checkBox_13->setObjectName(QString::fromUtf8("checkBox_13"));
        checkBox_13->setGeometry(QRect(10, 40, 151, 16));
        checkBox_14 = new QCheckBox(page_8);
        checkBox_14->setObjectName(QString::fromUtf8("checkBox_14"));
        checkBox_14->setGeometry(QRect(10, 60, 211, 16));
        checkBox_15 = new QCheckBox(page_8);
        checkBox_15->setObjectName(QString::fromUtf8("checkBox_15"));
        checkBox_15->setGeometry(QRect(10, 80, 211, 16));
        checkBox_16 = new QCheckBox(page_8);
        checkBox_16->setObjectName(QString::fromUtf8("checkBox_16"));
        checkBox_16->setGeometry(QRect(10, 100, 151, 16));
        label_2 = new QLabel(page_8);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 54, 12));
        label_3 = new QLabel(page_8);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 130, 71, 16));
        lineEdit = new QLineEdit(page_8);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(90, 130, 161, 20));
        pushButton_2 = new QPushButton(page_8);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 130, 41, 23));
        groupBox = new QGroupBox(page_8);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 180, 341, 221));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(20, 30, 89, 16));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(20, 60, 89, 16));
        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(20, 90, 171, 16));
        radioButton_4 = new QRadioButton(groupBox);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(20, 120, 131, 16));
        radioButton_5 = new QRadioButton(groupBox);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(20, 150, 131, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 190, 271, 20));
        label_4->setLayoutDirection(Qt::RightToLeft);
        label_4->setTextFormat(Qt::AutoText);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 170, 291, 20));
        stackedWidget->addWidget(page_8);
        listWidget = new QListWidget(UserInfoPage);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/bmp357.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setFont(font);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/bmp358.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        QBrush brush(QColor(168, 180, 199, 255));
        brush.setStyle(Qt::SolidPattern);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setFont(font);
        __qlistwidgetitem1->setBackground(brush);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/bmp359.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget);
        __qlistwidgetitem2->setFont(font);
        __qlistwidgetitem2->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/bmp360.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget);
        __qlistwidgetitem3->setFont(font);
        __qlistwidgetitem3->setBackground(brush);
        __qlistwidgetitem3->setIcon(icon3);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 20, 171, 461));
        listWidget->setStyleSheet(QString::fromUtf8(""));
        listWidget->setLineWidth(2);
        listWidget->setIconSize(QSize(32, 32));
        SaveInfo = new QPushButton(UserInfoPage);
        SaveInfo->setObjectName(QString::fromUtf8("SaveInfo"));
        SaveInfo->setGeometry(QRect(310, 450, 75, 23));
        Cancel = new QPushButton(UserInfoPage);
        Cancel->setObjectName(QString::fromUtf8("Cancel"));
        Cancel->setGeometry(QRect(410, 450, 75, 23));

        retranslateUi(UserInfoPage);

        stackedWidget->setCurrentIndex(0);
        headpic->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(UserInfoPage);
    } // setupUi

    void retranslateUi(QDialog *UserInfoPage)
    {
        UserInfoPage->setWindowTitle(QApplication::translate("UserInfoPage", "Dialog", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("UserInfoPage", "\344\270\252\344\272\272\350\265\204\346\226\231\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        pushButton_15->setText(QApplication::translate("UserInfoPage", "\346\237\245\347\234\213\346\211\200\346\234\211\347\224\250\346\210\267\344\277\241\346\201\257\350\265\204\346\226\231", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("UserInfoPage", "Q     Q\357\274\232", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("UserInfoPage", "\347\224\250\346\210\267\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("UserInfoPage", "\345\234\260    \345\235\200\357\274\232", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("UserInfoPage", "\345\212\236\345\205\254\347\224\265\350\257\235\357\274\232", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("UserInfoPage", "\346\211\213    \346\234\272\357\274\232", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("UserInfoPage", "\344\275\217\345\256\205\347\224\265\350\257\235\357\274\232", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("UserInfoPage", "\351\202\256   \347\256\261\357\274\232", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("UserInfoPage", "\345\244\264\345\203\217", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("UserInfoPage", "\345\270\270\347\224\250\345\244\264\345\203\217", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("UserInfoPage", "\344\270\252\346\200\247\345\244\264\345\203\217", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("UserInfoPage", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButton_16->setText(QApplication::translate("UserInfoPage", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        pushButton_17->setText(QApplication::translate("UserInfoPage", "\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("UserInfoPage", "\347\273\204\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("UserInfoPage", "\344\270\252\344\272\272\345\275\242\350\261\241\347\205\247\347\211\207", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("UserInfoPage", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButton_18->setText(QApplication::translate("UserInfoPage", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        pushButton_19->setText(QApplication::translate("UserInfoPage", "\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        groupBox_9->setTitle(QApplication::translate("UserInfoPage", "\344\270\252\346\200\247\347\255\276\345\220\215", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("UserInfoPage", "\344\273\245\344\270\213\344\270\252\344\272\272\344\277\241\346\201\257\350\265\204\346\226\231\345\205\261\344\272\253", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("UserInfoPage", "\347\263\273\347\273\237\350\256\276\347\275\256 ", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("UserInfoPage", "\345\274\200\346\234\272\350\207\252\345\212\250\350\277\220\350\241\214\346\255\244\347\250\213\345\272\217", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("UserInfoPage", "\345\267\246\351\224\256\345\215\225\345\207\273\346\211\230\347\233\230\345\233\276\346\240\207\346\211\223\345\274\200\344\270\273\347\225\214\351\235\242", 0, QApplication::UnicodeUTF8));
        checkBox_4->setText(QApplication::translate("UserInfoPage", "\345\274\200\346\234\272\350\207\252\345\212\250\350\277\220\350\241\214\346\227\266\357\274\214\347\250\213\345\272\217\350\207\252\345\212\250\346\234\200\345\260\217\345\214\226", 0, QApplication::UnicodeUTF8));
        checkBox_5->setText(QApplication::translate("UserInfoPage", "\345\217\214\345\207\273\350\277\220\350\241\214\347\250\213\345\272\217\346\227\266\357\274\214\347\250\213\345\272\217\350\207\252\345\212\250\346\234\200\345\260\217\345\214\226", 0, QApplication::UnicodeUTF8));
        checkBox_6->setText(QApplication::translate("UserInfoPage", "\345\205\263\351\227\255\344\270\273\351\235\242\346\235\277\346\227\266\357\274\214\344\270\215\351\200\200\345\207\272\347\250\213\345\272\217\357\274\214\346\234\200\345\260\217\345\214\226\345\210\260\344\273\273\345\212\241\346\240\217", 0, QApplication::UnicodeUTF8));
        checkBox_7->setText(QApplication::translate("UserInfoPage", "\347\250\213\345\272\217\350\277\220\350\241\214\350\277\207\347\250\213\344\270\255\357\274\214\345\215\240\347\224\250\345\206\205\345\255\230\350\207\252\345\212\250\346\234\200\345\260\217\345\214\226", 0, QApplication::UnicodeUTF8));
        checkBox_8->setText(QApplication::translate("UserInfoPage", "\350\207\252\345\212\250\346\243\200\346\237\245\346\234\200\346\226\260\347\211\210\346\234\254", 0, QApplication::UnicodeUTF8));
        checkBox_9->setText(QApplication::translate("UserInfoPage", "\344\270\273\351\235\242\346\235\277\344\270\215\350\207\252\345\212\250\345\201\234\351\235\240\344\270\213\346\226\271", 0, QApplication::UnicodeUTF8));
        checkBox_10->setText(QApplication::translate("UserInfoPage", "\344\270\273\351\235\242\346\235\277\350\207\252\345\212\250\345\201\234\351\235\240\351\232\220\350\227\217", 0, QApplication::UnicodeUTF8));
        checkBox_11->setText(QApplication::translate("UserInfoPage", "\344\270\273\347\252\227\345\217\243\345\247\213\347\273\210\344\277\235\345\255\230\345\234\250\345\205\266\344\273\226\347\252\227\345\217\243\345\211\215\347\253\257", 0, QApplication::UnicodeUTF8));
        checkBox_12->setText(QApplication::translate("UserInfoPage", "\344\277\235\345\255\230\350\201\212\345\244\251\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("UserInfoPage", "\345\217\221\351\200\201\346\216\245\346\224\266\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        checkBox_17->setText(QApplication::translate("UserInfoPage", "\345\217\252\346\230\276\347\244\272\346\266\210\346\201\257\357\274\214\344\270\215\350\207\252\345\212\250\345\274\271\345\207\272\346\224\266\345\210\260\346\266\210\346\201\257", 0, QApplication::UnicodeUTF8));
        checkBox_18->setText(QApplication::translate("UserInfoPage", "\346\234\211\350\246\201\346\216\245\345\217\227\347\232\204\346\226\207\344\273\266\346\227\266\357\274\214\350\207\252\345\212\250\345\274\271\345\207\272\346\266\210\346\201\257", 0, QApplication::UnicodeUTF8));
        checkBox_19->setText(QApplication::translate("UserInfoPage", "\345\217\221\351\200\201\345\244\232\344\272\272\345\257\271\350\257\235\346\266\210\346\201\257\346\227\266\357\274\214\344\270\215\346\216\245\345\217\227\345\257\271\346\226\271\347\246\273\347\272\277\346\227\266\350\207\252\345\212\250\345\233\236\345\244\215\347\232\204\345\206\205\345\256\271", 0, QApplication::UnicodeUTF8));
        checkBox_20->setText(QApplication::translate("UserInfoPage", "\347\246\273\347\272\277\347\212\266\346\200\201\346\227\266\344\270\215\350\207\252\345\212\250\345\274\271\345\207\272\346\224\266\345\210\260\346\266\210\346\201\257", 0, QApplication::UnicodeUTF8));
        checkBox_21->setText(QApplication::translate("UserInfoPage", "\346\224\266\345\210\260\346\266\210\346\201\257\346\227\266\345\217\221\345\207\272\345\243\260\351\237\263", 0, QApplication::UnicodeUTF8));
        checkBox_22->setText(QApplication::translate("UserInfoPage", "\347\246\273\347\272\277\346\227\266\344\275\277\347\224\250\350\207\252\345\212\250\345\233\236\345\244\215  \345\233\236\345\244\215\345\206\205\345\256\271\357\274\232", 0, QApplication::UnicodeUTF8));
        checkBox_23->setText(QApplication::translate("UserInfoPage", "\351\227\252\345\261\217\346\214\257\345\212\250\345\243\260\351\237\263", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("UserInfoPage", "...", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("UserInfoPage", "...", 0, QApplication::UnicodeUTF8));
        checkBox_24->setText(QApplication::translate("UserInfoPage", "\351\227\252\345\261\217\346\227\266\357\274\214\346\266\210\346\201\257\346\241\206\346\217\220\347\244\272", 0, QApplication::UnicodeUTF8));
        checkBox_13->setText(QApplication::translate("UserInfoPage", "\344\270\215\345\205\201\350\256\270\345\210\253\344\272\272\345\212\240\346\210\221\345\210\260\347\276\244\351\207\214", 0, QApplication::UnicodeUTF8));
        checkBox_14->setText(QApplication::translate("UserInfoPage", "\346\234\211\347\224\250\346\210\267\345\212\240\345\205\245\347\276\244\346\210\226\351\200\200\345\207\272\347\276\244\346\227\266\357\274\214\351\200\232\347\237\245\346\210\221", 0, QApplication::UnicodeUTF8));
        checkBox_15->setText(QApplication::translate("UserInfoPage", "\344\270\215\346\216\245\346\224\266\346\235\245\350\207\252\347\276\244\345\206\205\347\232\204\345\233\276\347\211\207", 0, QApplication::UnicodeUTF8));
        checkBox_16->setText(QApplication::translate("UserInfoPage", "\346\224\266\345\210\260\346\266\210\346\201\257\346\227\266\345\217\221\345\207\272\347\232\204\345\243\260\351\237\263", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("UserInfoPage", "\347\276\244\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("UserInfoPage", "\345\243\260\351\237\263\350\267\257\345\276\204\345\220\215", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("UserInfoPage", "...", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("UserInfoPage", "\347\276\244\346\266\210\346\201\257\351\273\230\350\256\244\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("UserInfoPage", "\346\216\245\345\217\227\345\271\266\346\217\220\347\244\272\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("UserInfoPage", "\350\207\252\345\212\250\345\274\271\345\207\272\346\266\210\346\201\257", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("UserInfoPage", "\346\266\210\346\201\257\346\235\245\346\227\266\357\274\214\345\217\252\346\230\276\347\244\272\346\266\210\346\201\257\346\225\260\347\233\256", 0, QApplication::UnicodeUTF8));
        radioButton_4->setText(QApplication::translate("UserInfoPage", "\346\266\210\346\201\257\346\241\206\346\217\220\347\244\272\344\277\241\346\201\257\345\206\205\345\256\271", 0, QApplication::UnicodeUTF8));
        radioButton_5->setText(QApplication::translate("UserInfoPage", "\351\230\273\346\255\242\344\270\200\345\210\207\350\257\245\347\276\244\347\232\204\346\266\210\346\201\257", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("UserInfoPage", "\347\276\244\346\266\210\346\201\257\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("UserInfoPage", "\346\263\250\357\274\232\345\205\267\344\275\223\347\276\244\347\232\204\347\276\244\346\266\210\346\201\257\350\256\276\347\275\256\345\234\250\347\276\244\351\235\242\346\235\277\351\207\214\351\200\211\344\270\255\347\276\244\347\202\271\345\217\263\351\224\256\350\277\233\350\241\214", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("UserInfoPage", "\344\270\252\344\272\272\350\265\204\346\226\231\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("UserInfoPage", "\347\263\273\347\273\237\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("UserInfoPage", "\345\217\221\351\200\201\346\216\245\346\224\266\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("UserInfoPage", "\347\276\244\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        listWidget->setSortingEnabled(__sortingEnabled);

        SaveInfo->setText(QApplication::translate("UserInfoPage", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        Cancel->setText(QApplication::translate("UserInfoPage", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UserInfoPage: public Ui_UserInfoPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINFOPAGE_H
