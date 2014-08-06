/****************************************************************************
** Meta object code from reading C++ file 'applicationcenter.h'
**
** Created: Fri Aug 1 13:30:13 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../applicationcenter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'applicationcenter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ApplicationCenter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x08,
      43,   18,   18,   18, 0x08,
      49,   18,   18,   18, 0x08,
      57,   18,   18,   18, 0x08,
      80,   18,   18,   18, 0x08,
     117,  111,   18,   18, 0x08,
     140,   18,   18,   18, 0x08,
     156,  152,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ApplicationCenter[] = {
    "ApplicationCenter\0\0on_quitButton_clicked()\0"
    "wzq()\0baidu()\0on_addButton_clicked()\0"
    "on_weblineEdit_returnPressed()\0event\0"
    "mouPress(QMouseEvent*)\0delAllApp()\0"
    "app\0delApp(QObject*)\0"
};

void ApplicationCenter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ApplicationCenter *_t = static_cast<ApplicationCenter *>(_o);
        switch (_id) {
        case 0: _t->on_quitButton_clicked(); break;
        case 1: _t->wzq(); break;
        case 2: _t->baidu(); break;
        case 3: _t->on_addButton_clicked(); break;
        case 4: _t->on_weblineEdit_returnPressed(); break;
        case 5: _t->mouPress((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 6: _t->delAllApp(); break;
        case 7: _t->delApp((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ApplicationCenter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ApplicationCenter::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ApplicationCenter,
      qt_meta_data_ApplicationCenter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ApplicationCenter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ApplicationCenter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ApplicationCenter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ApplicationCenter))
        return static_cast<void*>(const_cast< ApplicationCenter*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ApplicationCenter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
