/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../include/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[20];
    char stringdata0[400];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 10), // "update_imu"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "ImuPCStruct"
QT_MOC_LITERAL(4, 35, 3), // "msg"
QT_MOC_LITERAL(5, 39, 16), // "update_thrusters"
QT_MOC_LITERAL(6, 56, 21), // "ThrustersClientStruct"
QT_MOC_LITERAL(7, 78, 13), // "update_tracks"
QT_MOC_LITERAL(8, 92, 14), // "TracksPCStruct"
QT_MOC_LITERAL(9, 107, 18), // "update_cabin_state"
QT_MOC_LITERAL(10, 126, 10), // "CabinState"
QT_MOC_LITERAL(11, 137, 18), // "update_depth_meter"
QT_MOC_LITERAL(12, 156, 16), // "update_altimeter"
QT_MOC_LITERAL(13, 173, 28), // "on_led_on_pushButton_clicked"
QT_MOC_LITERAL(14, 202, 29), // "on_led_off_pushButton_clicked"
QT_MOC_LITERAL(15, 232, 31), // "on_camera_on_pushButton_clicked"
QT_MOC_LITERAL(16, 264, 32), // "on_camera_off_pushButton_clicked"
QT_MOC_LITERAL(17, 297, 32), // "on_camera2_on_pushButton_clicked"
QT_MOC_LITERAL(18, 330, 33), // "on_camera2_off_pushButton_cli..."
QT_MOC_LITERAL(19, 364, 35) // "on_brightness_slider_sliderRe..."

    },
    "MainWindow\0update_imu\0\0ImuPCStruct\0"
    "msg\0update_thrusters\0ThrustersClientStruct\0"
    "update_tracks\0TracksPCStruct\0"
    "update_cabin_state\0CabinState\0"
    "update_depth_meter\0update_altimeter\0"
    "on_led_on_pushButton_clicked\0"
    "on_led_off_pushButton_clicked\0"
    "on_camera_on_pushButton_clicked\0"
    "on_camera_off_pushButton_clicked\0"
    "on_camera2_on_pushButton_clicked\0"
    "on_camera2_off_pushButton_clicked\0"
    "on_brightness_slider_sliderReleased"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x0a /* Public */,
       5,    1,   82,    2, 0x0a /* Public */,
       7,    1,   85,    2, 0x0a /* Public */,
       9,    1,   88,    2, 0x0a /* Public */,
      11,    1,   91,    2, 0x0a /* Public */,
      12,    1,   94,    2, 0x0a /* Public */,
      13,    0,   97,    2, 0x08 /* Private */,
      14,    0,   98,    2, 0x08 /* Private */,
      15,    0,   99,    2, 0x08 /* Private */,
      16,    0,  100,    2, 0x08 /* Private */,
      17,    0,  101,    2, 0x08 /* Private */,
      18,    0,  102,    2, 0x08 /* Private */,
      19,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, 0x80000000 | 8,    4,
    QMetaType::Void, 0x80000000 | 10,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->update_imu((*reinterpret_cast< ImuPCStruct(*)>(_a[1]))); break;
        case 1: _t->update_thrusters((*reinterpret_cast< ThrustersClientStruct(*)>(_a[1]))); break;
        case 2: _t->update_tracks((*reinterpret_cast< TracksPCStruct(*)>(_a[1]))); break;
        case 3: _t->update_cabin_state((*reinterpret_cast< CabinState(*)>(_a[1]))); break;
        case 4: _t->update_depth_meter((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->update_altimeter((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->on_led_on_pushButton_clicked(); break;
        case 7: _t->on_led_off_pushButton_clicked(); break;
        case 8: _t->on_camera_on_pushButton_clicked(); break;
        case 9: _t->on_camera_off_pushButton_clicked(); break;
        case 10: _t->on_camera2_on_pushButton_clicked(); break;
        case 11: _t->on_camera2_off_pushButton_clicked(); break;
        case 12: _t->on_brightness_slider_sliderReleased(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
