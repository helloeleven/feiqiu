#-------------------------------------------------
#
# Project created by QtCreator 2014-07-09T10:03:02
#
#-------------------------------------------------

QT += core gui
QT += network
QT += phonon

TARGET = FeiQiu
TEMPLATE = app

LIBS += ws2_32.lib



SOURCES += main.cpp\
        mainwindow.cpp \
    UDP_connection.cpp \
    SystemInfo.cpp \
    PersonBuddyInfo.cpp \
    PersonBuddyList.cpp \
    chatdialog.cpp \
    UdpConnection.cpp \
    userinfopage.cpp \
    FileInformation.cpp \
    chatsave.cpp \
    chatlogging.cpp \
    mainSysTrayIcon.cpp \
    mainLoginBroadcast.cpp \
    chatFileTransfer.cpp \
    chatMessageManage.cpp \
    addwork.cpp \
    work.cpp \
    searchdialog.cpp \
    new_msg.cpp \
    title_tips.cpp \
    mysharefile.cpp \
    sharefile.cpp \
    app.cpp \
    applicationcenter.cpp \
    mywidget.cpp \
    music.cpp

HEADERS  += mainwindow.h \
    UDP_connection.h \
    SystemInfo.h \
    PersonBuddyInfo.h \
    PersonBuddyList.h \
    chatdialog.h \
    UdpConnection.h \
    PersonLoginInfo.h \
    userinfopage.h \
    FileInformation.h \
    chatlogging.h \
    PersonInformation.h \
    Information_file_save.h \
    addwork.h \
    work.h \
    searchdialog.h \
    new_msg.h \
    title_tips.h \
    sharefile.h \
    mysharefile.h \
    app.h \
    applicationcenter.h \
    mywidget.h \
    music.h

FORMS    += mainwindow.ui \
    chatdialog.ui \
    userinfopage.ui \
    chatlogging.ui \
    addwork.ui \
    work.ui \
    searchdialog.ui \
    mysharefile.ui \
    sharefile.ui \
    applicationcenter.ui \
    mywidget.ui \
    music.ui

RESOURCES += \
    resource.qrc
