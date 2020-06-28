/****************************************************************************
** Meta object code from reading C++ file 'addnewproduct.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "addnewproduct.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addnewproduct.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddNewProduct_t {
    QByteArrayData data[9];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddNewProduct_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddNewProduct_t qt_meta_stringdata_AddNewProduct = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AddNewProduct"
QT_MOC_LITERAL(1, 14, 24), // "productAdditionCompleted"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 18), // "on_btnOkay_clicked"
QT_MOC_LITERAL(4, 59, 20), // "on_btnCancel_clicked"
QT_MOC_LITERAL(5, 80, 20), // "on_btnAvatar_clicked"
QT_MOC_LITERAL(6, 101, 18), // "receiveEditRequest"
QT_MOC_LITERAL(7, 120, 21), // "receiveDiscardRequest"
QT_MOC_LITERAL(8, 142, 25) // "receiveAdditionCompletion"

    },
    "AddNewProduct\0productAdditionCompleted\0"
    "\0on_btnOkay_clicked\0on_btnCancel_clicked\0"
    "on_btnAvatar_clicked\0receiveEditRequest\0"
    "receiveDiscardRequest\0receiveAdditionCompletion"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddNewProduct[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddNewProduct::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddNewProduct *_t = static_cast<AddNewProduct *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->productAdditionCompleted(); break;
        case 1: _t->on_btnOkay_clicked(); break;
        case 2: _t->on_btnCancel_clicked(); break;
        case 3: _t->on_btnAvatar_clicked(); break;
        case 4: _t->receiveEditRequest(); break;
        case 5: _t->receiveDiscardRequest(); break;
        case 6: _t->receiveAdditionCompletion(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (AddNewProduct::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddNewProduct::productAdditionCompleted)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AddNewProduct::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddNewProduct.data,
      qt_meta_data_AddNewProduct,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AddNewProduct::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddNewProduct::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddNewProduct.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AddNewProduct::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void AddNewProduct::productAdditionCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
