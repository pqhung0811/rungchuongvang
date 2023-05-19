/****************************************************************************
** Meta object code from reading C++ file 'statuscode.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../RCVproject/protocol/statuscode.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statuscode.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSStatusCodeENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSStatusCodeENDCLASS = QtMocHelpers::stringData(
    "StatusCode",
    "getStatus",
    "Status",
    "",
    "setStatus",
    "newStatus",
    "getStatusCodeString",
    "toStatusCode",
    "inputString",
    "SUCCESS",
    "ERROR"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSStatusCodeENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[11];
    char stringdata1[10];
    char stringdata2[7];
    char stringdata3[1];
    char stringdata4[10];
    char stringdata5[10];
    char stringdata6[20];
    char stringdata7[13];
    char stringdata8[12];
    char stringdata9[8];
    char stringdata10[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSStatusCodeENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSStatusCodeENDCLASS_t qt_meta_stringdata_CLASSStatusCodeENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "StatusCode"
        QT_MOC_LITERAL(11, 9),  // "getStatus"
        QT_MOC_LITERAL(21, 6),  // "Status"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 9),  // "setStatus"
        QT_MOC_LITERAL(39, 9),  // "newStatus"
        QT_MOC_LITERAL(49, 19),  // "getStatusCodeString"
        QT_MOC_LITERAL(69, 12),  // "toStatusCode"
        QT_MOC_LITERAL(82, 11),  // "inputString"
        QT_MOC_LITERAL(94, 7),  // "SUCCESS"
        QT_MOC_LITERAL(102, 5)   // "ERROR"
    },
    "StatusCode",
    "getStatus",
    "Status",
    "",
    "setStatus",
    "newStatus",
    "getStatusCodeString",
    "toStatusCode",
    "inputString",
    "SUCCESS",
    "ERROR"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSStatusCodeENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       1,   46, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    3, 0x10a,    1 /* Public | MethodIsConst  */,
       4,    1,   39,    3, 0x0a,    2 /* Public */,
       6,    0,   42,    3, 0x0a,    4 /* Public */,
       7,    1,   43,    3, 0x0a,    5 /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    5,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    8,

 // enums: name, alias, flags, count, data
       2,    2, 0x0,    2,   51,

 // enum data: key, value
       9, uint(StatusCode::SUCCESS),
      10, uint(StatusCode::ERROR),

       0        // eod
};

Q_CONSTINIT const QMetaObject StatusCode::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSStatusCodeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSStatusCodeENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSStatusCodeENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<StatusCode, std::true_type>,
        // method 'getStatus'
        QtPrivate::TypeAndForceComplete<Status, std::false_type>,
        // method 'setStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Status, std::false_type>,
        // method 'getStatusCodeString'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'toStatusCode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void StatusCode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StatusCode *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { Status _r = _t->getStatus();
            if (_a[0]) *reinterpret_cast< Status*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->setStatus((*reinterpret_cast< std::add_pointer_t<Status>>(_a[1]))); break;
        case 2: { QString _r = _t->getStatusCodeString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->toStatusCode((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *StatusCode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatusCode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSStatusCodeENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StatusCode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
