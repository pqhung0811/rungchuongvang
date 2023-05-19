/****************************************************************************
** Meta object code from reading C++ file 'attachment.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../RCVproject/protocol/attachment.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'attachment.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAttachmentENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSAttachmentENDCLASS = QtMocHelpers::stringData(
    "Attachment",
    "getAttachmentID",
    "",
    "setAttachmentID",
    "id",
    "getSendMessage",
    "getReturnMessage",
    "setReturnMessage",
    "retMsg",
    "getActive",
    "QAtomicInt",
    "getSocket",
    "QAbstractSocket*",
    "setSocket",
    "sock"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAttachmentENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[11];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[3];
    char stringdata5[15];
    char stringdata6[17];
    char stringdata7[17];
    char stringdata8[7];
    char stringdata9[10];
    char stringdata10[11];
    char stringdata11[10];
    char stringdata12[17];
    char stringdata13[10];
    char stringdata14[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAttachmentENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAttachmentENDCLASS_t qt_meta_stringdata_CLASSAttachmentENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "Attachment"
        QT_MOC_LITERAL(11, 15),  // "getAttachmentID"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 15),  // "setAttachmentID"
        QT_MOC_LITERAL(44, 2),  // "id"
        QT_MOC_LITERAL(47, 14),  // "getSendMessage"
        QT_MOC_LITERAL(62, 16),  // "getReturnMessage"
        QT_MOC_LITERAL(79, 16),  // "setReturnMessage"
        QT_MOC_LITERAL(96, 6),  // "retMsg"
        QT_MOC_LITERAL(103, 9),  // "getActive"
        QT_MOC_LITERAL(113, 10),  // "QAtomicInt"
        QT_MOC_LITERAL(124, 9),  // "getSocket"
        QT_MOC_LITERAL(134, 16),  // "QAbstractSocket*"
        QT_MOC_LITERAL(151, 9),  // "setSocket"
        QT_MOC_LITERAL(161, 4)   // "sock"
    },
    "Attachment",
    "getAttachmentID",
    "",
    "setAttachmentID",
    "id",
    "getSendMessage",
    "getReturnMessage",
    "setReturnMessage",
    "retMsg",
    "getActive",
    "QAtomicInt",
    "getSocket",
    "QAbstractSocket*",
    "setSocket",
    "sock"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAttachmentENDCLASS[] = {

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
       1,    0,   62,    2, 0x0a,    1 /* Public */,
       3,    1,   63,    2, 0x0a,    2 /* Public */,
       5,    0,   66,    2, 0x0a,    4 /* Public */,
       6,    0,   67,    2, 0x0a,    5 /* Public */,
       7,    1,   68,    2, 0x0a,    6 /* Public */,
       9,    0,   71,    2, 0x0a,    8 /* Public */,
      11,    0,   72,    2, 0x0a,    9 /* Public */,
      13,    1,   73,    2, 0x0a,   10 /* Public */,

 // slots: parameters
    QMetaType::ULongLong,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    8,
    0x80000000 | 10,
    0x80000000 | 12,
    QMetaType::Void, 0x80000000 | 12,   14,

       0        // eod
};

Q_CONSTINIT const QMetaObject Attachment::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSAttachmentENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAttachmentENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAttachmentENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Attachment, std::true_type>,
        // method 'getAttachmentID'
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'setAttachmentID'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getSendMessage'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getReturnMessage'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setReturnMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getActive'
        QtPrivate::TypeAndForceComplete<QAtomicInt, std::false_type>,
        // method 'getSocket'
        QtPrivate::TypeAndForceComplete<QAbstractSocket *, std::false_type>,
        // method 'setSocket'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket *, std::false_type>
    >,
    nullptr
} };

void Attachment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Attachment *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { quint64 _r = _t->getAttachmentID();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->setAttachmentID((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: { QString _r = _t->getSendMessage();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->getReturnMessage();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->setReturnMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: { QAtomicInt _r = _t->getActive();
            if (_a[0]) *reinterpret_cast< QAtomicInt*>(_a[0]) = std::move(_r); }  break;
        case 6: { QAbstractSocket* _r = _t->getSocket();
            if (_a[0]) *reinterpret_cast< QAbstractSocket**>(_a[0]) = std::move(_r); }  break;
        case 7: _t->setSocket((*reinterpret_cast< std::add_pointer_t<QAbstractSocket*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *Attachment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Attachment::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAttachmentENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Attachment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
