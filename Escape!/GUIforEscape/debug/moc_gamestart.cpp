/****************************************************************************
** Meta object code from reading C++ file 'gamestart.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../gamestart.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamestart.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gameStart_t {
    QByteArrayData data[16];
    char stringdata0[333];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gameStart_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gameStart_t qt_meta_stringdata_gameStart = {
    {
QT_MOC_LITERAL(0, 0, 9), // "gameStart"
QT_MOC_LITERAL(1, 10, 23), // "on_pushButton_7_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(4, 59, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(5, 83, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(6, 105, 26), // "on_pushSouthButton_clicked"
QT_MOC_LITERAL(7, 132, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(8, 156, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(9, 180, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(10, 204, 23), // "on_pushButton_8_clicked"
QT_MOC_LITERAL(11, 228, 21), // "on_lcdNumber_overflow"
QT_MOC_LITERAL(12, 250, 23), // "on_pushButton_9_clicked"
QT_MOC_LITERAL(13, 274, 27), // "on_progressBar_valueChanged"
QT_MOC_LITERAL(14, 302, 5), // "value"
QT_MOC_LITERAL(15, 308, 24) // "on_pushButton_10_clicked"

    },
    "gameStart\0on_pushButton_7_clicked\0\0"
    "on_pushButton_6_clicked\0on_pushButton_5_clicked\0"
    "on_pushButton_clicked\0on_pushSouthButton_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_3_clicked\0"
    "on_pushButton_4_clicked\0on_pushButton_8_clicked\0"
    "on_lcdNumber_overflow\0on_pushButton_9_clicked\0"
    "on_progressBar_valueChanged\0value\0"
    "on_pushButton_10_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gameStart[] = {

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
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    1,   90,    2, 0x08 /* Private */,
      15,    0,   93,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,

       0        // eod
};

void gameStart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<gameStart *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_7_clicked(); break;
        case 1: _t->on_pushButton_6_clicked(); break;
        case 2: _t->on_pushButton_5_clicked(); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 5: _t->on_pushButton_2_clicked(); break;
        case 6: _t->on_pushButton_3_clicked(); break;
        case 7: _t->on_pushButton_4_clicked(); break;
        case 8: _t->on_pushButton_8_clicked(); break;
        case 10: _t->on_pushButton_9_clicked(); break;
        case 11: _t->on_progressBar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_pushButton_10_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gameStart::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_gameStart.data,
    qt_meta_data_gameStart,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gameStart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gameStart::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gameStart.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int gameStart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
