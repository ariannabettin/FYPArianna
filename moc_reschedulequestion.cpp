/****************************************************************************
** Meta object code from reading C++ file 'reschedulequestion.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "reschedulequestion.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reschedulequestion.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RescheduleQuestion[] = {

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
      20,   19,   19,   19, 0x08,
      44,   19,   19,   19, 0x08,
      70,   19,   19,   19, 0x08,
      99,   19,   19,   19, 0x08,
     125,   19,   19,   19, 0x08,
     151,   19,   19,   19, 0x08,
     173,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RescheduleQuestion[] = {
    "RescheduleQuestion\0\0on_homeButton_clicked()\0"
    "on_selectButton_clicked()\0"
    "on_visualiseButton_clicked()\0"
    "on_modifyButton_clicked()\0"
    "on_windowButton_clicked()\0"
    "on_BAButton_clicked()\0on_backButton_clicked()\0"
};

void RescheduleQuestion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RescheduleQuestion *_t = static_cast<RescheduleQuestion *>(_o);
        switch (_id) {
        case 0: _t->on_homeButton_clicked(); break;
        case 1: _t->on_selectButton_clicked(); break;
        case 2: _t->on_visualiseButton_clicked(); break;
        case 3: _t->on_modifyButton_clicked(); break;
        case 4: _t->on_windowButton_clicked(); break;
        case 5: _t->on_BAButton_clicked(); break;
        case 6: _t->on_backButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData RescheduleQuestion::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RescheduleQuestion::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_RescheduleQuestion,
      qt_meta_data_RescheduleQuestion, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RescheduleQuestion::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RescheduleQuestion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RescheduleQuestion::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RescheduleQuestion))
        return static_cast<void*>(const_cast< RescheduleQuestion*>(this));
    return QDialog::qt_metacast(_clname);
}

int RescheduleQuestion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
