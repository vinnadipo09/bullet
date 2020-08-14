cmake_minimum_required(VERSION 3.5)

project(pointOfSale LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
INCLUDE_DIRECTORIES("/opt/lampp/lib/")
include_directories(${CMAKE_BINARY_DIR})
# QtCreator supports the following variables for Android, which are identical to qmake Android variables.
# Check http://doc.qt.io/qt-5/deployment-android.html for more information.
# They need to be set before the find_package(Qt5 ...) call.

#if(ANDROID)
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
#    if (ANDROID_ABI STREQUAL "armeabi-v7a")
#        set(ANDROID_EXTRA_LIBS
#            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libcrypto.so
#            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libssl.so)
#    endif()
#endif()

find_package(Qt5 COMPONENTS Widgets Sql REQUIRED)
find_package(Qt5Charts REQUIRED)
find_package(Qt5PrintSupport REQUIRED)

if(ANDROID)
  add_library(pointOfSale SHARED
    main.cpp
    login.cpp
    login.h
    login.ui
  )
else()
  add_executable(pointOfSale
    main.cpp
    login.cpp
    login.h
    login.ui

    resources.qrc

    debugger.cpp
    debugger.h

    adminwindow.cpp
    adminwindow.h
    adminwindow.ui

    databaseconnection.cpp
    databaseconnection.h

    addnewuser.cpp
    addnewuser.h
    addnewuser.ui

    verifynewuser.cpp
    verifynewuser.h
    verifynewuser.ui

    supervisorwindow.cpp
    supervisorwindow.h
    supervisorwindow.ui

    cashierwindow.cpp
    cashierwindow.h
    cashierwindow.ui

    viewuser.cpp
    viewuser.h
    viewuser.ui

    edituser.cpp
    edituser.h
    edituser.ui

    viaddialog.cpp
    viaddialog.h
    viaddialog.ui

    profileviewer.cpp
    profileviewer.h
    profileviewer.ui

    changeavatar.cpp
    changeavatar.h
    changeavatar.ui

    changeusername.cpp
    changeusername.h
    changeusername.ui

    changepassword.cpp
    changepassword.h
    changepassword.ui

    changephone.cpp
    changephone.h
    changephone.ui

    passwordconfirmation.cpp
    passwordconfirmation.h
    passwordconfirmation.ui

    viewproduct.cpp
    viewproduct.h
    viewproduct.ui

    verifynewproduct.cpp
    verifynewproduct.h
    verifynewproduct.ui

    completepaymentwindow.cpp
    completepaymentwindow.h
    completepaymentwindow.ui

    template.cpp
    template.h
    template.ui

    addtransactiontype.cpp
    addtransactiontype.h
    addtransactiontype.ui

    addcustomer.cpp
    addcustomer.h
    addcustomer.ui

    customerpaydebt.cpp
    customerpaydebt.h
    customerpaydebt.ui

    changedebtlimit.cpp
    changedebtlimit.h
    changedebtlimit.ui

    viewcustomer.cpp
    viewcustomer.h
    viewcustomer.ui

    editcustomer.cpp
    editcustomer.h
    editcustomer.ui

    addproductcategory.cpp
    addproductcategory.h
    addproductcategory.ui

    editproductcategory.cpp
    editproductcategory.h
    editproductcategory.ui

    productdiscounteditor.cpp
    productdiscounteditor.h
    productdiscounteditor.ui

    productrewardeditor.cpp
    productrewardeditor.h
    productrewardeditor.ui

    producteditor.cpp
    producteditor.h
    producteditor.ui

    addsupplier.cpp
    addsupplier.h
    addsupplier.ui

    editsupplier.cpp
    editsupplier.h
    editsupplier.ui

    viewsupplier.cpp
    viewsupplier.h
    viewsupplier.ui

    acquirestock.cpp
    acquirestock.h
    acquirestock.ui

    addproductzone.cpp
    addproductzone.h
    addproductzone.ui

    editproductzone.cpp
    editproductzone.h
    editproductzone.ui

    addproduct.cpp
    addproduct.h
    addproduct.ui

    addcash.cpp
    addcash.h
    addcash.ui

    customerviewchoice.cpp
    customerviewchoice.h
    customerviewchoice.ui

    customerviewone.cpp
    customerviewone.h
    customerviewone.ui

    customerviewall.cpp
    customerviewall.h
    customerviewall.ui

    sessioncontrol.cpp
    sessioncontrol.h
    sessioncontrol.ui

    donutbreakdownchart.cpp
    donutbreakdownchart.h

    mainslice.cpp
    mainslice.h

    qcustomplot.cpp
    qcustomplot.h

    salesclient.cpp
          salesclient.h
          salesclient.ui

    existingsessionverifier.cpp
    existingsessionverifier.h
    existingsessionverifier.ui
  )
endif()

target_link_libraries(pointOfSale PRIVATE Qt5::Widgets Qt5::Sql Qt5::Charts Qt5::PrintSupport libmysqlclient.so)
