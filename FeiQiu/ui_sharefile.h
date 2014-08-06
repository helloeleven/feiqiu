/********************************************************************************
** Form generated from reading UI file 'sharefile.ui'
**
** Created: Fri Aug 1 13:28:52 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHAREFILE_H
#define UI_SHAREFILE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_sharefile
{
public:
    QTableWidget *tableWidget;
    QPushButton *mysharefile;
    QPushButton *download;
    QPushButton *update;
    QPushButton *quit;

    void setupUi(QDialog *sharefile)
    {
        if (sharefile->objectName().isEmpty())
            sharefile->setObjectName(QString::fromUtf8("sharefile"));
        sharefile->resize(657, 451);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/myicon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        sharefile->setWindowIcon(icon);
        tableWidget = new QTableWidget(sharefile);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        if (tableWidget->rowCount() < 12)
            tableWidget->setRowCount(12);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 631, 381));
        tableWidget->setRowCount(12);
        tableWidget->setColumnCount(6);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget->horizontalHeader()->setHighlightSections(false);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setStretchLastSection(true);
        mysharefile = new QPushButton(sharefile);
        mysharefile->setObjectName(QString::fromUtf8("mysharefile"));
        mysharefile->setGeometry(QRect(30, 400, 131, 28));
        download = new QPushButton(sharefile);
        download->setObjectName(QString::fromUtf8("download"));
        download->setGeometry(QRect(220, 400, 93, 28));
        update = new QPushButton(sharefile);
        update->setObjectName(QString::fromUtf8("update"));
        update->setGeometry(QRect(360, 400, 93, 28));
        quit = new QPushButton(sharefile);
        quit->setObjectName(QString::fromUtf8("quit"));
        quit->setGeometry(QRect(520, 400, 93, 28));

        retranslateUi(sharefile);

        QMetaObject::connectSlotsByName(sharefile);
    } // setupUi

    void retranslateUi(QDialog *sharefile)
    {
        sharefile->setWindowTitle(QApplication::translate("sharefile", "\346\226\207\344\273\266\345\205\261\344\272\253", 0, QApplication::UnicodeUTF8));
        mysharefile->setText(QApplication::translate("sharefile", "\350\256\276\347\275\256\346\210\221\347\232\204\345\205\261\344\272\253\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        download->setText(QApplication::translate("sharefile", "\344\270\213\350\275\275", 0, QApplication::UnicodeUTF8));
        update->setText(QApplication::translate("sharefile", "\345\210\267\346\226\260", 0, QApplication::UnicodeUTF8));
        quit->setText(QApplication::translate("sharefile", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class sharefile: public Ui_sharefile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHAREFILE_H
