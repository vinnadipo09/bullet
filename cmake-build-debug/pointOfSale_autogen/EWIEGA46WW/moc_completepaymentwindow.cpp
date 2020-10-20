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
    QByteArrayData data[16];
    char stringdata0[359];
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
QT_MOC_LITERAL(11, 228, 26), // "on_btnCompleteSale_clicked"
QT_MOC_LITERAL(12, 255, 22), // "on_btnEditSale_clicked"
QT_MOC_LITERAL(13, 278, 22), // "on_btnSaveCash_clicked"
QT_MOC_LITERAL(14, 301, 28), // "on_lblValueOne_returnPressed"
QT_MOC_LITERAL(15, 330, 28) // "on_lblValueTwo_returnPressed"

    },
    "CompletePaymentWindow\0on_btn_fifty_clicked\0"
    "\0on_btn_twoHundred_clicked\0"
    "on_btn_fiveHundred_clicked\0"
    "on_btn_oneThousand_clicked\0"
    "on_btn_credit_clicked\0on_btn_oneHundred_clicked\0"
    "getCashComputeBalance\0"
    "on_le_amountPaid_textChanged\0arg1\0"
    "on_btnCompleteSale_clicked\0"
    "on_btnEditSale_clicked\0on_btnSaveCash_clicked\0"
    "on_lblValueOne_returnPressed\0"
    "on_lblValueTwo_returnPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CompletePaymentWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    1,   86,    2, 0x08 /* Private */,
      11,    0,   89,    2, 0x08 /* Private */,
      12,    0,   90,    2, 0x08 /* Private */,
      13,    0,   91,    2, 0x08 /* Private */,
      14,    0,   92,    2, 0x08 /* Private */,
      15,    0,   93,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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
        case 9: _t->on_btnEditSale_clicked(); break;
        case 10: _t->on_btnSaveCash_clicked(); break;
        case 11: _t->on_lblValueOne_returnPressed(); break;
        case 12: _t->on_lblValueTwo_returnPressed(); break;
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
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
