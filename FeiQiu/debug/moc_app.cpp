/****************************************************************************
** Meta object code from reading C++ file 'app.h'
**
** Created: Fri Aug 1 13:30:11 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../app.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'app.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_APP[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,    5,    4,    4, 0x05,

 // slots: signature, parameters, type, tag, flags
      25,    4,    4,    4, 0x0a,
      42,    4,    4,    4, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_APP[] = {
    "APP\0\0ap\0appdel(QObject*)\0buttonPresssed()\0"
    "emitdelapp()\0"
};

void APP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        APP *_t = static_cast<APP *>(_o);
        switch (_id) {
        case 0: _t->appdel((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 1: _t->buttonPresssed(); break;
        case 2: _t->emitdelapp(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData APP::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject APP::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_APP,
      qt_meta_data_APP, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &APP::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *APP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *APP::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_APP))
        return static_cast<void*>(const_cast< APP*>(this));
    return QObject::qt_metacast(_clname);
}

int APP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void APP::appdel(QObject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
