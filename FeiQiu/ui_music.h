/********************************************************************************
** Form generated from reading UI file 'music.ui'
**
** Created: Fri Aug 1 14:04:06 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSIC_H
#define UI_MUSIC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_music
{
public:
    QPushButton *next;
    QPushButton *stop;
    QPushButton *begin;
    QPushButton *list;
    QPushButton *back;
    QPushButton *open;
    QLabel *label_lrc;
    QListWidget *listWidget;
    QPushButton *lrc;
    QLabel *label_time;
    QLabel *label;
    QLabel *label_2;
    QLabel *zkcm;

    void setupUi(QDialog *music)
    {
        if (music->objectName().isEmpty())
            music->setObjectName(QString::fromUtf8("music"));
        music->resize(732, 622);
        next = new QPushButton(music);
        next->setObjectName(QString::fromUtf8("next"));
        next->setGeometry(QRect(130, 140, 93, 28));
        stop = new QPushButton(music);
        stop->setObjectName(QString::fromUtf8("stop"));
        stop->setGeometry(QRect(260, 140, 93, 28));
        begin = new QPushButton(music);
        begin->setObjectName(QString::fromUtf8("begin"));
        begin->setGeometry(QRect(390, 140, 93, 28));
        list = new QPushButton(music);
        list->setObjectName(QString::fromUtf8("list"));
        list->setGeometry(QRect(510, 140, 93, 28));
        back = new QPushButton(music);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(10, 140, 93, 28));
        open = new QPushButton(music);
        open->setObjectName(QString::fromUtf8("open"));
        open->setGeometry(QRect(460, 10, 71, 61));
        label_lrc = new QLabel(music);
        label_lrc->setObjectName(QString::fromUtf8("label_lrc"));
        label_lrc->setGeometry(QRect(30, 520, 291, 20));
        listWidget = new QListWidget(music);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 180, 256, 311));
        lrc = new QPushButton(music);
        lrc->setObjectName(QString::fromUtf8("lrc"));
        lrc->setGeometry(QRect(620, 140, 93, 28));
        label_time = new QLabel(music);
        label_time->setObjectName(QString::fromUtf8("label_time"));
        label_time->setGeometry(QRect(570, 30, 141, 16));
        label = new QLabel(music);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 72, 15));
        label_2 = new QLabel(music);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 70, 72, 15));
        zkcm = new QLabel(music);
        zkcm->setObjectName(QString::fromUtf8("zkcm"));
        zkcm->setGeometry(QRect(350, 500, 251, 61));

        retranslateUi(music);

        QMetaObject::connectSlotsByName(music);
    } // setupUi

    void retranslateUi(QDialog *music)
    {
        music->setWindowTitle(QApplication::translate("music", "Dialog", 0, QApplication::UnicodeUTF8));
        next->setText(QApplication::translate("music", "\344\270\213\344\270\200\351\246\226", 0, QApplication::UnicodeUTF8));
        stop->setText(QApplication::translate("music", "\346\232\202\345\201\234", 0, QApplication::UnicodeUTF8));
        begin->setText(QApplication::translate("music", "\346\222\255\346\224\276", 0, QApplication::UnicodeUTF8));
        list->setText(QApplication::translate("music", "\345\210\227\350\241\250", 0, QApplication::UnicodeUTF8));
        back->setText(QApplication::translate("music", "\344\270\212\344\270\200\351\246\226", 0, QApplication::UnicodeUTF8));
        open->setText(QApplication::translate("music", "\346\211\223\345\274\200", 0, QApplication::UnicodeUTF8));
        label_lrc->setText(QApplication::translate("music", "TextLabel", 0, QApplication::UnicodeUTF8));
        lrc->setText(QApplication::translate("music", "\346\255\214\350\257\215", 0, QApplication::UnicodeUTF8));
        label_time->setText(QApplication::translate("music", "label_time", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("music", "\346\222\255\346\224\276\350\277\233\345\272\246", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("music", "\351\237\263\351\207\217", 0, QApplication::UnicodeUTF8));
        zkcm->setText(QApplication::translate("music", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class music: public Ui_music {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSIC_H
