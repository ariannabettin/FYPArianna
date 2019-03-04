/****************************************************************************
** Meta object code from reading C++ file 'fileclass.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "fileclass.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileclass.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_fileClass[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      32,   10,   10,   10, 0x08,
      51,   10,   10,   10, 0x08,
      78,   10,   10,   10, 0x08,
     106,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_fileClass[] = {
    "fileClass\0\0on_newFile_clicked()\0"
    "on_close_clicked()\0on_replaceButton_clicked()\0"
    "on_openFileButton_clicked()\0"
    "on_saveButton_clicked()\0"
};

void fileClass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        fileClass *_t = static_cast<fileClass *>(_o);
        switch (_id) {
        case 0: _t->on_newFile_clicked(); break;
        case 1: _t->on_close_clicked(); break;
        case 2: _t->on_replaceButton_clicked(); break;
        case 3: _t->on_openFileButton_clicked(); break;
        case 4: _t->on_saveButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData fileClass::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject fileClass::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_fileClass,
      qt_meta_data_fileClass, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &fileClass::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *fileClass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *fileClass::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_fileClass))
        return static_cast<void*>(const_cast< fileClass*>(this));
    return QDialog::qt_metacast(_clname);
}

int fileClass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
