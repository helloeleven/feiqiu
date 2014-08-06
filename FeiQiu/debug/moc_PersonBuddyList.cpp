/****************************************************************************
** Meta object code from reading C++ file 'PersonBuddyList.h'
**
** Created: Fri Aug 1 13:29:52 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../PersonBuddyList.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PersonBuddyList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PersonBuddyList[] = {

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
      17,   16,   16,   16, 0x0a,
      36,   16,   16,   16, 0x0a,
      62,   56,   16,   16, 0x0a,
      98,   16,   16,   16, 0x0a,
     113,   16,   16,   16, 0x0a,
     128,   16,   16,   16, 0x0a,
     141,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PersonBuddyList[] = {
    "PersonBuddyList\0\0slotgroupmessage()\0"
    "slotpersonmessage()\0event\0"
    "mouseDoubleClickEvent(QMouseEvent*)\0"
    "slotDelGroup()\0slotDelBuddy()\0"
    "slotRename()\0slotRenameEditFshed()\0"
};

void PersonBuddyList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PersonBuddyList *_t = static_cast<PersonBuddyList *>(_o);
        switch (_id) {
        case 0: _t->slotgroupmessage(); break;
        case 1: _t->slotpersonmessage(); break;
        case 2: _t->mouseDoubleClickEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->slotDelGroup(); break;
        case 4: _t->slotDelBuddy(); break;
        case 5: _t->slotRename(); break;
        case 6: _t->slotRenameEditFshed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PersonBuddyList::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PersonBuddyList::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_PersonBuddyList,
      qt_meta_data_PersonBuddyList, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PersonBuddyList::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PersonBuddyList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PersonBuddyList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PersonBuddyList))
        return static_cast<void*>(const_cast< PersonBuddyList*>(this));
    return QListWidget::qt_metacast(_clname);
}

int PersonBuddyList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
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
