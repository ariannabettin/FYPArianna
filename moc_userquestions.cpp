/****************************************************************************
** Meta object code from reading C++ file 'userquestions.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "userquestions.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userquestions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UserQuestions[] = {

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
      41,   14,   14,   14, 0x08,
      65,   14,   14,   14, 0x08,
      91,   14,   14,   14, 0x08,
     120,   14,   14,   14, 0x08,
     144,   14,   14,   14, 0x08,
     172,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UserQuestions[] = {
    "UserQuestions\0\0on_choiceButton_clicked()\0"
    "on_homeButton_clicked()\0"
    "on_selectButton_clicked()\0"
    "on_visualiseButton_clicked()\0"
    "on_doneButton_clicked()\0"
    "on_completeButton_clicked()\0"
    "on_addButton_2_clicked()\0"
};

void UserQuestions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UserQuestions *_t = static_cast<UserQuestions *>(_o);
        switch (_id) {
        case 0: _t->on_choiceButton_clicked(); break;
        case 1: _t->on_homeButton_clicked(); break;
        case 2: _t->on_selectButton_clicked(); break;
        case 3: _t->on_visualiseButton_clicked(); break;
        case 4: _t->on_doneButton_clicked(); break;
        case 5: _t->on_completeButton_clicked(); break;
        case 6: _t->on_addButton_2_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UserQuestions::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UserQuestions::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UserQuestions,
      qt_meta_data_UserQuestions, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UserQuestions::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UserQuestions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UserQuestions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UserQuestions))
        return static_cast<void*>(const_cast< UserQuestions*>(this));
    return QDialog::qt_metacast(_clname);
}

int UserQuestions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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