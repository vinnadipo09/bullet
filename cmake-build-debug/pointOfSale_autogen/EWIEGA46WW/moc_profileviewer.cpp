/****************************************************************************
** Meta object code from reading C++ file 'profileviewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "profileviewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'profileviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ProfileViewer_t {
    QByteArrayData data[17];
    char stringdata0[308];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProfileViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProfileViewer_t qt_meta_stringdata_ProfileViewer = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ProfileViewer"
QT_MOC_LITERAL(1, 14, 17), // "sendAvatarChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 8), // "QString*"
QT_MOC_LITERAL(4, 42, 16), // "newProfileAvatar"
QT_MOC_LITERAL(5, 59, 19), // "sendUsernameChanged"
QT_MOC_LITERAL(6, 79, 8), // "userName"
QT_MOC_LITERAL(7, 88, 16), // "sendPhoneChanged"
QT_MOC_LITERAL(8, 105, 5), // "phone"
QT_MOC_LITERAL(9, 111, 19), // "sendPassWordChanged"
QT_MOC_LITERAL(10, 131, 8), // "password"
QT_MOC_LITERAL(11, 140, 26), // "on_pb_changeAvatar_clicked"
QT_MOC_LITERAL(12, 167, 26), // "on_pb_change_phone_clicked"
QT_MOC_LITERAL(13, 194, 29), // "on_pb_change_userName_clicked"
QT_MOC_LITERAL(14, 224, 28), // "on_pb_changePassword_clicked"
QT_MOC_LITERAL(15, 253, 27), // "on_btn_ApplyChanges_clicked"
QT_MOC_LITERAL(16, 281, 26) // "on_btn_closeWindow_clicked"

    },
    "ProfileViewer\0sendAvatarChanged\0\0"
    "QString*\0newProfileAvatar\0sendUsernameChanged\0"
    "userName\0sendPhoneChanged\0phone\0"
    "sendPassWordChanged\0password\0"
    "on_pb_changeAvatar_clicked\0"
    "on_pb_change_phone_clicked\0"
    "on_pb_change_userName_clicked\0"
    "on_pb_changePassword_clicked\0"
    "on_btn_ApplyChanges_clicked\0"
    "on_btn_closeWindow_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProfileViewer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,
       7,    1,   70,    2, 0x06 /* Public */,
       9,    1,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   76,    2, 0x08 /* Private */,
      12,    0,   77,    2, 0x08 /* Private */,
      13,    0,   78,    2, 0x08 /* Private */,
      14,    0,   79,    2, 0x08 /* Private */,
      15,    0,   80,    2, 0x08 /* Private */,
      16,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void, 0x80000000 | 3,    8,
    QMetaType::Void, 0x80000000 | 3,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ProfileViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProfileViewer *_t = static_cast<ProfileViewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendAvatarChanged((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 1: _t->sendUsernameChanged((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 2: _t->sendPhoneChanged((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 3: _t->sendPassWordChanged((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 4: _t->on_pb_changeAvatar_clicked(); break;
        case 5: _t->on_pb_change_phone_clicked(); break;
        case 6: _t->on_pb_change_userName_clicked(); break;
        case 7: _t->on_pb_changePassword_clicked(); break;
        case 8: _t->on_btn_ApplyChanges_clicked(); break;
        case 9: _t->on_btn_closeWindow_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ProfileViewer::*_t)(QString * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProfileViewer::sendAvatarChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ProfileViewer::*_t)(QString * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProfileViewer::sendUsernameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ProfileViewer::*_t)(QString * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProfileViewer::sendPhoneChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ProfileViewer::*_t)(QString * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProfileViewer::sendPassWordChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject ProfileViewer::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ProfileViewer.data,
      qt_meta_data_ProfileViewer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ProfileViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProfileViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProfileViewer.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ProfileViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void ProfileViewer::sendAvatarChanged(QString * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ProfileViewer::sendUsernameChanged(QString * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ProfileViewer::sendPhoneChanged(QString * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ProfileViewer::sendPassWordChanged(QString * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
