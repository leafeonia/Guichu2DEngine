/****************************************************************************
** Meta object code from reading C++ file 'simuworld.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../source/simuworld.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simuworld.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SimuWorld_t {
    QByteArrayData data[10];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SimuWorld_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SimuWorld_t qt_meta_stringdata_SimuWorld = {
    {
QT_MOC_LITERAL(0, 0, 9), // "SimuWorld"
QT_MOC_LITERAL(1, 10, 10), // "CreateBall"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 10), // "BallMoving"
QT_MOC_LITERAL(4, 33, 7), // "StopAll"
QT_MOC_LITERAL(5, 41, 11), // "ContinueAll"
QT_MOC_LITERAL(6, 53, 8), // "ClearAll"
QT_MOC_LITERAL(7, 62, 7), // "ShowFPS"
QT_MOC_LITERAL(8, 70, 17), // "philosophy_revive"
QT_MOC_LITERAL(9, 88, 3) // "del"

    },
    "SimuWorld\0CreateBall\0\0BallMoving\0"
    "StopAll\0ContinueAll\0ClearAll\0ShowFPS\0"
    "philosophy_revive\0del"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SimuWorld[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,

 // slots: parameters
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

void SimuWorld::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SimuWorld *_t = static_cast<SimuWorld *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CreateBall(); break;
        case 1: _t->BallMoving(); break;
        case 2: _t->StopAll(); break;
        case 3: _t->ContinueAll(); break;
        case 4: _t->ClearAll(); break;
        case 5: _t->ShowFPS(); break;
        case 6: _t->philosophy_revive(); break;
        case 7: _t->del(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SimuWorld::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_SimuWorld.data,
      qt_meta_data_SimuWorld,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SimuWorld::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimuWorld::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SimuWorld.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int SimuWorld::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
