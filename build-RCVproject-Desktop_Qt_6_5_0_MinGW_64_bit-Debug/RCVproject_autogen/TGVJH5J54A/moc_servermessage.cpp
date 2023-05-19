/****************************************************************************
** Meta object code from reading C++ file 'servermessage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../RCVproject/message/servermessage.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'servermessage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSServerMessageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSServerMessageENDCLASS = QtMocHelpers::stringData(
    "ServerMessage",
    "setStatusCode",
    "",
    "StatusCode*",
    "statusCode",
    "setErrorMsg",
    "errorMsg",
    "getStatusCode",
    "getErrorMsg",
    "finalizeMessageObject"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSServerMessageENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[14];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[11];
    char stringdata5[12];
    char stringdata6[9];
    char stringdata7[14];
    char stringdata8[12];
    char stringdata9[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSServerMessageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSServerMessageENDCLASS_t qt_meta_stringdata_CLASSServerMessageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "ServerMessage"
        QT_MOC_LITERAL(14, 13),  // "setStatusCode"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 11),  // "StatusCode*"
        QT_MOC_LITERAL(41, 10),  // "statusCode"
        QT_MOC_LITERAL(52, 11),  // "setErrorMsg"
        QT_MOC_LITERAL(64, 8),  // "errorMsg"
        QT_MOC_LITERAL(73, 13),  // "getStatusCode"
        QT_MOC_LITERAL(87, 11),  // "getErrorMsg"
        QT_MOC_LITERAL(99, 21)   // "finalizeMessageObject"
    },
    "ServerMessage",
    "setStatusCode",
    "",
    "StatusCode*",
    "statusCode",
    "setErrorMsg",
    "errorMsg",
    "getStatusCode",
    "getErrorMsg",
    "finalizeMessageObject"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSServerMessageENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x0a,    1 /* Public */,
       5,    1,   47,    2, 0x0a,    3 /* Public */,
       7,    0,   50,    2, 0x0a,    5 /* Public */,
       8,    0,   51,    2, 0x0a,    6 /* Public */,
       9,    0,   52,    2, 0x0a,    7 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    0x80000000 | 3,
    QMetaType::QString,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ServerMessage::staticMetaObject = { {
    QMetaObject::SuperData::link<Message::staticMetaObject>(),
    qt_meta_stringdata_CLASSServerMessageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSServerMessageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSServerMessageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ServerMessage, std::true_type>,
        // method 'setStatusCode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<StatusCode *, std::false_type>,
        // method 'setErrorMsg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getStatusCode'
        QtPrivate::TypeAndForceComplete<StatusCode *, std::false_type>,
        // method 'getErrorMsg'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'finalizeMessageObject'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ServerMessage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ServerMessage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setStatusCode((*reinterpret_cast< std::add_pointer_t<StatusCode*>>(_a[1]))); break;
        case 1: _t->setErrorMsg((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: { StatusCode* _r = _t->getStatusCode();
            if (_a[0]) *reinterpret_cast< StatusCode**>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->getErrorMsg();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->finalizeMessageObject(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< StatusCode* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *ServerMessage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServerMessage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSServerMessageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Message::qt_metacast(_clname);
}

int ServerMessage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Message::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
