/****************************************************************************
** Meta object code from reading C++ file 'roomapi.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../RCVproject/api/roomapi.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'roomapi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSRoomAPIENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSRoomAPIENDCLASS = QtMocHelpers::stringData(
    "RoomAPI",
    "getRoomsByStatusAndLevel",
    "QList<Room*>",
    "",
    "status",
    "level",
    "addRoom",
    "ownerId",
    "roomname",
    "getLastRoom",
    "Room*",
    "getOwnerIdByRoomId",
    "roomId"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRoomAPIENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[8];
    char stringdata1[25];
    char stringdata2[13];
    char stringdata3[1];
    char stringdata4[7];
    char stringdata5[6];
    char stringdata6[8];
    char stringdata7[8];
    char stringdata8[9];
    char stringdata9[12];
    char stringdata10[6];
    char stringdata11[19];
    char stringdata12[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRoomAPIENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRoomAPIENDCLASS_t qt_meta_stringdata_CLASSRoomAPIENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "RoomAPI"
        QT_MOC_LITERAL(8, 24),  // "getRoomsByStatusAndLevel"
        QT_MOC_LITERAL(33, 12),  // "QList<Room*>"
        QT_MOC_LITERAL(46, 0),  // ""
        QT_MOC_LITERAL(47, 6),  // "status"
        QT_MOC_LITERAL(54, 5),  // "level"
        QT_MOC_LITERAL(60, 7),  // "addRoom"
        QT_MOC_LITERAL(68, 7),  // "ownerId"
        QT_MOC_LITERAL(76, 8),  // "roomname"
        QT_MOC_LITERAL(85, 11),  // "getLastRoom"
        QT_MOC_LITERAL(97, 5),  // "Room*"
        QT_MOC_LITERAL(103, 18),  // "getOwnerIdByRoomId"
        QT_MOC_LITERAL(122, 6)   // "roomId"
    },
    "RoomAPI",
    "getRoomsByStatusAndLevel",
    "QList<Room*>",
    "",
    "status",
    "level",
    "addRoom",
    "ownerId",
    "roomname",
    "getLastRoom",
    "Room*",
    "getOwnerIdByRoomId",
    "roomId"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRoomAPIENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   38,    3, 0x0a,    1 /* Public */,
       6,    3,   43,    3, 0x0a,    4 /* Public */,
       9,    0,   50,    3, 0x0a,    8 /* Public */,
      11,    1,   51,    3, 0x0a,    9 /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::ULongLong, QMetaType::ULongLong,    4,    5,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::QString, QMetaType::ULongLong,    7,    8,    5,
    0x80000000 | 10,
    QMetaType::ULongLong, QMetaType::ULongLong,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject RoomAPI::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSRoomAPIENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRoomAPIENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRoomAPIENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RoomAPI, std::true_type>,
        // method 'getRoomsByStatusAndLevel'
        QtPrivate::TypeAndForceComplete<QList<Room*>, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'addRoom'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'getLastRoom'
        QtPrivate::TypeAndForceComplete<Room *, std::false_type>,
        // method 'getOwnerIdByRoomId'
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>
    >,
    nullptr
} };

void RoomAPI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RoomAPI *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QList<Room*> _r = _t->getRoomsByStatusAndLevel((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint64>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<Room*>*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->addRoom((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<quint64>>(_a[3]))); break;
        case 2: { Room* _r = _t->getLastRoom();
            if (_a[0]) *reinterpret_cast< Room**>(_a[0]) = std::move(_r); }  break;
        case 3: { quint64 _r = _t->getOwnerIdByRoomId((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *RoomAPI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RoomAPI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRoomAPIENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RoomAPI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
