/****************************************************************************
** Meta object code from reading C++ file 'adminwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "adminwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AdminWindow_t {
    QByteArrayData data[71];
    char stringdata0[1799];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdminWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdminWindow_t qt_meta_stringdata_AdminWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AdminWindow"
QT_MOC_LITERAL(1, 12, 21), // "send_admin_logged_out"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 31), // "on_pushButton_dashboard_clicked"
QT_MOC_LITERAL(4, 67, 27), // "on_pushButton_users_clicked"
QT_MOC_LITERAL(5, 95, 28), // "on_pushbutton_logout_clicked"
QT_MOC_LITERAL(6, 124, 32), // "on_pushButton_addNewUser_clicked"
QT_MOC_LITERAL(7, 157, 20), // "userAddedFromAddUser"
QT_MOC_LITERAL(8, 178, 24), // "on_btn_loadUsers_clicked"
QT_MOC_LITERAL(9, 203, 26), // "on_btn_viewProfile_clicked"
QT_MOC_LITERAL(10, 230, 13), // "showAdminTime"
QT_MOC_LITERAL(11, 244, 16), // "receiveNewAvatar"
QT_MOC_LITERAL(12, 261, 8), // "QString*"
QT_MOC_LITERAL(13, 270, 9), // "newAvatar"
QT_MOC_LITERAL(14, 280, 15), // "receiveNewPhone"
QT_MOC_LITERAL(15, 296, 8), // "newPhone"
QT_MOC_LITERAL(16, 305, 18), // "receiveNewPassword"
QT_MOC_LITERAL(17, 324, 11), // "newPassword"
QT_MOC_LITERAL(18, 336, 18), // "receiveNewusername"
QT_MOC_LITERAL(19, 355, 11), // "newUsername"
QT_MOC_LITERAL(20, 367, 30), // "on_pushButton_products_clicked"
QT_MOC_LITERAL(21, 398, 27), // "on_pushButton_stock_clicked"
QT_MOC_LITERAL(22, 426, 31), // "on_pushButton_customers_clicked"
QT_MOC_LITERAL(23, 458, 28), // "on_pushButton_agents_clicked"
QT_MOC_LITERAL(24, 487, 27), // "on_pushButton_sales_clicked"
QT_MOC_LITERAL(25, 515, 28), // "on_pushButton_orders_clicked"
QT_MOC_LITERAL(26, 544, 31), // "on_pushButton_suppliers_clicked"
QT_MOC_LITERAL(27, 576, 36), // "on_pushButton_openingClosing_..."
QT_MOC_LITERAL(28, 613, 36), // "on_pushButton_profitsManager_..."
QT_MOC_LITERAL(29, 650, 35), // "on_pushButton_creditManager_c..."
QT_MOC_LITERAL(30, 686, 32), // "on_pushButton_infoCenter_clicked"
QT_MOC_LITERAL(31, 719, 28), // "on_pushButton_assets_clicked"
QT_MOC_LITERAL(32, 748, 35), // "on_pushButton_businessWorth_c..."
QT_MOC_LITERAL(33, 784, 34), // "on_pushButton_be_a_cashier_cl..."
QT_MOC_LITERAL(34, 819, 27), // "receiveProdAdditionComplete"
QT_MOC_LITERAL(35, 847, 33), // "on_btn_viewFromAllProductsCli..."
QT_MOC_LITERAL(36, 881, 28), // "on_pb_addNewProducts_clicked"
QT_MOC_LITERAL(37, 910, 25), // "receive_salesClientClosed"
QT_MOC_LITERAL(38, 936, 40), // "receiveLoadTransactionTypeAft..."
QT_MOC_LITERAL(39, 977, 18), // "receiveUserDeleted"
QT_MOC_LITERAL(40, 996, 24), // "on_pb_testButton_clicked"
QT_MOC_LITERAL(41, 1021, 27), // "on_btn_transactions_clicked"
QT_MOC_LITERAL(42, 1049, 33), // "on_pb_addTransactionTypes_cli..."
QT_MOC_LITERAL(43, 1083, 34), // "on_pb_loadTransactionTypes_cl..."
QT_MOC_LITERAL(44, 1118, 14), // "viewSupervisor"
QT_MOC_LITERAL(45, 1133, 9), // "viewAdmin"
QT_MOC_LITERAL(46, 1143, 14), // "viewSuperAdmin"
QT_MOC_LITERAL(47, 1158, 11), // "viewCashier"
QT_MOC_LITERAL(48, 1170, 25), // "on_btnAddCategory_clicked"
QT_MOC_LITERAL(49, 1196, 43), // "receiveOperationsCompleteAddP..."
QT_MOC_LITERAL(50, 1240, 27), // "receive_editProductCategory"
QT_MOC_LITERAL(51, 1268, 29), // "receive_deleteProductCategory"
QT_MOC_LITERAL(52, 1298, 27), // "receiveEditCategoryComplete"
QT_MOC_LITERAL(53, 1326, 33), // "receiveReloadProductWithNewVa..."
QT_MOC_LITERAL(54, 1360, 19), // "receiveViewSupplier"
QT_MOC_LITERAL(55, 1380, 27), // "receiveSupplierWorkComplete"
QT_MOC_LITERAL(56, 1408, 25), // "on_btnAddSupplier_clicked"
QT_MOC_LITERAL(57, 1434, 26), // "on_btnAcquireStock_clicked"
QT_MOC_LITERAL(58, 1461, 21), // "on_btnAddZone_clicked"
QT_MOC_LITERAL(59, 1483, 23), // "receiveZoneWorkComplete"
QT_MOC_LITERAL(60, 1507, 29), // "on_btn_ProductsCenter_clicked"
QT_MOC_LITERAL(61, 1537, 22), // "receiveEditProductZone"
QT_MOC_LITERAL(62, 1560, 24), // "receiveDeleteProductZone"
QT_MOC_LITERAL(63, 1585, 23), // "receiveZoneEditComplete"
QT_MOC_LITERAL(64, 1609, 31), // "receiveStockAcquisitionComplete"
QT_MOC_LITERAL(65, 1641, 31), // "receiveCustomerAdditionComplete"
QT_MOC_LITERAL(66, 1673, 24), // "on_btnAddProdcts_clicked"
QT_MOC_LITERAL(67, 1698, 21), // "on_btnAddCash_clicked"
QT_MOC_LITERAL(68, 1720, 26), // "on_btnLogsPrevious_clicked"
QT_MOC_LITERAL(69, 1747, 22), // "on_btnLogsNext_clicked"
QT_MOC_LITERAL(70, 1770, 28) // "receiveOpeningClosingChanged"

    },
    "AdminWindow\0send_admin_logged_out\0\0"
    "on_pushButton_dashboard_clicked\0"
    "on_pushButton_users_clicked\0"
    "on_pushbutton_logout_clicked\0"
    "on_pushButton_addNewUser_clicked\0"
    "userAddedFromAddUser\0on_btn_loadUsers_clicked\0"
    "on_btn_viewProfile_clicked\0showAdminTime\0"
    "receiveNewAvatar\0QString*\0newAvatar\0"
    "receiveNewPhone\0newPhone\0receiveNewPassword\0"
    "newPassword\0receiveNewusername\0"
    "newUsername\0on_pushButton_products_clicked\0"
    "on_pushButton_stock_clicked\0"
    "on_pushButton_customers_clicked\0"
    "on_pushButton_agents_clicked\0"
    "on_pushButton_sales_clicked\0"
    "on_pushButton_orders_clicked\0"
    "on_pushButton_suppliers_clicked\0"
    "on_pushButton_openingClosing_clicked\0"
    "on_pushButton_profitsManager_clicked\0"
    "on_pushButton_creditManager_clicked\0"
    "on_pushButton_infoCenter_clicked\0"
    "on_pushButton_assets_clicked\0"
    "on_pushButton_businessWorth_clicked\0"
    "on_pushButton_be_a_cashier_clicked\0"
    "receiveProdAdditionComplete\0"
    "on_btn_viewFromAllProductsClicked\0"
    "on_pb_addNewProducts_clicked\0"
    "receive_salesClientClosed\0"
    "receiveLoadTransactionTypeAfterAddingNew\0"
    "receiveUserDeleted\0on_pb_testButton_clicked\0"
    "on_btn_transactions_clicked\0"
    "on_pb_addTransactionTypes_clicked\0"
    "on_pb_loadTransactionTypes_clicked\0"
    "viewSupervisor\0viewAdmin\0viewSuperAdmin\0"
    "viewCashier\0on_btnAddCategory_clicked\0"
    "receiveOperationsCompleteAddProductCategory\0"
    "receive_editProductCategory\0"
    "receive_deleteProductCategory\0"
    "receiveEditCategoryComplete\0"
    "receiveReloadProductWithNewValues\0"
    "receiveViewSupplier\0receiveSupplierWorkComplete\0"
    "on_btnAddSupplier_clicked\0"
    "on_btnAcquireStock_clicked\0"
    "on_btnAddZone_clicked\0receiveZoneWorkComplete\0"
    "on_btn_ProductsCenter_clicked\0"
    "receiveEditProductZone\0receiveDeleteProductZone\0"
    "receiveZoneEditComplete\0"
    "receiveStockAcquisitionComplete\0"
    "receiveCustomerAdditionComplete\0"
    "on_btnAddProdcts_clicked\0on_btnAddCash_clicked\0"
    "on_btnLogsPrevious_clicked\0"
    "on_btnLogsNext_clicked\0"
    "receiveOpeningClosingChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdminWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      64,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  334,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  335,    2, 0x08 /* Private */,
       4,    0,  336,    2, 0x08 /* Private */,
       5,    0,  337,    2, 0x08 /* Private */,
       6,    0,  338,    2, 0x08 /* Private */,
       7,    0,  339,    2, 0x08 /* Private */,
       8,    0,  340,    2, 0x08 /* Private */,
       9,    0,  341,    2, 0x08 /* Private */,
      10,    0,  342,    2, 0x08 /* Private */,
      11,    1,  343,    2, 0x08 /* Private */,
      14,    1,  346,    2, 0x08 /* Private */,
      16,    1,  349,    2, 0x08 /* Private */,
      18,    1,  352,    2, 0x08 /* Private */,
      20,    0,  355,    2, 0x08 /* Private */,
      21,    0,  356,    2, 0x08 /* Private */,
      22,    0,  357,    2, 0x08 /* Private */,
      23,    0,  358,    2, 0x08 /* Private */,
      24,    0,  359,    2, 0x08 /* Private */,
      25,    0,  360,    2, 0x08 /* Private */,
      26,    0,  361,    2, 0x08 /* Private */,
      27,    0,  362,    2, 0x08 /* Private */,
      28,    0,  363,    2, 0x08 /* Private */,
      29,    0,  364,    2, 0x08 /* Private */,
      30,    0,  365,    2, 0x08 /* Private */,
      31,    0,  366,    2, 0x08 /* Private */,
      32,    0,  367,    2, 0x08 /* Private */,
      33,    0,  368,    2, 0x08 /* Private */,
      34,    0,  369,    2, 0x08 /* Private */,
      35,    0,  370,    2, 0x08 /* Private */,
      36,    0,  371,    2, 0x08 /* Private */,
      37,    0,  372,    2, 0x08 /* Private */,
      38,    0,  373,    2, 0x08 /* Private */,
      39,    0,  374,    2, 0x08 /* Private */,
      40,    0,  375,    2, 0x08 /* Private */,
      41,    0,  376,    2, 0x08 /* Private */,
      42,    0,  377,    2, 0x08 /* Private */,
      43,    0,  378,    2, 0x08 /* Private */,
      44,    0,  379,    2, 0x08 /* Private */,
      45,    0,  380,    2, 0x08 /* Private */,
      46,    0,  381,    2, 0x08 /* Private */,
      47,    0,  382,    2, 0x08 /* Private */,
      48,    0,  383,    2, 0x08 /* Private */,
      49,    0,  384,    2, 0x08 /* Private */,
      50,    0,  385,    2, 0x08 /* Private */,
      51,    0,  386,    2, 0x08 /* Private */,
      52,    0,  387,    2, 0x08 /* Private */,
      53,    1,  388,    2, 0x08 /* Private */,
      54,    0,  391,    2, 0x08 /* Private */,
      55,    0,  392,    2, 0x08 /* Private */,
      56,    0,  393,    2, 0x08 /* Private */,
      57,    0,  394,    2, 0x08 /* Private */,
      58,    0,  395,    2, 0x08 /* Private */,
      59,    0,  396,    2, 0x08 /* Private */,
      60,    0,  397,    2, 0x08 /* Private */,
      61,    0,  398,    2, 0x08 /* Private */,
      62,    0,  399,    2, 0x08 /* Private */,
      63,    0,  400,    2, 0x08 /* Private */,
      64,    0,  401,    2, 0x08 /* Private */,
      65,    0,  402,    2, 0x08 /* Private */,
      66,    0,  403,    2, 0x08 /* Private */,
      67,    0,  404,    2, 0x08 /* Private */,
      68,    0,  405,    2, 0x08 /* Private */,
      69,    0,  406,    2, 0x08 /* Private */,
      70,    0,  407,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   15,
    QMetaType::Void, 0x80000000 | 12,   17,
    QMetaType::Void, 0x80000000 | 12,   19,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AdminWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AdminWindow *_t = static_cast<AdminWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_admin_logged_out(); break;
        case 1: _t->on_pushButton_dashboard_clicked(); break;
        case 2: _t->on_pushButton_users_clicked(); break;
        case 3: _t->on_pushbutton_logout_clicked(); break;
        case 4: _t->on_pushButton_addNewUser_clicked(); break;
        case 5: _t->userAddedFromAddUser(); break;
        case 6: _t->on_btn_loadUsers_clicked(); break;
        case 7: _t->on_btn_viewProfile_clicked(); break;
        case 8: _t->showAdminTime(); break;
        case 9: _t->receiveNewAvatar((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 10: _t->receiveNewPhone((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 11: _t->receiveNewPassword((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 12: _t->receiveNewusername((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 13: _t->on_pushButton_products_clicked(); break;
        case 14: _t->on_pushButton_stock_clicked(); break;
        case 15: _t->on_pushButton_customers_clicked(); break;
        case 16: _t->on_pushButton_agents_clicked(); break;
        case 17: _t->on_pushButton_sales_clicked(); break;
        case 18: _t->on_pushButton_orders_clicked(); break;
        case 19: _t->on_pushButton_suppliers_clicked(); break;
        case 20: _t->on_pushButton_openingClosing_clicked(); break;
        case 21: _t->on_pushButton_profitsManager_clicked(); break;
        case 22: _t->on_pushButton_creditManager_clicked(); break;
        case 23: _t->on_pushButton_infoCenter_clicked(); break;
        case 24: _t->on_pushButton_assets_clicked(); break;
        case 25: _t->on_pushButton_businessWorth_clicked(); break;
        case 26: _t->on_pushButton_be_a_cashier_clicked(); break;
        case 27: _t->receiveProdAdditionComplete(); break;
        case 28: _t->on_btn_viewFromAllProductsClicked(); break;
        case 29: _t->on_pb_addNewProducts_clicked(); break;
        case 30: _t->receive_salesClientClosed(); break;
        case 31: _t->receiveLoadTransactionTypeAfterAddingNew(); break;
        case 32: _t->receiveUserDeleted(); break;
        case 33: _t->on_pb_testButton_clicked(); break;
        case 34: _t->on_btn_transactions_clicked(); break;
        case 35: _t->on_pb_addTransactionTypes_clicked(); break;
        case 36: _t->on_pb_loadTransactionTypes_clicked(); break;
        case 37: _t->viewSupervisor(); break;
        case 38: _t->viewAdmin(); break;
        case 39: _t->viewSuperAdmin(); break;
        case 40: _t->viewCashier(); break;
        case 41: _t->on_btnAddCategory_clicked(); break;
        case 42: _t->receiveOperationsCompleteAddProductCategory(); break;
        case 43: _t->receive_editProductCategory(); break;
        case 44: _t->receive_deleteProductCategory(); break;
        case 45: _t->receiveEditCategoryComplete(); break;
        case 46: _t->receiveReloadProductWithNewValues((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->receiveViewSupplier(); break;
        case 48: _t->receiveSupplierWorkComplete(); break;
        case 49: _t->on_btnAddSupplier_clicked(); break;
        case 50: _t->on_btnAcquireStock_clicked(); break;
        case 51: _t->on_btnAddZone_clicked(); break;
        case 52: _t->receiveZoneWorkComplete(); break;
        case 53: _t->on_btn_ProductsCenter_clicked(); break;
        case 54: _t->receiveEditProductZone(); break;
        case 55: _t->receiveDeleteProductZone(); break;
        case 56: _t->receiveZoneEditComplete(); break;
        case 57: _t->receiveStockAcquisitionComplete(); break;
        case 58: _t->receiveCustomerAdditionComplete(); break;
        case 59: _t->on_btnAddProdcts_clicked(); break;
        case 60: _t->on_btnAddCash_clicked(); break;
        case 61: _t->on_btnLogsPrevious_clicked(); break;
        case 62: _t->on_btnLogsNext_clicked(); break;
        case 63: _t->receiveOpeningClosingChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (AdminWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AdminWindow::send_admin_logged_out)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject AdminWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_AdminWindow.data,
      qt_meta_data_AdminWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AdminWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdminWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int AdminWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 64)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 64;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 64)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 64;
    }
    return _id;
}

// SIGNAL 0
void AdminWindow::send_admin_logged_out()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
