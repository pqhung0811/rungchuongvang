/****************************************************************************
** Meta object code from reading C++ file 'room.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../RCVproject/entity/room.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'room.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSRoomENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSRoomENDCLASS = QtMocHelpers::stringData(
    "Room",
    "getId",
    "",
    "getRoomname",
    "getOwner",
    "User*",
    "getStartTime",
    "getEndTime",
    "getUserAndPoint",
    "QMap<User*,quint64>",
    "getStatus",
    "getLevel",
    "setId",
    "id",
    "setRoomname",
    "name",
    "setOwner",
    "user",
    "setStartTime",
    "starttime",
    "setEndTime",
    "endtime",
    "setUserAndPoint",
    "userAndPoint",
    "setstatus",
    "status",
    "setLevel",
    "level"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRoomENDCLASS_t {
    uint offsetsAndSizes[56];
    char stringdata0[5];
    char stringdata1[6];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[9];
    char stringdata5[6];
    char stringdata6[13];
    char stringdata7[11];
    char stringdata8[16];
    char stringdata9[20];
    char stringdata10[10];
    char stringdata11[9];
    char stringdata12[6];
    char stringdata13[3];
    char stringdata14[12];
    char stringdata15[5];
    char stringdata16[9];
    char stringdata17[5];
    char stringdata18[13];
    char stringdata19[10];
    char stringdata20[11];
    char stringdata21[8];
    char stringdata22[16];
    char stringdata23[13];
    char stringdata24[10];
    char stringdata25[7];
    char stringdata26[9];
    char stringdata27[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRoomENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRoomENDCLASS_t qt_meta_stringdata_CLASSRoomENDCLASS = {
    {
        QT_MOC_LITERAL(0, 4),  // "Room"
        QT_MOC_LITERAL(5, 5),  // "getId"
        QT_MOC_LITERAL(11, 0),  // ""
        QT_MOC_LITERAL(12, 11),  // "getRoomname"
        QT_MOC_LITERAL(24, 8),  // "getOwner"
        QT_MOC_LITERAL(33, 5),  // "User*"
        QT_MOC_LITERAL(39, 12),  // "getStartTime"
        QT_MOC_LITERAL(52, 10),  // "getEndTime"
        QT_MOC_LITERAL(63, 15),  // "getUserAndPoint"
        QT_MOC_LITERAL(79, 19),  // "QMap<User*,quint64>"
        QT_MOC_LITERAL(99, 9),  // "getStatus"
        QT_MOC_LITERAL(109, 8),  // "getLevel"
        QT_MOC_LITERAL(118, 5),  // "setId"
        QT_MOC_LITERAL(124, 2),  // "id"
        QT_MOC_LITERAL(127, 11),  // "setRoomname"
        QT_MOC_LITERAL(139, 4),  // "name"
        QT_MOC_LITERAL(144, 8),  // "setOwner"
        QT_MOC_LITERAL(153, 4),  // "user"
        QT_MOC_LITERAL(158, 12),  // "setStartTime"
        QT_MOC_LITERAL(171, 9),  // "starttime"
        QT_MOC_LITERAL(181, 10),  // "setEndTime"
        QT_MOC_LITERAL(192, 7),  // "endtime"
        QT_MOC_LITERAL(200, 15),  // "setUserAndPoint"
        QT_MOC_LITERAL(216, 12),  // "userAndPoint"
        QT_MOC_LITERAL(229, 9),  // "setstatus"
        QT_MOC_LITERAL(239, 6),  // "status"
        QT_MOC_LITERAL(246, 8),  // "setLevel"
        QT_MOC_LITERAL(255, 5)   // "level"
    },
    "Room",
    "getId",
    "",
    "getRoomname",
    "getOwner",
    "User*",
    "getStartTime",
    "getEndTime",
    "getUserAndPoint",
    "QMap<User*,quint64>",
    "getStatus",
    "getLevel",
    "setId",
    "id",
    "setRoomname",
    "name",
    "setOwner",
    "user",
    "setStartTime",
    "starttime",
    "setEndTime",
    "endtime",
    "setUserAndPoint",
    "userAndPoint",
    "setstatus",
    "status",
    "setLevel",
    "level"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRoomENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  110,    2, 0x0a,    1 /* Public */,
       3,    0,  111,    2, 0x0a,    2 /* Public */,
       4,    0,  112,    2, 0x0a,    3 /* Public */,
       6,    0,  113,    2, 0x0a,    4 /* Public */,
       7,    0,  114,    2, 0x0a,    5 /* Public */,
       8,    0,  115,    2, 0x0a,    6 /* Public */,
      10,    0,  116,    2, 0x0a,    7 /* Public */,
      11,    0,  117,    2, 0x0a,    8 /* Public */,
      12,    1,  118,    2, 0x0a,    9 /* Public */,
      14,    1,  121,    2, 0x0a,   11 /* Public */,
      16,    1,  124,    2, 0x0a,   13 /* Public */,
      18,    1,  127,    2, 0x0a,   15 /* Public */,
      20,    1,  130,    2, 0x0a,   17 /* Public */,
      22,    1,  133,    2, 0x0a,   19 /* Public */,
      24,    1,  136,    2, 0x0a,   21 /* Public */,
      26,    1,  139,    2, 0x0a,   23 /* Public */,

 // slots: parameters
    QMetaType::ULongLong,
    QMetaType::QString,
    0x80000000 | 5,
    QMetaType::QString,
    QMetaType::QString,
    0x80000000 | 9,
    QMetaType::ULongLong,
    QMetaType::ULongLong,
    QMetaType::Void, QMetaType::ULongLong,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, 0x80000000 | 5,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, 0x80000000 | 9,   23,
    QMetaType::Void, QMetaType::ULongLong,   25,
    QMetaType::Void, QMetaType::ULongLong,   27,

       0        // eod
};

Q_CONSTINIT const QMetaObject Room::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSRoomENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRoomENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRoomENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Room, std::true_type>,
        // method 'getId'
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'getRoomname'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getOwner'
        QtPrivate::TypeAndForceComplete<User *, std::false_type>,
        // method 'getStartTime'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getEndTime'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getUserAndPoint'
        QtPrivate::TypeAndForceComplete<QMap<User*,quint64>, std::false_type>,
        // method 'getStatus'
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'getLevel'
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'setId'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'setRoomname'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setOwner'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<User *, std::false_type>,
        // method 'setStartTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setEndTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setUserAndPoint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMap<User*,quint64>, std::false_type>,
        // method 'setstatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'setLevel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>
    >,
    nullptr
} };

void Room::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Room *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { quint64 _r = _t->getId();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->getRoomname();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { User* _r = _t->getOwner();
            if (_a[0]) *reinterpret_cast< User**>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->getStartTime();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->getEndTime();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QMap<User*,quint64> _r = _t->getUserAndPoint();
            if (_a[0]) *reinterpret_cast< QMap<User*,quint64>*>(_a[0]) = std::move(_r); }  break;
        case 6: { quint64 _r = _t->getStatus();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 7: { quint64 _r = _t->getLevel();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->setId((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1]))); break;
        case 9: _t->setRoomname((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->setOwner((*reinterpret_cast< std::add_pointer_t<User*>>(_a[1]))); break;
        case 11: _t->setStartTime((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->setEndTime((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->setUserAndPoint((*reinterpret_cast< std::add_pointer_t<QMap<User*,quint64>>>(_a[1]))); break;
        case 14: _t->setstatus((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1]))); break;
        case 15: _t->setLevel((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< User* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *Room::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Room::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRoomENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Room::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
