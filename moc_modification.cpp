/****************************************************************************
** Meta object code from reading C++ file 'modification.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modification.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modification.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Modification[] = {

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
      14,   13,   13,   13, 0x08,
      38,   13,   13,   13, 0x08,
      64,   13,   13,   13, 0x08,
      93,   13,   13,   13, 0x08,
     116,   13,   13,   13, 0x08,
     139,   13,   13,   13, 0x08,
     165,   13,   13,   13, 0x08,
     192,   13,   13,   13, 0x08,
     222,   13,   13,   13, 0x08,
     248,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Modification[] = {
    "Modification\0\0on_homeButton_clicked()\0"
    "on_selectButton_clicked()\0"
    "on_visualiseButton_clicked()\0"
    "on_valButton_clicked()\0on_addButton_clicked()\0"
    "on_removeButton_clicked()\0"
    "on_replaceButton_clicked()\0"
    "on_rescheduleButton_clicked()\0"
    "on_changeButton_clicked()\0"
    "on_accessButton_clicked()\0"
};

void Modification::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Modification *_t = static_cast<Modification *>(_o);
        switch (_id) {
        case 0: _t->on_homeButton_clicked(); break;
        case 1: _t->on_selectButton_clicked(); break;
        case 2: _t->on_visualiseButton_clicked(); break;
        case 3: _t->on_valButton_clicked(); break;
        case 4: _t->on_addButton_clicked(); break;
        case 5: _t->on_removeButton_clicked(); break;
        case 6: _t->on_replaceButton_clicked(); break;
        case 7: _t->on_rescheduleButton_clicked(); break;
        case 8: _t->on_changeButton_clicked(); break;
        case 9: _t->on_accessButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Modification::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Modification::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Modification,
      qt_meta_data_Modification, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Modification::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Modification::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Modification::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Modification))
        return static_cast<void*>(const_cast< Modification*>(this));
    return QDialog::qt_metacast(_clname);
}

int Modification::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
