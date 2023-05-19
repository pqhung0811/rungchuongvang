/****************************************************************************
** Meta object code from reading C++ file 'user.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../RCVproject/entity/user.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'user.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSUserENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSUserENDCLASS = QtMocHelpers::stringData(
    "User",
    "getId",
    "",
    "getUsername",
    "getPassword",
    "getRankScore",
    "getRank",
    "setId",
    "id",
    "setUsername",
    "username",
    "setPassword",
    "password",
    "setRankScore",
    "rankScore",
    "setRank",
    "rank"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSUserENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[5];
    char stringdata1[6];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[12];
    char stringdata5[13];
    char stringdata6[8];
    char stringdata7[6];
    char stringdata8[3];
    char stringdata9[12];
    char stringdata10[9];
    char stringdata11[12];
    char stringdata12[9];
    char stringdata13[13];
    char stringdata14[10];
    char stringdata15[8];
    char stringdata16[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSUserENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSUserENDCLASS_t qt_meta_stringdata_CLASSUserENDCLASS = {
    {
        QT_MOC_LITERAL(0, 4),  // "User"
        QT_MOC_LITERAL(5, 5),  // "getId"
        QT_MOC_LITERAL(11, 0),  // ""
        QT_MOC_LITERAL(12, 11),  // "getUsername"
        QT_MOC_LITERAL(24, 11),  // "getPassword"
        QT_MOC_LITERAL(36, 12),  // "getRankScore"
        QT_MOC_LITERAL(49, 7),  // "getRank"
        QT_MOC_LITERAL(57, 5),  // "setId"
        QT_MOC_LITERAL(63, 2),  // "id"
        QT_MOC_LITERAL(66, 11),  // "setUsername"
        QT_MOC_LITERAL(78, 8),  // "username"
        QT_MOC_LITERAL(87, 11),  // "setPassword"
        QT_MOC_LITERAL(99, 8),  // "password"
        QT_MOC_LITERAL(108, 12),  // "setRankScore"
        QT_MOC_LITERAL(121, 9),  // "rankScore"
        QT_MOC_LITERAL(131, 7),  // "setRank"
        QT_MOC_LITERAL(139, 4)   // "rank"
    },
    "User",
    "getId",
    "",
    "getUsername",
    "getPassword",
    "getRankScore",
    "getRank",
    "setId",
    "id",
    "setUsername",
    "username",
    "setPassword",
    "password",
    "setRankScore",
    "rankScore",
    "setRank",
    "rank"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSUserENDCLASS[] = {

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
       6,    0,   78,    2, 0x0a,    5 /* Public */,
       7,    1,   79,    2, 0x0a,    6 /* Public */,
       9,    1,   82,    2, 0x0a,    8 /* Public */,
      11,    1,   85,    2, 0x0a,   10 /* Public */,
      13,    1,   88,    2, 0x0a,   12 /* Public */,
      15,    1,   91,    2, 0x0a,   14 /* Public */,

 // slots: parameters
    QMetaType::ULongLong,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::ULongLong,
    QMetaType::ULongLong,
    QMetaType::Void, QMetaType::ULongLong,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::ULongLong,   14,
    QMetaType::Void, QMetaType::ULongLong,   16,

       0        // eod
};

Q_CONSTINIT const QMetaObject User::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSUserENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSUserENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSUserENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<User, std::true_type>,
        // method 'getId'
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'getUsername'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getPassword'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getRankScore'
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'getRank'
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'setId'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'setUsername'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setPassword'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setRankScore'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'setRank'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>
    >,
    nullptr
} };

void User::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<User *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { quint64 _r = _t->getId();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->getUsername();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->getPassword();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { quint64 _r = _t->getRankScore();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 4: { quint64 _r = _t->getRank();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->setId((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1]))); break;
        case 6: _t->setUsername((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->setPassword((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->setRankScore((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1]))); break;
        case 9: _t->setRank((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *User::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *User::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSUserENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int User::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
