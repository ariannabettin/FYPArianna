/****************************************************************************
** Meta object code from reading C++ file 'accessfile.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "accessfile.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accessfile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AccessFile[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      36,   11,   11,   11, 0x08,
      62,   11,   11,   11, 0x08,
      91,   11,   11,   11, 0x08,
     117,   11,   11,   11, 0x08,
     143,   11,   11,   11, 0x08,
     169,   11,   11,   11, 0x08,
     196,   11,   11,   11, 0x08,
     218,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AccessFile[] = {
    "AccessFile\0\0on_homeButton_clicked()\0"
    "on_selectButton_clicked()\0"
    "on_visualiseButton_clicked()\0"
    "on_modifyButton_clicked()\0"
    "on_domainButton_clicked()\0"
    "on_pushButton_7_clicked()\0"
    "on_problemButton_clicked()\0"
    "on_PFButton_clicked()\0on_pfButton_clicked()\0"
};

void AccessFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));

        switch (_id) {

        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AccessFile::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AccessFile::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AccessFile,
      qt_meta_data_AccessFile, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AccessFile::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AccessFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AccessFile::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AccessFile))
        return static_cast<void*>(const_cast< AccessFile*>(this));
    return QDialog::qt_metacast(_clname);
}

int AccessFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
