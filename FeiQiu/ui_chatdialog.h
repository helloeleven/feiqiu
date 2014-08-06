/********************************************************************************
** Form generated from reading UI file 'chatdialog.ui'
**
** Created: Fri Aug 1 13:28:52 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATDIALOG_H
#define UI_CHATDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QStackedWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_5;
    QPushButton *sendfile;
    QPushButton *pushButton_7;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_12;
    QPushButton *SendMessage;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_8;
    QPushButton *CutPic;
    QPushButton *ShakeWindow;
    QPushButton *openChatButton;
    QTextEdit *MessageSend;
    QToolButton *minButton;
    QToolButton *closeButton;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QProgressBar *ClientProgressBar;
    QPushButton *CliOpenfile;
    QPushButton *CliSendfile;
    QWidget *page_3;
    QLabel *ServerMsg;
    QPushButton *SerRefuse;
    QProgressBar *ServerProgressBar;
    QPushButton *SerConfirm;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *hostname;
    QLabel *hostip;
    QTableWidget *tableWidget;
    QTextEdit *ShowMessage;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *userHead;
    QLabel *nameLable;

    void setupUi(QDialog *ChatDialog)
    {
        if (ChatDialog->objectName().isEmpty())
            ChatDialog->setObjectName(QString::fromUtf8("ChatDialog"));
        ChatDialog->resize(557, 502);
        layoutWidget = new QWidget(ChatDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 60, 239, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout_2->addWidget(pushButton_5);

        sendfile = new QPushButton(layoutWidget);
        sendfile->setObjectName(QString::fromUtf8("sendfile"));

        horizontalLayout_2->addWidget(sendfile);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        horizontalLayout_2->addWidget(pushButton_7);

        layoutWidget_2 = new QWidget(ChatDialog);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(200, 470, 158, 25));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_12 = new QPushButton(layoutWidget_2);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        horizontalLayout_5->addWidget(pushButton_12);

        SendMessage = new QPushButton(layoutWidget_2);
        SendMessage->setObjectName(QString::fromUtf8("SendMessage"));

        horizontalLayout_5->addWidget(SendMessage);

        layoutWidget_4 = new QWidget(ChatDialog);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 360, 320, 31));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_8 = new QPushButton(layoutWidget_4);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        horizontalLayout_4->addWidget(pushButton_8);

        CutPic = new QPushButton(layoutWidget_4);
        CutPic->setObjectName(QString::fromUtf8("CutPic"));

        horizontalLayout_4->addWidget(CutPic);

        ShakeWindow = new QPushButton(layoutWidget_4);
        ShakeWindow->setObjectName(QString::fromUtf8("ShakeWindow"));
        ShakeWindow->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_4->addWidget(ShakeWindow);

        openChatButton = new QPushButton(layoutWidget_4);
        openChatButton->setObjectName(QString::fromUtf8("openChatButton"));

        horizontalLayout_4->addWidget(openChatButton);

        MessageSend = new QTextEdit(ChatDialog);
        MessageSend->setObjectName(QString::fromUtf8("MessageSend"));
        MessageSend->setGeometry(QRect(10, 390, 351, 81));
        minButton = new QToolButton(ChatDialog);
        minButton->setObjectName(QString::fromUtf8("minButton"));
        minButton->setGeometry(QRect(520, 0, 16, 16));
        minButton->setMinimumSize(QSize(15, 15));
        minButton->setMaximumSize(QSize(16, 16));
        minButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/minsize.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        minButton->setIcon(icon);
        closeButton = new QToolButton(ChatDialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(540, 0, 16, 16));
        closeButton->setMinimumSize(QSize(16, 16));
        closeButton->setMaximumSize(QSize(16, 16));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/close.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon1);
        stackedWidget = new QStackedWidget(ChatDialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(370, 230, 181, 131));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        ClientProgressBar = new QProgressBar(page_2);
        ClientProgressBar->setObjectName(QString::fromUtf8("ClientProgressBar"));
        ClientProgressBar->setGeometry(QRect(40, 30, 118, 23));
        ClientProgressBar->setValue(0);
        CliOpenfile = new QPushButton(page_2);
        CliOpenfile->setObjectName(QString::fromUtf8("CliOpenfile"));
        CliOpenfile->setGeometry(QRect(10, 100, 75, 23));
        CliSendfile = new QPushButton(page_2);
        CliSendfile->setObjectName(QString::fromUtf8("CliSendfile"));
        CliSendfile->setGeometry(QRect(100, 100, 75, 23));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        ServerMsg = new QLabel(page_3);
        ServerMsg->setObjectName(QString::fromUtf8("ServerMsg"));
        ServerMsg->setGeometry(QRect(40, 60, 71, 20));
        SerRefuse = new QPushButton(page_3);
        SerRefuse->setObjectName(QString::fromUtf8("SerRefuse"));
        SerRefuse->setGeometry(QRect(100, 90, 75, 23));
        ServerProgressBar = new QProgressBar(page_3);
        ServerProgressBar->setObjectName(QString::fromUtf8("ServerProgressBar"));
        ServerProgressBar->setGeometry(QRect(30, 30, 118, 23));
        ServerProgressBar->setValue(0);
        SerConfirm = new QPushButton(page_3);
        SerConfirm->setObjectName(QString::fromUtf8("SerConfirm"));
        SerConfirm->setGeometry(QRect(20, 90, 75, 23));
        stackedWidget->addWidget(page_3);
        layoutWidget_5 = new QWidget(ChatDialog);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(370, 80, 51, 51));
        verticalLayout = new QVBoxLayout(layoutWidget_5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        layoutWidget_6 = new QWidget(ChatDialog);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(420, 80, 131, 51));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        hostname = new QLabel(layoutWidget_6);
        hostname->setObjectName(QString::fromUtf8("hostname"));

        verticalLayout_2->addWidget(hostname);

        hostip = new QLabel(layoutWidget_6);
        hostip->setObjectName(QString::fromUtf8("hostip"));

        verticalLayout_2->addWidget(hostip);

        tableWidget = new QTableWidget(ChatDialog);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableWidget->rowCount() < 10)
            tableWidget->setRowCount(10);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(370, 370, 181, 121));
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setAutoScroll(false);
        tableWidget->setAutoScrollMargin(10);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSortingEnabled(false);
        tableWidget->setRowCount(10);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(44);
        tableWidget->horizontalHeader()->setHighlightSections(false);
        tableWidget->horizontalHeader()->setMinimumSectionSize(16);
        tableWidget->horizontalHeader()->setStretchLastSection(false);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setDefaultSectionSize(24);
        tableWidget->verticalHeader()->setHighlightSections(false);
        tableWidget->verticalHeader()->setMinimumSectionSize(16);
        tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->verticalHeader()->setStretchLastSection(false);
        ShowMessage = new QTextEdit(ChatDialog);
        ShowMessage->setObjectName(QString::fromUtf8("ShowMessage"));
        ShowMessage->setGeometry(QRect(11, 81, 349, 281));
        QFont font;
        font.setPointSize(12);
        ShowMessage->setFont(font);
        ShowMessage->setReadOnly(true);
        layoutWidget1 = new QWidget(ChatDialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 11, 481, 42));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        userHead = new QLabel(layoutWidget1);
        userHead->setObjectName(QString::fromUtf8("userHead"));
        userHead->setMinimumSize(QSize(40, 40));
        userHead->setMaximumSize(QSize(32, 32));
        userHead->setStyleSheet(QString::fromUtf8("background-image: url(:/3.bmp);"));
        userHead->setPixmap(QPixmap(QString::fromUtf8(":/img/head.bmp")));

        horizontalLayout->addWidget(userHead);

        nameLable = new QLabel(layoutWidget1);
        nameLable->setObjectName(QString::fromUtf8("nameLable"));

        horizontalLayout->addWidget(nameLable);


        retranslateUi(ChatDialog);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ChatDialog);
    } // setupUi

    void retranslateUi(QDialog *ChatDialog)
    {
        ChatDialog->setWindowTitle(QApplication::translate("ChatDialog", "\350\201\212\345\244\251", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("ChatDialog", "\350\277\234\347\250\213\345\215\217\345\212\251", 0, QApplication::UnicodeUTF8));
        sendfile->setText(QApplication::translate("ChatDialog", "\345\217\221\351\200\201\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("ChatDialog", "\345\205\261\344\272\253\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        pushButton_12->setText(QApplication::translate("ChatDialog", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        SendMessage->setText(QApplication::translate("ChatDialog", "\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("ChatDialog", "\346\226\207\345\255\227", 0, QApplication::UnicodeUTF8));
        CutPic->setText(QApplication::translate("ChatDialog", "\346\210\252\345\233\276", 0, QApplication::UnicodeUTF8));
        ShakeWindow->setText(QApplication::translate("ChatDialog", "\346\212\226\345\212\250", 0, QApplication::UnicodeUTF8));
        openChatButton->setText(QApplication::translate("ChatDialog", "\350\201\212\345\244\251\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        MessageSend->setHtml(QApplication::translate("ChatDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        minButton->setText(QString());
        closeButton->setText(QString());
        CliOpenfile->setText(QApplication::translate("ChatDialog", "\346\211\223\345\274\200\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        CliSendfile->setText(QApplication::translate("ChatDialog", "\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
        ServerMsg->setText(QString());
        SerRefuse->setText(QApplication::translate("ChatDialog", "\346\213\222\347\273\235\346\216\245\346\224\266", 0, QApplication::UnicodeUTF8));
        SerConfirm->setText(QApplication::translate("ChatDialog", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ChatDialog", "\344\270\273\346\234\272\345\220\215:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ChatDialog", "\344\270\273\346\234\272IP:", 0, QApplication::UnicodeUTF8));
        hostname->setText(QApplication::translate("ChatDialog", "TextLabel", 0, QApplication::UnicodeUTF8));
        hostip->setText(QApplication::translate("ChatDialog", "TextLabel", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ChatDialog", "\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ChatDialog", "\347\261\273\345\236\213", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ChatDialog", "\345\244\247\345\260\217", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ChatDialog", "\350\267\257\345\276\204", 0, QApplication::UnicodeUTF8));
        ShowMessage->setHtml(QApplication::translate("ChatDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        userHead->setText(QString());
        nameLable->setText(QApplication::translate("ChatDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">sc</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ChatDialog: public Ui_ChatDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATDIALOG_H
