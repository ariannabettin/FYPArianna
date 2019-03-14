/****************************************************************************
** Meta object code from reading C++ file 'visualisation.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "visualisation.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'visualisation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Visualisation[] = {

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
      15,   14,   14,   14, 0x08,
      39,   14,   14,   14, 0x08,
      65,   14,   14,   14, 0x08,
      91,   14,   14,   14, 0x08,
     114,   14,   14,   14, 0x08,
     142,   14,   14,   14, 0x08,
     166,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Visualisation[] = {
    "Visualisation\0\0on_homeButton_clicked()\0"
    "on_selectButton_clicked()\0"
    "on_modifyButton_clicked()\0"
    "on_valButton_clicked()\0"
    "on_questionButton_clicked()\0"
    "on_accessFile_clicked()\0"
    "on_reloadButton_clicked()\0"
};

void Visualisation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Visualisation *_t = static_cast<Visualisation *>(_o);
        switch (_id) {
        case 0: _t->on_homeButton_clicked(); break;
        case 1: _t->on_selectButton_clicked(); break;
        case 2: _t->on_modifyButton_clicked(); break;
        case 3: _t->on_valButton_clicked(); break;
        case 4: _t->on_questionButton_clicked(); break;
        case 5: _t->on_accessFile_clicked(); break;
        case 6: _t->on_reloadButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Visualisation::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Visualisation::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Visualisation,
      qt_meta_data_Visualisation, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Visualisation::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Visualisation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Visualisation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Visualisation))
        return static_cast<void*>(const_cast< Visualisation*>(this));
    return QDialog::qt_metacast(_clname);
}

int Visualisation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
