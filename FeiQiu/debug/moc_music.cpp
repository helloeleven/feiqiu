/****************************************************************************
** Meta object code from reading C++ file 'music.h'
**
** Created: Fri Aug 1 13:59:17 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../music.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'music.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_music[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x08,
      25,    6,    6,    6, 0x08,
      43,    6,    6,    6, 0x08,
      61,    6,    6,    6, 0x08,
      79,    6,    6,    6, 0x08,
      98,    6,    6,    6, 0x08,
     122,  116,    6,    6, 0x08,
     164,    6,    6,    6, 0x08,
     181,    6,    6,    6, 0x08,
     202,    6,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_music[] = {
    "music\0\0on_back_clicked()\0on_next_clicked()\0"
    "on_open_clicked()\0on_stop_clicked()\0"
    "on_begin_clicked()\0on_list_clicked()\0"
    "index\0listWidget_cellDoubleClicked(QModelIndex)\0"
    "showTime(qint64)\0musicAboutToFinish()\0"
    "currentMusicSourceChanged(Phonon::MediaSource)\0"
};

void music::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        music *_t = static_cast<music *>(_o);
        switch (_id) {
        case 0: _t->on_back_clicked(); break;
        case 1: _t->on_next_clicked(); break;
        case 2: _t->on_open_clicked(); break;
        case 3: _t->on_stop_clicked(); break;
        case 4: _t->on_begin_clicked(); break;
        case 6: _t->listWidget_cellDoubleClicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 7: _t->showTime((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 8: _t->musicAboutToFinish(); break;
        case 9: _t->currentMusicSourceChanged((*reinterpret_cast< Phonon::MediaSource(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData music::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject music::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_music,
      qt_meta_data_music, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &music::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *music::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *music::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_music))
        return static_cast<void*>(const_cast< music*>(this));
    return QDialog::qt_metacast(_clname);
}

int music::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
