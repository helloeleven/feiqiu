/********************************************************************************
** Form generated from reading UI file 'work.ui'
**
** Created: Fri Aug 1 13:28:52 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORK_H
#define UI_WORK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCalendarWidget>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_work
{
public:
    QCalendarWidget *calendarWidget;
    QPushButton *add_work;
    QPushButton *show_all_work;
    QLabel *day_work_show;
    QTextBrowser *textBrowser;
    QLabel *today_date;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *work)
    {
        if (work->objectName().isEmpty())
            work->setObjectName(QString::fromUtf8("work"));
        work->resize(548, 393);
        work->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    border:2px solid gray;\n"
"    border-radius: 10px;\n"
"}\n"
"QPushButton:hover{\n"
"    color:white;\n"
"    background: rgb(52, 203, 147);\n"
"}  \n"
"\n"
"QPushButton:checked\n"
"{\n"
"    color:white;\n"
"    background:black;\n"
"}\n"
""));
        calendarWidget = new QCalendarWidget(work);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(20, 110, 281, 221));
        calendarWidget->setStyleSheet(QString::fromUtf8("QcalendarWidget::item:selected {\n"
"     border: 1px solid #6a6ea9;\n"
"}\n"
"QcalendarWidget::item:selected:!active {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #ABAFE5, stop: 1 #8588B2);\n"
"}\n"
"QcalendarWidget::item:selected:active {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #6a6ea9, stop: 1 #888dd9);\n"
"}"));
        add_work = new QPushButton(work);
        add_work->setObjectName(QString::fromUtf8("add_work"));
        add_work->setGeometry(QRect(40, 340, 75, 23));
        show_all_work = new QPushButton(work);
        show_all_work->setObjectName(QString::fromUtf8("show_all_work"));
        show_all_work->setGeometry(QRect(180, 340, 75, 23));
        day_work_show = new QLabel(work);
        day_work_show->setObjectName(QString::fromUtf8("day_work_show"));
        day_work_show->setGeometry(QRect(90, 81, 181, 20));
        textBrowser = new QTextBrowser(work);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(320, 110, 181, 251));
        today_date = new QLabel(work);
        today_date->setObjectName(QString::fromUtf8("today_date"));
        today_date->setGeometry(QRect(80, 30, 341, 21));
        label_3 = new QLabel(work);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 30, 61, 21));
        label = new QLabel(work);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(320, 90, 101, 16));
        label_2 = new QLabel(work);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 80, 61, 20));

        retranslateUi(work);

        QMetaObject::connectSlotsByName(work);
    } // setupUi

    void retranslateUi(QDialog *work)
    {
        work->setWindowTitle(QApplication::translate("work", "Dialog", 0, QApplication::UnicodeUTF8));
        add_work->setText(QApplication::translate("work", "\346\267\273\345\212\240\345\244\207\345\277\230\345\275\225", 0, QApplication::UnicodeUTF8));
        show_all_work->setText(QApplication::translate("work", "\346\237\245\347\234\213\345\244\207\345\277\230\345\275\225", 0, QApplication::UnicodeUTF8));
        day_work_show->setText(QString());
        today_date->setText(QApplication::translate("work", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("work", "\344\273\212\345\244\251\346\230\257\357\274\232", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("work", "\346\237\245\347\234\213\346\211\200\346\234\211\345\244\207\345\277\230\345\275\225\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("work", "\346\227\245\347\250\213\345\256\211\346\216\222\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class work: public Ui_work {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORK_H
