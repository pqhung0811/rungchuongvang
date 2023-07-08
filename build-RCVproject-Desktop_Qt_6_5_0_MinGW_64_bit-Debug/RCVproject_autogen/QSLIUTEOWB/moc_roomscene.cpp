/****************************************************************************
** Meta object code from reading C++ file 'roomscene.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../RCVproject/scene/roomscene.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'roomscene.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSRoomSceneENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSRoomSceneENDCLASS = QtMocHelpers::stringData(
    "RoomScene",
    "on_playBtn_clicked",
    "",
    "on_label_linkActivated",
    "link",
    "on_level_linkActivated",
    "on_label_2_linkActivated",
    "on_roomname_linkActivated",
    "createVerticalUser",
    "QWidget*",
    "username",
    "rank",
    "addPlayer",
    "verticalUser",
    "row",
    "column"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRoomSceneENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[10];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[5];
    char stringdata5[23];
    char stringdata6[25];
    char stringdata7[26];
    char stringdata8[19];
    char stringdata9[9];
    char stringdata10[9];
    char stringdata11[5];
    char stringdata12[10];
    char stringdata13[13];
    char stringdata14[4];
    char stringdata15[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRoomSceneENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRoomSceneENDCLASS_t qt_meta_stringdata_CLASSRoomSceneENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "RoomScene"
        QT_MOC_LITERAL(10, 18),  // "on_playBtn_clicked"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 22),  // "on_label_linkActivated"
        QT_MOC_LITERAL(53, 4),  // "link"
        QT_MOC_LITERAL(58, 22),  // "on_level_linkActivated"
        QT_MOC_LITERAL(81, 24),  // "on_label_2_linkActivated"
        QT_MOC_LITERAL(106, 25),  // "on_roomname_linkActivated"
        QT_MOC_LITERAL(132, 18),  // "createVerticalUser"
        QT_MOC_LITERAL(151, 8),  // "QWidget*"
        QT_MOC_LITERAL(160, 8),  // "username"
        QT_MOC_LITERAL(169, 4),  // "rank"
        QT_MOC_LITERAL(174, 9),  // "addPlayer"
        QT_MOC_LITERAL(184, 12),  // "verticalUser"
        QT_MOC_LITERAL(197, 3),  // "row"
        QT_MOC_LITERAL(201, 6)   // "column"
    },
    "RoomScene",
    "on_playBtn_clicked",
    "",
    "on_label_linkActivated",
    "link",
    "on_level_linkActivated",
    "on_label_2_linkActivated",
    "on_roomname_linkActivated",
    "createVerticalUser",
    "QWidget*",
    "username",
    "rank",
    "addPlayer",
    "verticalUser",
    "row",
    "column"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRoomSceneENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    1,   57,    2, 0x0a,    2 /* Public */,
       5,    1,   60,    2, 0x0a,    4 /* Public */,
       6,    1,   63,    2, 0x0a,    6 /* Public */,
       7,    1,   66,    2, 0x0a,    8 /* Public */,
       8,    2,   69,    2, 0x0a,   10 /* Public */,
      12,    3,   74,    2, 0x0a,   13 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    0x80000000 | 9, QMetaType::QString, QMetaType::QString,   10,   11,
    QMetaType::Void, 0x80000000 | 9, QMetaType::ULongLong, QMetaType::ULongLong,   13,   14,   15,

       0        // eod
};

Q_CONSTINIT const QMetaObject RoomScene::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSRoomSceneENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRoomSceneENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRoomSceneENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RoomScene, std::true_type>,
        // method 'on_playBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_label_linkActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_level_linkActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_label_2_linkActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_roomname_linkActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'createVerticalUser'
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'addPlayer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>
    >,
    nullptr
} };

void RoomScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RoomScene *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_playBtn_clicked(); break;
        case 1: _t->on_label_linkActivated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->on_level_linkActivated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->on_label_2_linkActivated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->on_roomname_linkActivated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: { QWidget* _r = _t->createVerticalUser((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = std::move(_r); }  break;
        case 6: _t->addPlayer((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint64>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<quint64>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *RoomScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RoomScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRoomSceneENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int RoomScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
