/****************************************************************************
** Meta object code from reading C++ file 'homescene.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../RCVproject/scene/homescene.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'homescene.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSHomeSceneENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSHomeSceneENDCLASS = QtMocHelpers::stringData(
    "HomeScene",
    "on_createRoomBtn_clicked",
    "",
    "on_findRoomBtn_clicked",
    "handleFindRoomResponse",
    "response",
    "handleViewRankResponse",
    "on_rankBtn_clicked",
    "on_label_2_linkActivated",
    "link",
    "on_label_3_linkActivated"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSHomeSceneENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[10];
    char stringdata1[25];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[23];
    char stringdata5[9];
    char stringdata6[23];
    char stringdata7[19];
    char stringdata8[25];
    char stringdata9[5];
    char stringdata10[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSHomeSceneENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSHomeSceneENDCLASS_t qt_meta_stringdata_CLASSHomeSceneENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "HomeScene"
        QT_MOC_LITERAL(10, 24),  // "on_createRoomBtn_clicked"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 22),  // "on_findRoomBtn_clicked"
        QT_MOC_LITERAL(59, 22),  // "handleFindRoomResponse"
        QT_MOC_LITERAL(82, 8),  // "response"
        QT_MOC_LITERAL(91, 22),  // "handleViewRankResponse"
        QT_MOC_LITERAL(114, 18),  // "on_rankBtn_clicked"
        QT_MOC_LITERAL(133, 24),  // "on_label_2_linkActivated"
        QT_MOC_LITERAL(158, 4),  // "link"
        QT_MOC_LITERAL(163, 24)   // "on_label_3_linkActivated"
    },
    "HomeScene",
    "on_createRoomBtn_clicked",
    "",
    "on_findRoomBtn_clicked",
    "handleFindRoomResponse",
    "response",
    "handleViewRankResponse",
    "on_rankBtn_clicked",
    "on_label_2_linkActivated",
    "link",
    "on_label_3_linkActivated"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSHomeSceneENDCLASS[] = {

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
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    1,   58,    2, 0x08,    3 /* Private */,
       6,    1,   61,    2, 0x08,    5 /* Private */,
       7,    0,   64,    2, 0x08,    7 /* Private */,
       8,    1,   65,    2, 0x0a,    8 /* Public */,
      10,    1,   68,    2, 0x0a,   10 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonDocument,    5,
    QMetaType::Void, QMetaType::QJsonDocument,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject HomeScene::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSHomeSceneENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSHomeSceneENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSHomeSceneENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<HomeScene, std::true_type>,
        // method 'on_createRoomBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_findRoomBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleFindRoomResponse'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>,
        // method 'handleViewRankResponse'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>,
        // method 'on_rankBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_label_2_linkActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_label_3_linkActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void HomeScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HomeScene *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_createRoomBtn_clicked(); break;
        case 1: _t->on_findRoomBtn_clicked(); break;
        case 2: _t->handleFindRoomResponse((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1]))); break;
        case 3: _t->handleViewRankResponse((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1]))); break;
        case 4: _t->on_rankBtn_clicked(); break;
        case 5: _t->on_label_2_linkActivated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->on_label_3_linkActivated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *HomeScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HomeScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSHomeSceneENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int HomeScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
