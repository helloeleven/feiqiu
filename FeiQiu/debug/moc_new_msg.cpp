/****************************************************************************
** Meta object code from reading C++ file 'new_msg.h'
**
** Created: Fri Aug 1 13:30:06 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../new_msg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'new_msg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_new_msg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,    9,    8,    8, 0x0a,
      47,    8,    8,    8, 0x08,
      56,    8,    8,    8, 0x08,
      65,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_new_msg[] = {
    "new_msg\0\0title,content\0setMsg(QString,QString)\0"
    "myMove()\0myStay()\0myClose()\0"
};

void new_msg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        new_msg *_t = static_cast<new_msg *>(_o);
        switch (_id) {
        case 0: _t->setMsg((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->myMove(); break;
        case 2: _t->myStay(); break;
        case 3: _t->myClose(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData new_msg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject new_msg::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_new_msg,
      qt_meta_data_new_msg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &new_msg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *new_msg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *new_msg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_new_msg))
        return static_cast<void*>(const_cast< new_msg*>(this));
    return QWidget::qt_metacast(_clname);
}

int new_msg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
