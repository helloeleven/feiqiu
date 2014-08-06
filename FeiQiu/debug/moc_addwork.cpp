/****************************************************************************
** Meta object code from reading C++ file 'addwork.h'
**
** Created: Fri Aug 1 13:30:00 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../addwork.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addwork.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_addwork[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      23,    8,    8,    8, 0x05,
      39,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      53,    8,    8,    8, 0x08,
      79,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_addwork[] = {
    "addwork\0\0RecordSaved()\0cancel_signal()\0"
    "save_signal()\0on_pushButton_2_clicked()\0"
    "on_pushButton_clicked()\0"
};

void addwork::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        addwork *_t = static_cast<addwork *>(_o);
        switch (_id) {
        case 0: _t->RecordSaved(); break;
        case 1: _t->cancel_signal(); break;
        case 2: _t->save_signal(); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData addwork::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject addwork::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_addwork,
      qt_meta_data_addwork, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &addwork::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *addwork::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *addwork::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_addwork))
        return static_cast<void*>(const_cast< addwork*>(this));
    return QDialog::qt_metacast(_clname);
}

int addwork::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void addwork::RecordSaved()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void addwork::cancel_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void addwork::save_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
