/********************************************************************************
** Form generated from reading UI file 'addwork.ui'
**
** Created: Fri Aug 1 13:28:52 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWORK_H
#define UI_ADDWORK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addwork
{
public:
    QLabel *label_3;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *addwork)
    {
        if (addwork->objectName().isEmpty())
            addwork->setObjectName(QString::fromUtf8("addwork"));
        addwork->resize(301, 371);
        addwork->setAutoFillBackground(false);
        addwork->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    border:2px solid gray;\n"
"    border-radius: 10px;\n"
"}\n"
"QPushButton:hover{\n"
"    color:white;\n"
"    background:rgb(52, 203, 147);\n"
"}  \n"
"\n"
"QPushButton:checked\n"
"{\n"
"    color:white;\n"
"    background:black;\n"
"}\n"
""));
        label_3 = new QLabel(addwork);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 60, 141, 16));
        textEdit = new QTextEdit(addwork);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 80, 291, 221));
        pushButton = new QPushButton(addwork);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 310, 75, 23));
        pushButton_2 = new QPushButton(addwork);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 310, 75, 23));
        pushButton_2->setAutoFillBackground(false);

        retranslateUi(addwork);

        QMetaObject::connectSlotsByName(addwork);
    } // setupUi

    void retranslateUi(QDialog *addwork)
    {
        addwork->setWindowTitle(QApplication::translate("addwork", "Dialog", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("addwork", "\346\267\273\345\212\240\346\210\221\347\232\204\345\244\207\345\277\230\345\275\225\357\274\232", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("addwork", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("addwork", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class addwork: public Ui_addwork {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWORK_H
