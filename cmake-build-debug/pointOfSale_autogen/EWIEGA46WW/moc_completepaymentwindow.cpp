/****************************************************************************
** Meta object code from reading C++ file 'completepaymentwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "completepaymentwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'completepaymentwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CompletePaymentWindow_t {
    QByteArrayData data[12];
    char stringdata0[255];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CompletePaymentWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CompletePaymentWindow_t qt_meta_stringdata_CompletePaymentWindow = {
    {
QT_MOC_LITERAL(0, 0, 21), // "CompletePaymentWindow"
QT_MOC_LITERAL(1, 22, 20), // "on_btn_fifty_clicked"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 25), // "on_btn_twoHundred_clicked"
QT_MOC_LITERAL(4, 70, 26), // "on_btn_fiveHundred_clicked"
QT_MOC_LITERAL(5, 97, 26), // "on_btn_oneThousand_clicked"
QT_MOC_LITERAL(6, 124, 21), // "on_btn_credit_clicked"
QT_MOC_LITERAL(7, 146, 25), // "on_btn_oneHundred_clicked"
QT_MOC_LITERAL(8, 172, 21), // "getCashComputeBalance"
QT_MOC_LITERAL(9, 194, 28), // "on_le_amountPaid_textChanged"
QT_MOC_LITERAL(10, 223, 4), // "arg1"
QT_MOC_LITERAL(11, 228, 26) // "on_btnCompleteSale_clicked"

    },
    "CompletePaymentWindow\0on_btn_fifty_clicked\0"
    "\0on_btn_twoHundred_clicked\0"
    "on_btn_fiveHundred_clicked\0"
    "on_btn_oneThousand_clicked\0"
    "on_btn_credit_clicked\0on_btn_oneHundred_clicked\0"
    "getCashComputeBalance\0"
    "on_le_amountPaid_textChanged\0arg1\0"
    "on_btnCompleteSale_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CompletePaymentWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    1,   66,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,

       0        // eod
};

void CompletePaymentWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CompletePaymentWindow *_t = static_cast<CompletePaymentWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btn_fifty_clicked(); break;
        case 1: _t->on_btn_twoHundred_clicked(); break;
        case 2: _t->on_btn_fiveHundred_clicked(); break;
        case 3: _t->on_btn_oneThousand_clicked(); break;
        case 4: _t->on_btn_credit_clicked(); break;
        case 5: _t->on_btn_oneHundred_clicked(); break;
        case 6: _t->getCashComputeBalance(); break;
        case 7: _t->on_le_amountPaid_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_btnCompleteSale_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject CompletePaymentWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CompletePaymentWindow.data,
      qt_meta_data_CompletePaymentWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CompletePaymentWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CompletePaymentWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CompletePaymentWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CompletePaymentWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
