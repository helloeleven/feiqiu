/****************************************************************************
** Meta object code from reading C++ file 'chatdialog.h'
**
** Created: Fri Aug 1 13:29:54 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../chatdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ChatDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      42,   11,   11,   11, 0x08,
      74,   11,   11,   11, 0x08,
     103,   11,   11,   11, 0x08,
     116,   11,   11,   11, 0x08,
     131,   11,   11,   11, 0x08,
     156,   11,   11,   11, 0x08,
     168,   11,   11,   11, 0x08,
     186,   11,   11,   11, 0x08,
     203,   11,   11,   11, 0x08,
     225,   11,   11,   11, 0x0a,
     239,   11,   11,   11, 0x0a,
     248,   11,   11,   11, 0x0a,
     267,   11,   11,   11, 0x0a,
     290,   11,   11,   11, 0x0a,
     304,   11,   11,   11, 0x0a,
     329,  320,   11,   11, 0x0a,
     358,   11,   11,   11, 0x0a,
     369,   11,   11,   11, 0x08,
     380,   11,   11,   11, 0x08,
     408,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ChatDialog[] = {
    "ChatDialog\0\0mousePressEvent(QMouseEvent*)\0"
    "mouseReleaseEvent(QMouseEvent*)\0"
    "mouseMoveEvent(QMouseEvent*)\0minWindows()\0"
    "closeWindows()\0on_SendMessage_clicked()\0"
    "S_TimeOut()\0slotShakeWindow()\0"
    "receiveMessage()\0on_sendfile_clicked()\0"
    "startServer()\0refuse()\0acceptConnection()\0"
    "updateServerProgress()\0startClient()\0"
    "startTransfer()\0numBytes\0"
    "updateClientProgress(qint64)\0openFile()\0"
    "openChat()\0on_openChatButton_clicked()\0"
    "on_CutPic_clicked()\0"
};

void ChatDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ChatDialog *_t = static_cast<ChatDialog *>(_o);
        switch (_id) {
        case 0: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 1: _t->mouseReleaseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->minWindows(); break;
        case 4: _t->closeWindows(); break;
        case 5: _t->on_SendMessage_clicked(); break;
        case 6: _t->S_TimeOut(); break;
        case 7: _t->slotShakeWindow(); break;
        case 8: _t->receiveMessage(); break;
        case 9: _t->on_sendfile_clicked(); break;
        case 10: _t->startServer(); break;
        case 11: _t->refuse(); break;
        case 12: _t->acceptConnection(); break;
        case 13: _t->updateServerProgress(); break;
        case 14: _t->startClient(); break;
        case 15: _t->startTransfer(); break;
        case 16: _t->updateClientProgress((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 17: _t->openFile(); break;
        case 18: _t->openChat(); break;
        case 20: _t->on_CutPic_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ChatDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ChatDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ChatDialog,
      qt_meta_data_ChatDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ChatDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ChatDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ChatDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChatDialog))
        return static_cast<void*>(const_cast< ChatDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ChatDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
