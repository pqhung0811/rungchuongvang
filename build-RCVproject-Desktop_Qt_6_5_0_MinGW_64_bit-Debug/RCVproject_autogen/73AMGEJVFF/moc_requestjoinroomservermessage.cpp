/****************************************************************************
** Meta object code from reading C++ file 'requestjoinroomservermessage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../RCVproject/message/requestjoinroom/requestjoinroomservermessage.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'requestjoinroomservermessage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSRequestJoinRoomServerMessageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSRequestJoinRoomServerMessageENDCLASS = QtMocHelpers::stringData(
    "RequestJoinRoomServerMessage"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRequestJoinRoomServerMessageENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRequestJoinRoomServerMessageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRequestJoinRoomServerMessageENDCLASS_t qt_meta_stringdata_CLASSRequestJoinRoomServerMessageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 28)   // "RequestJoinRoomServerMessage"
    },
    "RequestJoinRoomServerMessage"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRequestJoinRoomServerMessageENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject RequestJoinRoomServerMessage::staticMetaObject = { {
    QMetaObject::SuperData::link<ServerMessage::staticMetaObject>(),
    qt_meta_stringdata_CLASSRequestJoinRoomServerMessageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRequestJoinRoomServerMessageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRequestJoinRoomServerMessageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RequestJoinRoomServerMessage, std::true_type>
    >,
    nullptr
} };

void RequestJoinRoomServerMessage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *RequestJoinRoomServerMessage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RequestJoinRoomServerMessage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRequestJoinRoomServerMessageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ServerMessage::qt_metacast(_clname);
}

int RequestJoinRoomServerMessage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ServerMessage::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
