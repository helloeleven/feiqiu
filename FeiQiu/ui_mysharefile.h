/********************************************************************************
** Form generated from reading UI file 'mysharefile.ui'
**
** Created: Fri Aug 1 13:28:52 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYSHAREFILE_H
#define UI_MYSHAREFILE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_mysharefile
{
public:
    QTableWidget *tableWidget;
    QPushButton *addfile;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *OK;

    void setupUi(QDialog *mysharefile)
    {
        if (mysharefile->objectName().isEmpty())
            mysharefile->setObjectName(QString::fromUtf8("mysharefile"));
        mysharefile->resize(686, 437);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/myicon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        mysharefile->setWindowIcon(icon);
        tableWidget = new QTableWidget(mysharefile);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        if (tableWidget->rowCount() < 13)
            tableWidget->setRowCount(13);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(25, 21, 641, 361));
        tableWidget->setRowCount(13);
        tableWidget->setColumnCount(6);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setStretchLastSection(true);
        addfile = new QPushButton(mysharefile);
        addfile->setObjectName(QString::fromUtf8("addfile"));
        addfile->setGeometry(QRect(70, 390, 93, 28));
        pushButton_3 = new QPushButton(mysharefile);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(350, 390, 93, 28));
        pushButton_4 = new QPushButton(mysharefile);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(210, 390, 93, 28));
        OK = new QPushButton(mysharefile);
        OK->setObjectName(QString::fromUtf8("OK"));
        OK->setGeometry(QRect(490, 390, 93, 28));

        retranslateUi(mysharefile);

        QMetaObject::connectSlotsByName(mysharefile);
    } // setupUi

    void retranslateUi(QDialog *mysharefile)
    {
        mysharefile->setWindowTitle(QApplication::translate("mysharefile", "\346\210\221\347\232\204\346\226\207\344\273\266\345\205\261\344\272\253\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        addfile->setText(QApplication::translate("mysharefile", "\345\242\236\345\212\240\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("mysharefile", "\345\210\240\351\231\244\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("mysharefile", "\345\205\250\351\200\211", 0, QApplication::UnicodeUTF8));
        OK->setText(QApplication::translate("mysharefile", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mysharefile: public Ui_mysharefile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYSHAREFILE_H
