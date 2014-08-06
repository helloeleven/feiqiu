/********************************************************************************
** Form generated from reading UI file 'applicationcenter.ui'
**
** Created: Fri Aug 1 13:28:52 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLICATIONCENTER_H
#define UI_APPLICATIONCENTER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ApplicationCenter
{
public:
    QWidget *centralwidget;
    QPushButton *quitButton;
    QLabel *weblabel;
    QLineEdit *weblineEdit;
    QGroupBox *appgroupBox;
    QPushButton *addButton;
    QPushButton *baiduButton;
    QToolButton *wzqButton;
    QPushButton *delAllButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ApplicationCenter)
    {
        if (ApplicationCenter->objectName().isEmpty())
            ApplicationCenter->setObjectName(QString::fromUtf8("ApplicationCenter"));
        ApplicationCenter->resize(548, 413);
        ApplicationCenter->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(ApplicationCenter);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        quitButton = new QPushButton(centralwidget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setGeometry(QRect(450, 340, 91, 23));
        quitButton->setStyleSheet(QString::fromUtf8(""));
        weblabel = new QLabel(centralwidget);
        weblabel->setObjectName(QString::fromUtf8("weblabel"));
        weblabel->setGeometry(QRect(10, 10, 71, 16));
        weblineEdit = new QLineEdit(centralwidget);
        weblineEdit->setObjectName(QString::fromUtf8("weblineEdit"));
        weblineEdit->setGeometry(QRect(90, 10, 113, 20));
        appgroupBox = new QGroupBox(centralwidget);
        appgroupBox->setObjectName(QString::fromUtf8("appgroupBox"));
        appgroupBox->setGeometry(QRect(20, 130, 521, 201));
        addButton = new QPushButton(appgroupBox);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(450, 130, 61, 61));
        addButton->setStyleSheet(QString::fromUtf8("background-image: url(:/img/add.jpg);"));
        baiduButton = new QPushButton(centralwidget);
        baiduButton->setObjectName(QString::fromUtf8("baiduButton"));
        baiduButton->setGeometry(QRect(20, 50, 61, 61));
        baiduButton->setStyleSheet(QString::fromUtf8("background-image: url(:/img/baidu.jpg);"));
        wzqButton = new QToolButton(centralwidget);
        wzqButton->setObjectName(QString::fromUtf8("wzqButton"));
        wzqButton->setGeometry(QRect(100, 50, 71, 61));
        wzqButton->setStyleSheet(QString::fromUtf8("background-image: url(:/img/wzq2.jpg);"));
        delAllButton = new QPushButton(centralwidget);
        delAllButton->setObjectName(QString::fromUtf8("delAllButton"));
        delAllButton->setGeometry(QRect(350, 340, 75, 23));
        ApplicationCenter->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ApplicationCenter);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 548, 23));
        ApplicationCenter->setMenuBar(menubar);
        statusbar = new QStatusBar(ApplicationCenter);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ApplicationCenter->setStatusBar(statusbar);

        retranslateUi(ApplicationCenter);

        QMetaObject::connectSlotsByName(ApplicationCenter);
    } // setupUi

    void retranslateUi(QMainWindow *ApplicationCenter)
    {
        ApplicationCenter->setWindowTitle(QApplication::translate("ApplicationCenter", "MainWindow", 0, QApplication::UnicodeUTF8));
        quitButton->setText(QApplication::translate("ApplicationCenter", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        weblabel->setText(QApplication::translate("ApplicationCenter", "\350\257\267\350\276\223\345\205\245\347\275\221\345\235\200\357\274\232", 0, QApplication::UnicodeUTF8));
        appgroupBox->setTitle(QApplication::translate("ApplicationCenter", "\346\210\221\347\232\204\345\272\224\347\224\250", 0, QApplication::UnicodeUTF8));
        addButton->setText(QString());
        baiduButton->setText(QString());
        wzqButton->setText(QString());
        delAllButton->setText(QApplication::translate("ApplicationCenter", "\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ApplicationCenter: public Ui_ApplicationCenter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLICATIONCENTER_H
