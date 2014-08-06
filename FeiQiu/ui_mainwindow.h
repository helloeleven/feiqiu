/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri Aug 1 13:57:39 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *search;
    QPushButton *Window_MinSize;
    QPushButton *Window_close;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *head;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *Username;
    QComboBox *comboBox;
    QLineEdit *userSign;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_4;
    QPushButton *calendar;
    QPushButton *fileShare;
    QPushButton *Application;
    QPushButton *pushButton_5;
    QPushButton *setting;
    QPushButton *about;
    QPushButton *refresh;
    QPushButton *find;
    QPushButton *music;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(229, 571);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/myicon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAnimated(true);
        MainWindow->setDockNestingEnabled(false);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 101, 16));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 90, 241, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(3, 0, 18, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(20, 20));
        label_3->setMaximumSize(QSize(20, 20));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/img/sousuo.PNG")));

        horizontalLayout_3->addWidget(label_3);

        search = new QLineEdit(layoutWidget);
        search->setObjectName(QString::fromUtf8("search"));
        search->setMinimumSize(QSize(200, 19));
        search->setMaximumSize(QSize(151, 19));
        search->setFrame(false);

        horizontalLayout_3->addWidget(search);

        Window_MinSize = new QPushButton(centralWidget);
        Window_MinSize->setObjectName(QString::fromUtf8("Window_MinSize"));
        Window_MinSize->setGeometry(QRect(190, 0, 16, 16));
        Window_MinSize->setMaximumSize(QSize(16, 16));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/minsize.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        Window_MinSize->setIcon(icon1);
        Window_close = new QPushButton(centralWidget);
        Window_close->setObjectName(QString::fromUtf8("Window_close"));
        Window_close->setGeometry(QRect(210, 0, 16, 16));
        Window_close->setMaximumSize(QSize(16, 16));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/close.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        Window_close->setIcon(icon2);
        Window_close->setCheckable(false);
        layoutWidget_2 = new QWidget(centralWidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 30, 211, 61));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        head = new QPushButton(layoutWidget_2);
        head->setObjectName(QString::fromUtf8("head"));
        head->setMinimumSize(QSize(32, 32));
        head->setMaximumSize(QSize(32, 32));
        head->setCursor(QCursor(Qt::PointingHandCursor));
        head->setLayoutDirection(Qt::LeftToRight);
        head->setAutoFillBackground(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/head.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        head->setIcon(icon3);
        head->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(head);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 6);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(23);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, 0, -1);
        Username = new QLabel(layoutWidget_2);
        Username->setObjectName(QString::fromUtf8("Username"));
        Username->setMinimumSize(QSize(74, 20));
        Username->setMaximumSize(QSize(60, 20));
        Username->setTextFormat(Qt::AutoText);
        Username->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Username);

        comboBox = new QComboBox(layoutWidget_2);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/zaixian.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon4, QString());
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/likai.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon5, QString());
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/busy.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon6, QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(70, 20));
        comboBox->setMaximumSize(QSize(70, 20));
        comboBox->setAutoFillBackground(true);
        comboBox->setStyleSheet(QString::fromUtf8(""));
        comboBox->setFrame(false);

        horizontalLayout->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout);

        userSign = new QLineEdit(layoutWidget_2);
        userSign->setObjectName(QString::fromUtf8("userSign"));
        userSign->setMinimumSize(QSize(100, 20));
        userSign->setMaximumSize(QSize(200, 20));
        userSign->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 203, 147);"));
        userSign->setFrame(false);
        userSign->setReadOnly(false);

        verticalLayout->addWidget(userSign);


        horizontalLayout_2->addLayout(verticalLayout);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 120, 231, 371));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        tabWidget->setFont(font);
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(40, 20));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setMinimumSize(QSize(201, 100));
        tab->setLayoutDirection(Qt::LeftToRight);
        tab->setAutoFillBackground(false);
        tabWidget->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tab_4->setLayoutDirection(Qt::LeftToRight);
        tab_4->setAutoFillBackground(false);
        tabWidget->addTab(tab_4, QString());
        calendar = new QPushButton(centralWidget);
        calendar->setObjectName(QString::fromUtf8("calendar"));
        calendar->setGeometry(QRect(110, 500, 32, 32));
        calendar->setMinimumSize(QSize(32, 32));
        calendar->setMaximumSize(QSize(32, 32));
        calendar->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/2.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        calendar->setIcon(icon7);
        calendar->setIconSize(QSize(32, 32));
        fileShare = new QPushButton(centralWidget);
        fileShare->setObjectName(QString::fromUtf8("fileShare"));
        fileShare->setGeometry(QRect(150, 500, 32, 32));
        fileShare->setMinimumSize(QSize(32, 32));
        fileShare->setMaximumSize(QSize(32, 32));
        fileShare->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/5.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        fileShare->setIcon(icon8);
        fileShare->setIconSize(QSize(32, 32));
        Application = new QPushButton(centralWidget);
        Application->setObjectName(QString::fromUtf8("Application"));
        Application->setGeometry(QRect(190, 500, 32, 32));
        Application->setMinimumSize(QSize(32, 32));
        Application->setMaximumSize(QSize(32, 32));
        Application->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/img/6.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        Application->setIcon(icon9);
        Application->setIconSize(QSize(32, 32));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(140, 540, 26, 26));
        pushButton_5->setMinimumSize(QSize(26, 26));
        pushButton_5->setMaximumSize(QSize(26, 26));
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/img/10.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon10);
        pushButton_5->setIconSize(QSize(26, 26));
        setting = new QPushButton(centralWidget);
        setting->setObjectName(QString::fromUtf8("setting"));
        setting->setGeometry(QRect(110, 540, 26, 26));
        setting->setMinimumSize(QSize(26, 26));
        setting->setMaximumSize(QSize(26, 26));
        setting->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/img/7.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        setting->setIcon(icon11);
        setting->setIconSize(QSize(26, 26));
        about = new QPushButton(centralWidget);
        about->setObjectName(QString::fromUtf8("about"));
        about->setGeometry(QRect(200, 540, 26, 26));
        about->setMinimumSize(QSize(26, 26));
        about->setMaximumSize(QSize(26, 26));
        about->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/img/12.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        about->setIcon(icon12);
        about->setIconSize(QSize(26, 26));
        refresh = new QPushButton(centralWidget);
        refresh->setObjectName(QString::fromUtf8("refresh"));
        refresh->setGeometry(QRect(80, 540, 26, 26));
        refresh->setMinimumSize(QSize(26, 26));
        refresh->setMaximumSize(QSize(26, 26));
        refresh->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/img/8.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        refresh->setIcon(icon13);
        refresh->setIconSize(QSize(26, 26));
        find = new QPushButton(centralWidget);
        find->setObjectName(QString::fromUtf8("find"));
        find->setGeometry(QRect(170, 540, 26, 26));
        find->setMinimumSize(QSize(26, 26));
        find->setMaximumSize(QSize(26, 26));
        find->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/img/13.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        find->setIcon(icon14);
        find->setIconSize(QSize(26, 26));
        music = new QPushButton(centralWidget);
        music->setObjectName(QString::fromUtf8("music"));
        music->setGeometry(QRect(10, 500, 64, 64));
        music->setMinimumSize(QSize(64, 64));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/img/music.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        music->setIcon(icon15);
        music->setIconSize(QSize(64, 64));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        comboBox->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MyFeiQiu", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        MainWindow->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        label->setText(QApplication::translate("MainWindow", "\351\243\236\347\247\213--\347\254\254\345\233\233\347\273\204", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        Window_MinSize->setText(QString());
        Window_close->setText(QString());
        Window_close->setShortcut(QString());
        head->setText(QString());
        Username->setText(QApplication::translate("MainWindow", "SC", 0, QApplication::UnicodeUTF8));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "\345\234\250\347\272\277", 0, QApplication::UnicodeUTF8));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "\347\246\273\345\274\200", 0, QApplication::UnicodeUTF8));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "\345\277\231\347\242\214", 0, QApplication::UnicodeUTF8));

        userSign->setText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\344\270\252\346\200\247\347\255\276\345\220\215", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\345\245\275\345\217\213\345\210\227\350\241\250", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "\347\276\244\347\273\204\345\210\227\350\241\250", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        calendar->setToolTip(QApplication::translate("MainWindow", "\345\244\207\345\277\230\345\275\225", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        calendar->setText(QString());
#ifndef QT_NO_TOOLTIP
        fileShare->setToolTip(QApplication::translate("MainWindow", "\346\226\207\344\273\266\345\205\261\344\272\253", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        fileShare->setText(QString());
#ifndef QT_NO_TOOLTIP
        Application->setToolTip(QApplication::translate("MainWindow", "\345\272\224\347\224\250\344\270\255\345\277\203", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        Application->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_5->setToolTip(QApplication::translate("MainWindow", "\346\237\245\347\234\213\350\201\212\345\244\251\347\272\252\345\275\225", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        setting->setToolTip(QApplication::translate("MainWindow", "\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        setting->setText(QString());
#ifndef QT_NO_TOOLTIP
        about->setToolTip(QApplication::translate("MainWindow", "\345\205\263\344\272\216", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        about->setText(QString());
#ifndef QT_NO_TOOLTIP
        refresh->setToolTip(QApplication::translate("MainWindow", "\345\210\267\346\226\260\345\245\275\345\217\213\345\210\227\350\241\250", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        refresh->setText(QString());
#ifndef QT_NO_TOOLTIP
        find->setToolTip(QApplication::translate("MainWindow", "\346\237\245\346\211\276\345\245\275\345\217\213", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        find->setText(QString());
        music->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
