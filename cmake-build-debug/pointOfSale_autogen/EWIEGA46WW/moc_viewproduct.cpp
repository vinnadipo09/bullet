/****************************************************************************
** Meta object code from reading C++ file 'viewproduct.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "viewproduct.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewproduct.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ViewProduct_t {
    QByteArrayData data[12];
    char stringdata0[239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ViewProduct_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ViewProduct_t qt_meta_stringdata_ViewProduct = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ViewProduct"
QT_MOC_LITERAL(1, 12, 26), // "reloadProductWithNewValues"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 9), // "productId"
QT_MOC_LITERAL(4, 50, 20), // "on_btnReward_clicked"
QT_MOC_LITERAL(5, 71, 22), // "on_btnDiscount_clicked"
QT_MOC_LITERAL(6, 94, 25), // "on_btnEditProduct_clicked"
QT_MOC_LITERAL(7, 120, 19), // "on_btnClose_clicked"
QT_MOC_LITERAL(8, 140, 20), // "on_btnDelete_clicked"
QT_MOC_LITERAL(9, 161, 27), // "receiveDiscountWorkComplete"
QT_MOC_LITERAL(10, 189, 23), // "receiveEditWorkComplete"
QT_MOC_LITERAL(11, 213, 25) // "receiveRewardWorkComplete"

    },
    "ViewProduct\0reloadProductWithNewValues\0"
    "\0productId\0on_btnReward_clicked\0"
    "on_btnDiscount_clicked\0on_btnEditProduct_clicked\0"
    "on_btnClose_clicked\0on_btnDelete_clicked\0"
    "receiveDiscountWorkComplete\0"
    "receiveEditWorkComplete\0"
    "receiveRewardWorkComplete"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewProduct[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   62,    2, 0x08 /* Private */,
       5,    0,   63,    2, 0x08 /* Private */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ViewProduct::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ViewProduct *_t = static_cast<ViewProduct *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reloadProductWithNewValues((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_btnReward_clicked(); break;
        case 2: _t->on_btnDiscount_clicked(); break;
        case 3: _t->on_btnEditProduct_clicked(); break;
        case 4: _t->on_btnClose_clicked(); break;
        case 5: _t->on_btnDelete_clicked(); break;
        case 6: _t->receiveDiscountWorkComplete(); break;
        case 7: _t->receiveEditWorkComplete(); break;
        case 8: _t->receiveRewardWorkComplete(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ViewProduct::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewProduct::reloadProductWithNewValues)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ViewProduct::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ViewProduct.data,
      qt_meta_data_ViewProduct,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ViewProduct::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ViewProduct::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ViewProduct.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ViewProduct::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ViewProduct::reloadProductWithNewValues(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
