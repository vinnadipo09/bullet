/****************************************************************************
** Meta object code from reading C++ file 'businesslimits.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "businesslimits.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'businesslimits.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BusinessLimits_t {
    QByteArrayData data[8];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BusinessLimits_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BusinessLimits_t qt_meta_stringdata_BusinessLimits = {
    {
QT_MOC_LITERAL(0, 0, 14), // "BusinessLimits"
QT_MOC_LITERAL(1, 15, 29), // "sendNewLimitAddedSuccessfully"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 41), // "sendLimitTaskCompleteWithoutM..."
QT_MOC_LITERAL(4, 88, 18), // "on_btnSave_clicked"
QT_MOC_LITERAL(5, 107, 20), // "on_btnCancel_clicked"
QT_MOC_LITERAL(6, 128, 35), // "on_cbLimitScale_currentIndexC..."
QT_MOC_LITERAL(7, 164, 5) // "index"

    },
    "BusinessLimits\0sendNewLimitAddedSuccessfully\0"
    "\0sendLimitTaskCompleteWithoutModifications\0"
    "on_btnSave_clicked\0on_btnCancel_clicked\0"
    "on_cbLimitScale_currentIndexChanged\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BusinessLimits[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void BusinessLimits::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BusinessLimits *_t = static_cast<BusinessLimits *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendNewLimitAddedSuccessfully(); break;
        case 1: _t->sendLimitTaskCompleteWithoutModifications(); break;
        case 2: _t->on_btnSave_clicked(); break;
        case 3: _t->on_btnCancel_clicked(); break;
        case 4: _t->on_cbLimitScale_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BusinessLimits::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BusinessLimits::sendNewLimitAddedSuccessfully)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BusinessLimits::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BusinessLimits::sendLimitTaskCompleteWithoutModifications)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject BusinessLimits::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BusinessLimits.data,
      qt_meta_data_BusinessLimits,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BusinessLimits::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BusinessLimits::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BusinessLimits.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int BusinessLimits::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void BusinessLimits::sendNewLimitAddedSuccessfully()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BusinessLimits::sendLimitTaskCompleteWithoutModifications()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
