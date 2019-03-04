/****************************************************************************
** Meta object code from reading C++ file 'comparison.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "comparison.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'comparison.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Comparison[] = {

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
      12,   11,   11,   11, 0x08,
      36,   11,   11,   11, 0x08,
      60,   11,   11,   11, 0x08,
      86,   11,   11,   11, 0x08,
     115,   11,   11,   11, 0x08,
     141,   11,   11,   11, 0x08,
     161,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Comparison[] = {
    "Comparison\0\0on_saveButton_clicked()\0"
    "on_homeButton_clicked()\0"
    "on_selectButton_clicked()\0"
    "on_visualiseButton_clicked()\0"
    "on_modifyButton_clicked()\0on_Button_clicked()\0"
    "on_valButton_clicked()\0"
};

void Comparison::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Comparison *_t = static_cast<Comparison *>(_o);
        switch (_id) {
        case 0: _t->on_saveButton_clicked(); break;
        case 1: _t->on_homeButton_clicked(); break;
        case 2: _t->on_selectButton_clicked(); break;
        case 3: _t->on_visualiseButton_clicked(); break;
        case 4: _t->on_modifyButton_clicked(); break;
        case 5: _t->on_Button_clicked(); break;
        case 6: _t->on_valButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Comparison::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Comparison::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Comparison,
      qt_meta_data_Comparison, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Comparison::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Comparison::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Comparison::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Comparison))
        return static_cast<void*>(const_cast< Comparison*>(this));
    return QDialog::qt_metacast(_clname);
}

int Comparison::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
