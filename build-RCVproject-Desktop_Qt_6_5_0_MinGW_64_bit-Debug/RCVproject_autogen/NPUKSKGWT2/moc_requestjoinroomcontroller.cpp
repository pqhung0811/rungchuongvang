/****************************************************************************
** Meta object code from reading C++ file 'requestjoinroomcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../RCVproject/controller/requestjoinroomcontroller.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'requestjoinroomcontroller.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSRequestJoinRoomControllerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSRequestJoinRoomControllerENDCLASS = QtMocHelpers::stringData(
    "RequestJoinRoomController",
    "requestJoin",
    "",
    "responseJoin",
    "userId",
    "roomId",
    "reply"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRequestJoinRoomControllerENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[26];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[7];
    char stringdata5[7];
    char stringdata6[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRequestJoinRoomControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRequestJoinRoomControllerENDCLASS_t qt_meta_stringdata_CLASSRequestJoinRoomControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 25),  // "RequestJoinRoomController"
        QT_MOC_LITERAL(26, 11),  // "requestJoin"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 12),  // "responseJoin"
        QT_MOC_LITERAL(52, 6),  // "userId"
        QT_MOC_LITERAL(59, 6),  // "roomId"
        QT_MOC_LITERAL(66, 5)   // "reply"
    },
    "RequestJoinRoomController",
    "requestJoin",
    "",
    "responseJoin",
    "userId",
    "roomId",
    "reply"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRequestJoinRoomControllerENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x0a,    1 /* Public */,
       3,    3,   27,    2, 0x0a,    2 /* Public */,

 // slots: parameters
    QMetaType::QString,
    QMetaType::QString, QMetaType::ULongLong, QMetaType::ULongLong, QMetaType::UChar,    4,    5,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject RequestJoinRoomController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSRequestJoinRoomControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRequestJoinRoomControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRequestJoinRoomControllerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RequestJoinRoomController, std::true_type>,
        // method 'requestJoin'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'responseJoin'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint8, std::false_type>
    >,
    nullptr
} };

void RequestJoinRoomController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RequestJoinRoomController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QString _r = _t->requestJoin();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->responseJoin((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint64>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<quint8>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *RequestJoinRoomController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RequestJoinRoomController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRequestJoinRoomControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RequestJoinRoomController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
