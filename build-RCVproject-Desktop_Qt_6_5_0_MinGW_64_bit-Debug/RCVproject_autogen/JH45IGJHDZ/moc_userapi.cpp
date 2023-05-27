/****************************************************************************
** Meta object code from reading C++ file 'userapi.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../RCVproject/api/userapi.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userapi.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSUserAPIENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSUserAPIENDCLASS = QtMocHelpers::stringData(
    "UserAPI",
    "getAllUsers",
    "QList<User*>",
    "",
    "getUserByNameAndPass",
    "User*",
    "name",
    "pass",
    "addUser",
    "getAllUsernames",
    "getUserbyId",
    "id",
    "getUserbyUsername",
    "updateRankscoreAndRanked",
    "rankscore",
    "rank",
    "updateRoomId",
    "roomId"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSUserAPIENDCLASS_t {
    uint offsetsAndSizes[36];
    char stringdata0[8];
    char stringdata1[12];
    char stringdata2[13];
    char stringdata3[1];
    char stringdata4[21];
    char stringdata5[6];
    char stringdata6[5];
    char stringdata7[5];
    char stringdata8[8];
    char stringdata9[16];
    char stringdata10[12];
    char stringdata11[3];
    char stringdata12[18];
    char stringdata13[25];
    char stringdata14[10];
    char stringdata15[5];
    char stringdata16[13];
    char stringdata17[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSUserAPIENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSUserAPIENDCLASS_t qt_meta_stringdata_CLASSUserAPIENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "UserAPI"
        QT_MOC_LITERAL(8, 11),  // "getAllUsers"
        QT_MOC_LITERAL(20, 12),  // "QList<User*>"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 20),  // "getUserByNameAndPass"
        QT_MOC_LITERAL(55, 5),  // "User*"
        QT_MOC_LITERAL(61, 4),  // "name"
        QT_MOC_LITERAL(66, 4),  // "pass"
        QT_MOC_LITERAL(71, 7),  // "addUser"
        QT_MOC_LITERAL(79, 15),  // "getAllUsernames"
        QT_MOC_LITERAL(95, 11),  // "getUserbyId"
        QT_MOC_LITERAL(107, 2),  // "id"
        QT_MOC_LITERAL(110, 17),  // "getUserbyUsername"
        QT_MOC_LITERAL(128, 24),  // "updateRankscoreAndRanked"
        QT_MOC_LITERAL(153, 9),  // "rankscore"
        QT_MOC_LITERAL(163, 4),  // "rank"
        QT_MOC_LITERAL(168, 12),  // "updateRoomId"
        QT_MOC_LITERAL(181, 6)   // "roomId"
    },
    "UserAPI",
    "getAllUsers",
    "QList<User*>",
    "",
    "getUserByNameAndPass",
    "User*",
    "name",
    "pass",
    "addUser",
    "getAllUsernames",
    "getUserbyId",
    "id",
    "getUserbyUsername",
    "updateRankscoreAndRanked",
    "rankscore",
    "rank",
    "updateRoomId",
    "roomId"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSUserAPIENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    3, 0x0a,    1 /* Public */,
       4,    2,   63,    3, 0x0a,    2 /* Public */,
       8,    2,   68,    3, 0x0a,    5 /* Public */,
       9,    0,   73,    3, 0x0a,    8 /* Public */,
      10,    1,   74,    3, 0x0a,    9 /* Public */,
      12,    1,   77,    3, 0x0a,   11 /* Public */,
      13,    3,   80,    3, 0x0a,   13 /* Public */,
      16,    2,   87,    3, 0x0a,   17 /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 5, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::QStringList,
    0x80000000 | 5, QMetaType::ULongLong,   11,
    0x80000000 | 5, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong, QMetaType::ULongLong,   14,   15,   11,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,   17,   11,

       0        // eod
};

Q_CONSTINIT const QMetaObject UserAPI::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSUserAPIENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSUserAPIENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSUserAPIENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UserAPI, std::true_type>,
        // method 'getAllUsers'
        QtPrivate::TypeAndForceComplete<QList<User*>, std::false_type>,
        // method 'getUserByNameAndPass'
        QtPrivate::TypeAndForceComplete<User *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'addUser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getAllUsernames'
        QtPrivate::TypeAndForceComplete<QList<QString>, std::false_type>,
        // method 'getUserbyId'
        QtPrivate::TypeAndForceComplete<User *, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'getUserbyUsername'
        QtPrivate::TypeAndForceComplete<User *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'updateRankscoreAndRanked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'updateRoomId'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>
    >,
    nullptr
} };

void UserAPI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserAPI *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QList<User*> _r = _t->getAllUsers();
            if (_a[0]) *reinterpret_cast< QList<User*>*>(_a[0]) = std::move(_r); }  break;
        case 1: { User* _r = _t->getUserByNameAndPass((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< User**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->addUser((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: { QList<QString> _r = _t->getAllUsernames();
            if (_a[0]) *reinterpret_cast< QList<QString>*>(_a[0]) = std::move(_r); }  break;
        case 4: { User* _r = _t->getUserbyId((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])));
            if (_a[0]) *reinterpret_cast< User**>(_a[0]) = std::move(_r); }  break;
        case 5: { User* _r = _t->getUserbyUsername((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< User**>(_a[0]) = std::move(_r); }  break;
        case 6: _t->updateRankscoreAndRanked((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint64>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<quint64>>(_a[3]))); break;
        case 7: _t->updateRoomId((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint64>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *UserAPI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserAPI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSUserAPIENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UserAPI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
