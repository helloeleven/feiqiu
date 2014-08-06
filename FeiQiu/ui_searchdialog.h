/********************************************************************************
** Form generated from reading UI file 'searchdialog.ui'
**
** Created: Fri Aug 1 13:28:52 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHDIALOG_H
#define UI_SEARCHDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SearchDialog
{
public:
    QLabel *label_2;
    QPushButton *close;
    QLabel *label;
    QListView *listView;

    void setupUi(QDialog *SearchDialog)
    {
        if (SearchDialog->objectName().isEmpty())
            SearchDialog->setObjectName(QString::fromUtf8("SearchDialog"));
        SearchDialog->resize(342, 264);
        label_2 = new QLabel(SearchDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 21, 16));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/img/sousuo.PNG);"));
        close = new QPushButton(SearchDialog);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(314, 0, 31, 23));
        close->setStyleSheet(QString::fromUtf8("background-image: url(:/img/close_hover.ico);"));
        close->setAutoDefault(false);
        close->setFlat(true);
        label = new QLabel(SearchDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 0, 91, 16));
        listView = new QListView(SearchDialog);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(0, 20, 341, 231));

        retranslateUi(SearchDialog);

        QMetaObject::connectSlotsByName(SearchDialog);
    } // setupUi

    void retranslateUi(QDialog *SearchDialog)
    {
        SearchDialog->setWindowTitle(QApplication::translate("SearchDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        close->setText(QString());
        label->setText(QApplication::translate("SearchDialog", "search result", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SearchDialog: public Ui_SearchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHDIALOG_H
