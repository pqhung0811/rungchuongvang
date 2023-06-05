/****************************************************************************
** Meta object code from reading C++ file 'responsebody.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../RCVproject/protocol/responsebody.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'responsebody.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSResponseBodyENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSResponseBodyENDCLASS = QtMocHelpers::stringData(
    "ResponseBody",
    "setResponseBody",
    "",
    "responseBody",
    "getResponseBody",
    "createLoginBody",
    "id",
    "username",
    "ranked",
    "rankScore",
    "createLogoutBody"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSResponseBodyENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[13];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[16];
    char stringdata5[16];
    char stringdata6[3];
    char stringdata7[9];
    char stringdata8[7];
    char stringdata9[10];
    char stringdata10[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSResponseBodyENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSResponseBodyENDCLASS_t qt_meta_stringdata_CLASSResponseBodyENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "ResponseBody"
        QT_MOC_LITERAL(13, 15),  // "setResponseBody"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 12),  // "responseBody"
        QT_MOC_LITERAL(43, 15),  // "getResponseBody"
        QT_MOC_LITERAL(59, 15),  // "createLoginBody"
        QT_MOC_LITERAL(75, 2),  // "id"
        QT_MOC_LITERAL(78, 8),  // "username"
        QT_MOC_LITERAL(87, 6),  // "ranked"
        QT_MOC_LITERAL(94, 9),  // "rankScore"
        QT_MOC_LITERAL(104, 16)   // "createLogoutBody"
    },
    "ResponseBody",
    "setResponseBody",
    "",
    "responseBody",
    "getResponseBody",
    "createLoginBody",
    "id",
    "username",
    "ranked",
    "rankScore",
    "createLogoutBody"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSResponseBodyENDCLASS[] = {

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
       1,    1,   38,    2, 0x0a,    1 /* Public */,
       4,    0,   41,    2, 0x0a,    3 /* Public */,
       5,    4,   42,    2, 0x0a,    4 /* Public */,
      10,    2,   51,    2, 0x0a,    9 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonObject,    3,
    QMetaType::QJsonObject,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::QString, QMetaType::ULongLong, QMetaType::ULongLong,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::QString,    6,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject ResponseBody::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSResponseBodyENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSResponseBodyENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSResponseBodyENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ResponseBody, std::true_type>,
        // method 'setResponseBody'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>,
        // method 'getResponseBody'
        QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>,
        // method 'createLoginBody'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'createLogoutBody'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void ResponseBody::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ResponseBody *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setResponseBody((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 1: { QJsonObject _r = _t->getResponseBody();
            if (_a[0]) *reinterpret_cast< QJsonObject*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->createLoginBody((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<quint64>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<quint64>>(_a[4]))); break;
        case 3: _t->createLogoutBody((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *ResponseBody::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ResponseBody::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSResponseBodyENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ResponseBody::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
