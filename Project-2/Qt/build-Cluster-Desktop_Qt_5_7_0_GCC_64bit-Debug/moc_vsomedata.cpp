/****************************************************************************
** Meta object code from reading C++ file 'vsomedata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Cluster/vsomedata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vsomedata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VsomeData_t {
    QByteArrayData data[15];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VsomeData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VsomeData_t qt_meta_stringdata_VsomeData = {
    {
QT_MOC_LITERAL(0, 0, 9), // "VsomeData"
QT_MOC_LITERAL(1, 10, 12), // "qthumChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 12), // "qttmpChanged"
QT_MOC_LITERAL(4, 37, 12), // "qtrpmChanged"
QT_MOC_LITERAL(5, 50, 12), // "qtspdChanged"
QT_MOC_LITERAL(6, 63, 12), // "qtbatChanged"
QT_MOC_LITERAL(7, 76, 10), // "updateFunc"
QT_MOC_LITERAL(8, 87, 5), // "qthum"
QT_MOC_LITERAL(9, 93, 7), // "uint8_t"
QT_MOC_LITERAL(10, 101, 5), // "qttmp"
QT_MOC_LITERAL(11, 107, 5), // "qtrpm"
QT_MOC_LITERAL(12, 113, 8), // "uint16_t"
QT_MOC_LITERAL(13, 122, 5), // "qtspd"
QT_MOC_LITERAL(14, 128, 5) // "qtbat"

    },
    "VsomeData\0qthumChanged\0\0qttmpChanged\0"
    "qtrpmChanged\0qtspdChanged\0qtbatChanged\0"
    "updateFunc\0qthum\0uint8_t\0qttmp\0qtrpm\0"
    "uint16_t\0qtspd\0qtbat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VsomeData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       5,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       8, 0x80000000 | 9, 0x0049510b,
      10, QMetaType::Int, 0x00495103,
      11, 0x80000000 | 12, 0x0049510b,
      13, 0x80000000 | 9, 0x0049510b,
      14, 0x80000000 | 9, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void VsomeData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VsomeData *_t = static_cast<VsomeData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->qthumChanged(); break;
        case 1: _t->qttmpChanged(); break;
        case 2: _t->qtrpmChanged(); break;
        case 3: _t->qtspdChanged(); break;
        case 4: _t->qtbatChanged(); break;
        case 5: _t->updateFunc(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VsomeData::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VsomeData::qthumChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (VsomeData::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VsomeData::qttmpChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (VsomeData::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VsomeData::qtrpmChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (VsomeData::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VsomeData::qtspdChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (VsomeData::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VsomeData::qtbatChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        VsomeData *_t = static_cast<VsomeData *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< uint8_t*>(_v) = _t->getqthum(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getqttmp(); break;
        case 2: *reinterpret_cast< uint16_t*>(_v) = _t->getqtrpm(); break;
        case 3: *reinterpret_cast< uint8_t*>(_v) = _t->getqtspd(); break;
        case 4: *reinterpret_cast< uint8_t*>(_v) = _t->getqtbat(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        VsomeData *_t = static_cast<VsomeData *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setQthum(*reinterpret_cast< uint8_t*>(_v)); break;
        case 1: _t->setQttmp(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setQtrpm(*reinterpret_cast< uint16_t*>(_v)); break;
        case 3: _t->setQtspd(*reinterpret_cast< uint8_t*>(_v)); break;
        case 4: _t->setQtbat(*reinterpret_cast< uint8_t*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject VsomeData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VsomeData.data,
      qt_meta_data_VsomeData,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VsomeData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VsomeData::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VsomeData.stringdata0))
        return static_cast<void*>(const_cast< VsomeData*>(this));
    return QObject::qt_metacast(_clname);
}

int VsomeData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void VsomeData::qthumChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void VsomeData::qttmpChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void VsomeData::qtrpmChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void VsomeData::qtspdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void VsomeData::qtbatChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
