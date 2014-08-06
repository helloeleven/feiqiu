/********************************************************************************
** Form generated from reading UI file 'chatlogging.ui'
**
** Created: Fri Aug 1 13:28:52 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATLOGGING_H
#define UI_CHATLOGGING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_chatLogging
{
public:
    QTextEdit *textEdit;
    QPushButton *quitButton;
    QPushButton *clearButton;

    void setupUi(QDialog *chatLogging)
    {
        if (chatLogging->objectName().isEmpty())
            chatLogging->setObjectName(QString::fromUtf8("chatLogging"));
        chatLogging->resize(400, 300);
        textEdit = new QTextEdit(chatLogging);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 371, 241));
        quitButton = new QPushButton(chatLogging);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setGeometry(QRect(310, 270, 75, 23));
        clearButton = new QPushButton(chatLogging);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setGeometry(QRect(220, 270, 75, 23));

        retranslateUi(chatLogging);

        QMetaObject::connectSlotsByName(chatLogging);
    } // setupUi

    void retranslateUi(QDialog *chatLogging)
    {
        chatLogging->setWindowTitle(QApplication::translate("chatLogging", "Dialog", 0, QApplication::UnicodeUTF8));
        quitButton->setText(QApplication::translate("chatLogging", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        clearButton->setText(QApplication::translate("chatLogging", "\346\270\205\351\231\244\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class chatLogging: public Ui_chatLogging {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATLOGGING_H
