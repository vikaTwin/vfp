/****************************************************************************
** Meta object code from reading C++ file 'instsocket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Vfp/Model/instsocket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'instsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Ps__InstSocket_t {
    QByteArrayData data[6];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Ps__InstSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Ps__InstSocket_t qt_meta_stringdata_Ps__InstSocket = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Ps::InstSocket"
QT_MOC_LITERAL(1, 15, 15), // "NotifyConnected"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 18), // "NotifyDisconnected"
QT_MOC_LITERAL(4, 51, 11), // "onConnected"
QT_MOC_LITERAL(5, 63, 14) // "onDisconnected"

    },
    "Ps::InstSocket\0NotifyConnected\0\0"
    "NotifyDisconnected\0onConnected\0"
    "onDisconnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Ps__InstSocket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Ps::InstSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InstSocket *_t = static_cast<InstSocket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->NotifyConnected(); break;
        case 1: _t->NotifyDisconnected(); break;
        case 2: _t->onConnected(); break;
        case 3: _t->onDisconnected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (InstSocket::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InstSocket::NotifyConnected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (InstSocket::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InstSocket::NotifyDisconnected)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Ps::InstSocket::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Ps__InstSocket.data,
      qt_meta_data_Ps__InstSocket,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Ps::InstSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Ps::InstSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Ps__InstSocket.stringdata0))
        return static_cast<void*>(const_cast< InstSocket*>(this));
    return QObject::qt_metacast(_clname);
}

int Ps::InstSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Ps::InstSocket::NotifyConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Ps::InstSocket::NotifyDisconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
