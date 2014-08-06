/****************************************************************************
** Meta object code from reading C++ file 'work.h'
**
** Created: Fri Aug 1 13:30:01 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../work.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'work.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_work[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x08,
      33,   28,    5,    5, 0x08,
      68,    5,    5,    5, 0x08,
      82,   28,    5,    5, 0x08,
     115,    5,    5,    5, 0x08,
     142,    5,    5,    5, 0x08,
     165,    5,    5,    5, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_work[] = {
    "work\0\0on_add_work_clicked()\0date\0"
    "on_calendarWidget_activated(QDate)\0"
    "changeColor()\0on_calendarWidget_clicked(QDate)\0"
    "on_show_all_work_clicked()\0"
    "deal_cancel_come_son()\0deal_save_come_son()\0"
};

void work::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        work *_t = static_cast<work *>(_o);
        switch (_id) {
        case 0: _t->on_add_work_clicked(); break;
        case 1: _t->on_calendarWidget_activated((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 2: _t->changeColor(); break;
        case 3: _t->on_calendarWidget_clicked((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 4: _t->on_show_all_work_clicked(); break;
        case 5: _t->deal_cancel_come_son(); break;
        case 6: _t->deal_save_come_son(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData work::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject work::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_work,
      qt_meta_data_work, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &work::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *work::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *work::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_work))
        return static_cast<void*>(const_cast< work*>(this));
    return QDialog::qt_metacast(_clname);
}

int work::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
