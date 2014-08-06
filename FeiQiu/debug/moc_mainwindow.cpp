/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Fri Aug 1 13:59:10 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      51,   11,   11,   11, 0x08,
      77,   11,   11,   11, 0x08,
     103,   96,   11,   11, 0x08,
     162,   11,   11,   11, 0x08,
     193,  189,   11,   11, 0x08,
     236,   11,   11,   11, 0x08,
     248,   11,   11,   11, 0x0a,
     268,   11,   11,   11, 0x08,
     286,   11,   11,   11, 0x08,
     306,   11,   11,   11, 0x08,
     324,   11,   11,   11, 0x08,
     346,   11,   11,   11, 0x08,
     365,   11,   11,   11, 0x08,
     383,   11,   11,   11, 0x08,
     404,   11,   11,   11, 0x08,
     425,   11,   11,   11, 0x08,
     448,   11,   11,   11, 0x08,
     473,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0title,content\0"
    "initMsg(QString,QString)\0"
    "on_Window_close_clicked()\0slotUserInfoEdit()\0"
    "reason\0"
    "onSystemTrayIconClicked(QSystemTrayIcon::ActivationReason)\0"
    "on_action_quit_triggered()\0wch\0"
    "Maction(QSystemTrayIcon::ActivationReason)\0"
    "changeIco()\0RecvBroadcastInfo()\0"
    "ReloadBuddyList()\0ready_to_search_2()\0"
    "ready_to_search()\0on_calendar_clicked()\0"
    "on_about_clicked()\0on_find_clicked()\0"
    "on_setting_clicked()\0on_refresh_clicked()\0"
    "on_fileShare_clicked()\0on_Application_clicked()\0"
    "on_music_clicked()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->initMsg((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->on_Window_close_clicked(); break;
        case 2: _t->slotUserInfoEdit(); break;
        case 3: _t->onSystemTrayIconClicked((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 4: _t->on_action_quit_triggered(); break;
        case 5: _t->Maction((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 6: _t->changeIco(); break;
        case 7: _t->RecvBroadcastInfo(); break;
        case 8: _t->ReloadBuddyList(); break;
        case 9: _t->ready_to_search_2(); break;
        case 10: _t->ready_to_search(); break;
        case 11: _t->on_calendar_clicked(); break;
        case 12: _t->on_about_clicked(); break;
        case 13: _t->on_find_clicked(); break;
        case 14: _t->on_setting_clicked(); break;
        case 15: _t->on_refresh_clicked(); break;
        case 16: _t->on_fileShare_clicked(); break;
        case 17: _t->on_Application_clicked(); break;
        case 18: _t->on_music_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::initMsg(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
