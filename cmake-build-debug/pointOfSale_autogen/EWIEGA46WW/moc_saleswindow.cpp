/****************************************************************************
** Meta object code from reading C++ file 'saleswindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "saleswindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'saleswindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SalesWindow_t {
    QByteArrayData data[9];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SalesWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SalesWindow_t qt_meta_stringdata_SalesWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SalesWindow"
QT_MOC_LITERAL(1, 12, 21), // "sendSalesWindowclosed"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 17), // "testReturnPressed"
QT_MOC_LITERAL(4, 53, 28), // "on_btnReduceQtyByOne_clicked"
QT_MOC_LITERAL(5, 82, 24), // "on_btnDeleteItem_clicked"
QT_MOC_LITERAL(6, 107, 25), // "on_btnIncreaseQty_clicked"
QT_MOC_LITERAL(7, 133, 22), // "on_btnViewItem_clicked"
QT_MOC_LITERAL(8, 156, 29) // "on_btnViewStockStatus_clicked"

    },
    "SalesWindow\0sendSalesWindowclosed\0\0"
    "testReturnPressed\0on_btnReduceQtyByOne_clicked\0"
    "on_btnDeleteItem_clicked\0"
    "on_btnIncreaseQty_clicked\0"
    "on_btnViewItem_clicked\0"
    "on_btnViewStockStatus_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SalesWindow[] = {

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

void SalesWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SalesWindow *_t = static_cast<SalesWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendSalesWindowclosed(); break;
        case 1: _t->testReturnPressed(); break;
        case 2: _t->on_btnReduceQtyByOne_clicked(); break;
        case 3: _t->on_btnDeleteItem_clicked(); break;
        case 4: _t->on_btnIncreaseQty_clicked(); break;
        case 5: _t->on_btnViewItem_clicked(); break;
        case 6: _t->on_btnViewStockStatus_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SalesWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SalesWindow::sendSalesWindowclosed)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SalesWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SalesWindow.data,
      qt_meta_data_SalesWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SalesWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SalesWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SalesWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SalesWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SalesWindow::sendSalesWindowclosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
