/****************************************************************************
** Meta object code from reading C++ file 'clientcore.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../RCVproject/client/core/clientcore.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientcore.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSClientCoreENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSClientCoreENDCLASS = QtMocHelpers::stringData(
    "ClientCore",
    "start",
    "",
    "onConnected",
    "onReadyRead",
    "onDisconnected",
    "login",
    "username",
    "password",
    "sendRequest",
    "strMsgToSend",
    "logout",
    "id",
    "registers",
    "createRoom",
    "roomname",
    "ownerId",
    "ranked",
    "rankScore",
    "requestJoinRoom",
    "userId",
    "roomId"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSClientCoreENDCLASS_t {
    uint offsetsAndSizes[44];
    char stringdata0[11];
    char stringdata1[6];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[12];
    char stringdata5[15];
    char stringdata6[6];
    char stringdata7[9];
    char stringdata8[9];
    char stringdata9[12];
    char stringdata10[13];
    char stringdata11[7];
    char stringdata12[3];
    char stringdata13[10];
    char stringdata14[11];
    char stringdata15[9];
    char stringdata16[8];
    char stringdata17[7];
    char stringdata18[10];
    char stringdata19[16];
    char stringdata20[7];
    char stringdata21[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSClientCoreENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSClientCoreENDCLASS_t qt_meta_stringdata_CLASSClientCoreENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "ClientCore"
        QT_MOC_LITERAL(11, 5),  // "start"
        QT_MOC_LITERAL(17, 0),  // ""
        QT_MOC_LITERAL(18, 11),  // "onConnected"
        QT_MOC_LITERAL(30, 11),  // "onReadyRead"
        QT_MOC_LITERAL(42, 14),  // "onDisconnected"
        QT_MOC_LITERAL(57, 5),  // "login"
        QT_MOC_LITERAL(63, 8),  // "username"
        QT_MOC_LITERAL(72, 8),  // "password"
        QT_MOC_LITERAL(81, 11),  // "sendRequest"
        QT_MOC_LITERAL(93, 12),  // "strMsgToSend"
        QT_MOC_LITERAL(106, 6),  // "logout"
        QT_MOC_LITERAL(113, 2),  // "id"
        QT_MOC_LITERAL(116, 9),  // "registers"
        QT_MOC_LITERAL(126, 10),  // "createRoom"
        QT_MOC_LITERAL(137, 8),  // "roomname"
        QT_MOC_LITERAL(146, 7),  // "ownerId"
        QT_MOC_LITERAL(154, 6),  // "ranked"
        QT_MOC_LITERAL(161, 9),  // "rankScore"
        QT_MOC_LITERAL(171, 15),  // "requestJoinRoom"
        QT_MOC_LITERAL(187, 6),  // "userId"
        QT_MOC_LITERAL(194, 6)   // "roomId"
    },
    "ClientCore",
    "start",
    "",
    "onConnected",
    "onReadyRead",
    "onDisconnected",
    "login",
    "username",
    "password",
    "sendRequest",
    "strMsgToSend",
    "logout",
    "id",
    "registers",
    "createRoom",
    "roomname",
    "ownerId",
    "ranked",
    "rankScore",
    "requestJoinRoom",
    "userId",
    "roomId"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSClientCoreENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x0a,    1 /* Public */,
       3,    0,   75,    2, 0x0a,    2 /* Public */,
       4,    0,   76,    2, 0x0a,    3 /* Public */,
       5,    0,   77,    2, 0x0a,    4 /* Public */,
       6,    2,   78,    2, 0x0a,    5 /* Public */,
       9,    1,   83,    2, 0x0a,    8 /* Public */,
      11,    2,   86,    2, 0x0a,   10 /* Public */,
      13,    2,   91,    2, 0x0a,   13 /* Public */,
      14,    5,   96,    2, 0x0a,   16 /* Public */,
      19,    2,  107,    2, 0x0a,   22 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::QString,   12,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::ULongLong, QMetaType::QString, QMetaType::ULongLong, QMetaType::ULongLong,   15,   16,    7,   17,   18,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,   20,   21,

       0        // eod
};

Q_CONSTINIT const QMetaObject ClientCore::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSClientCoreENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSClientCoreENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSClientCoreENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ClientCore, std::true_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onReadyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'login'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'sendRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'logout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'registers'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'createRoom'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'requestJoinRoom'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>
    >,
    nullptr
} };

void ClientCore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientCore *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->start(); break;
        case 1: _t->onConnected(); break;
        case 2: _t->onReadyRead(); break;
        case 3: _t->onDisconnected(); break;
        case 4: _t->login((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->sendRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->logout((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 7: _t->registers((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 8: _t->createRoom((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint64>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<quint64>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<quint64>>(_a[5]))); break;
        case 9: _t->requestJoinRoom((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint64>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *ClientCore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientCore::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSClientCoreENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ClientCore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
