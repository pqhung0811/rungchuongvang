/****************************************************************************
** Meta object code from reading C++ file 'requestprocessing.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../RCVproject/server/core/requestprocessing.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'requestprocessing.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSRequestProcessingENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSRequestProcessingENDCLASS = QtMocHelpers::stringData(
    "RequestProcessing",
    "handle",
    "",
    "login",
    "logout",
    "registers",
    "createRoom",
    "findRoom",
    "QList<Room*>",
    "requestJoinRoom",
    "responseJoinRoom",
    "viewRank",
    "QList<User*>"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRequestProcessingENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[18];
    char stringdata1[7];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[7];
    char stringdata5[10];
    char stringdata6[11];
    char stringdata7[9];
    char stringdata8[13];
    char stringdata9[16];
    char stringdata10[17];
    char stringdata11[9];
    char stringdata12[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRequestProcessingENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRequestProcessingENDCLASS_t qt_meta_stringdata_CLASSRequestProcessingENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "RequestProcessing"
        QT_MOC_LITERAL(18, 6),  // "handle"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 5),  // "login"
        QT_MOC_LITERAL(32, 6),  // "logout"
        QT_MOC_LITERAL(39, 9),  // "registers"
        QT_MOC_LITERAL(49, 10),  // "createRoom"
        QT_MOC_LITERAL(60, 8),  // "findRoom"
        QT_MOC_LITERAL(69, 12),  // "QList<Room*>"
        QT_MOC_LITERAL(82, 15),  // "requestJoinRoom"
        QT_MOC_LITERAL(98, 16),  // "responseJoinRoom"
        QT_MOC_LITERAL(115, 8),  // "viewRank"
        QT_MOC_LITERAL(124, 12)   // "QList<User*>"
    },
    "RequestProcessing",
    "handle",
    "",
    "login",
    "logout",
    "registers",
    "createRoom",
    "findRoom",
    "QList<Room*>",
    "requestJoinRoom",
    "responseJoinRoom",
    "viewRank",
    "QList<User*>"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRequestProcessingENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x0a,    1 /* Public */,
       3,    0,   69,    2, 0x0a,    2 /* Public */,
       4,    0,   70,    2, 0x0a,    3 /* Public */,
       5,    0,   71,    2, 0x0a,    4 /* Public */,
       6,    0,   72,    2, 0x0a,    5 /* Public */,
       7,    0,   73,    2, 0x0a,    6 /* Public */,
       9,    0,   74,    2, 0x0a,    7 /* Public */,
      10,    0,   75,    2, 0x0a,    8 /* Public */,
      11,    0,   76,    2, 0x0a,    9 /* Public */,

 // slots: parameters
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    0x80000000 | 8,
    QMetaType::QString,
    QMetaType::QString,
    0x80000000 | 12,

       0        // eod
};

Q_CONSTINIT const QMetaObject RequestProcessing::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSRequestProcessingENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRequestProcessingENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRequestProcessingENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RequestProcessing, std::true_type>,
        // method 'handle'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'login'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'logout'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'registers'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'createRoom'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'findRoom'
        QtPrivate::TypeAndForceComplete<QList<Room*>, std::false_type>,
        // method 'requestJoinRoom'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'responseJoinRoom'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'viewRank'
        QtPrivate::TypeAndForceComplete<QList<User*>, std::false_type>
    >,
    nullptr
} };

void RequestProcessing::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RequestProcessing *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QString _r = _t->handle();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->login();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->logout();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->registers();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->createRoom();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QList<Room*> _r = _t->findRoom();
            if (_a[0]) *reinterpret_cast< QList<Room*>*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->requestJoinRoom();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: { QString _r = _t->responseJoinRoom();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { QList<User*> _r = _t->viewRank();
            if (_a[0]) *reinterpret_cast< QList<User*>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *RequestProcessing::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RequestProcessing::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRequestProcessingENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RequestProcessing::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
