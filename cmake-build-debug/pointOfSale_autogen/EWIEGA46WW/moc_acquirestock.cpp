/****************************************************************************
** Meta object code from reading C++ file 'acquirestock.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "acquirestock.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'acquirestock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AcquireStock_t {
    QByteArrayData data[16];
    char stringdata0[273];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AcquireStock_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AcquireStock_t qt_meta_stringdata_AcquireStock = {
    {
QT_MOC_LITERAL(0, 0, 12), // "AcquireStock"
QT_MOC_LITERAL(1, 13, 22), // "on_btnCalender_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 19), // "on_btnApply_clicked"
QT_MOC_LITERAL(4, 57, 20), // "on_btnCancel_clicked"
QT_MOC_LITERAL(5, 78, 15), // "grabCurrentDate"
QT_MOC_LITERAL(6, 94, 19), // "on_btnClear_clicked"
QT_MOC_LITERAL(7, 114, 17), // "on_btnSix_clicked"
QT_MOC_LITERAL(8, 132, 20), // "on_btnTwelve_clicked"
QT_MOC_LITERAL(9, 153, 24), // "on_btnTwentyFour_clicked"
QT_MOC_LITERAL(10, 178, 23), // "on_btnThirtySix_clicked"
QT_MOC_LITERAL(11, 202, 24), // "on_btnFortyEight_clicked"
QT_MOC_LITERAL(12, 227, 14), // "paymentChanged"
QT_MOC_LITERAL(13, 242, 12), // "resetPayment"
QT_MOC_LITERAL(14, 255, 9), // "setCredit"
QT_MOC_LITERAL(15, 265, 7) // "setCash"

    },
    "AcquireStock\0on_btnCalender_clicked\0"
    "\0on_btnApply_clicked\0on_btnCancel_clicked\0"
    "grabCurrentDate\0on_btnClear_clicked\0"
    "on_btnSix_clicked\0on_btnTwelve_clicked\0"
    "on_btnTwentyFour_clicked\0"
    "on_btnThirtySix_clicked\0"
    "on_btnFortyEight_clicked\0paymentChanged\0"
    "resetPayment\0setCredit\0setCash"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AcquireStock[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    1,   94,    2, 0x08 /* Private */,
      13,    0,   97,    2, 0x08 /* Private */,
      14,    0,   98,    2, 0x08 /* Private */,
      15,    0,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AcquireStock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AcquireStock *_t = static_cast<AcquireStock *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnCalender_clicked(); break;
        case 1: _t->on_btnApply_clicked(); break;
        case 2: _t->on_btnCancel_clicked(); break;
        case 3: _t->grabCurrentDate(); break;
        case 4: _t->on_btnClear_clicked(); break;
        case 5: _t->on_btnSix_clicked(); break;
        case 6: _t->on_btnTwelve_clicked(); break;
        case 7: _t->on_btnTwentyFour_clicked(); break;
        case 8: _t->on_btnThirtySix_clicked(); break;
        case 9: _t->on_btnFortyEight_clicked(); break;
        case 10: _t->paymentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->resetPayment(); break;
        case 12: _t->setCredit(); break;
        case 13: _t->setCash(); break;
        default: ;
        }
    }
}

const QMetaObject AcquireStock::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AcquireStock.data,
      qt_meta_data_AcquireStock,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AcquireStock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AcquireStock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AcquireStock.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AcquireStock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
