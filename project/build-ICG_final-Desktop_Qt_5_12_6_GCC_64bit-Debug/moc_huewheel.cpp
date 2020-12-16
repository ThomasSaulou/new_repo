/****************************************************************************
** Meta object code from reading C++ file 'huewheel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Color-harmonization-with-Qt/huewheel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'huewheel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HueWheel_t {
    QByteArrayData data[18];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HueWheel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HueWheel_t qt_meta_stringdata_HueWheel = {
    {
QT_MOC_LITERAL(0, 0, 8), // "HueWheel"
QT_MOC_LITERAL(1, 9, 15), // "fileNameChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 29), // "shiftImageWithSpatialLocality"
QT_MOC_LITERAL(4, 56, 10), // "shiftImage"
QT_MOC_LITERAL(5, 67, 2), // "TV"
QT_MOC_LITERAL(6, 70, 5), // "setTV"
QT_MOC_LITERAL(7, 76, 22), // "computeMostFitTemplate"
QT_MOC_LITERAL(8, 99, 23), // "computeMostFitTemplateX"
QT_MOC_LITERAL(9, 123, 1), // "X"
QT_MOC_LITERAL(10, 125, 12), // "fitTemplateX"
QT_MOC_LITERAL(11, 138, 5), // "scale"
QT_MOC_LITERAL(12, 144, 14), // "updateByThread"
QT_MOC_LITERAL(13, 159, 19), // "updateByThreadShift"
QT_MOC_LITERAL(14, 179, 6), // "margin"
QT_MOC_LITERAL(15, 186, 10), // "wheelWidth"
QT_MOC_LITERAL(16, 197, 4), // "name"
QT_MOC_LITERAL(17, 202, 8) // "fileName"

    },
    "HueWheel\0fileNameChanged\0\0"
    "shiftImageWithSpatialLocality\0shiftImage\0"
    "TV\0setTV\0computeMostFitTemplate\0"
    "computeMostFitTemplateX\0X\0fitTemplateX\0"
    "scale\0updateByThread\0updateByThreadShift\0"
    "margin\0wheelWidth\0name\0fileName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HueWheel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       4,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x02 /* Public */,
       4,    0,   66,    2, 0x02 /* Public */,
       5,    0,   67,    2, 0x02 /* Public */,
       6,    1,   68,    2, 0x02 /* Public */,
       7,    0,   71,    2, 0x02 /* Public */,
       8,    1,   72,    2, 0x02 /* Public */,
      10,    2,   75,    2, 0x02 /* Public */,
      12,    0,   80,    2, 0x02 /* Public */,
      13,    0,   81,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QVariant,
    QMetaType::Void, QMetaType::QVariant,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   11,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      14, QMetaType::Int, 0x00095103,
      15, QMetaType::Int, 0x00095103,
      16, QMetaType::QString, 0x00095103,
      17, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,

       0        // eod
};

void HueWheel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HueWheel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileNameChanged(); break;
        case 1: _t->shiftImageWithSpatialLocality(); break;
        case 2: _t->shiftImage(); break;
        case 3: { QVariant _r = _t->TV();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->setTV((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 5: _t->computeMostFitTemplate(); break;
        case 6: _t->computeMostFitTemplateX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->fitTemplateX((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->updateByThread(); break;
        case 9: _t->updateByThreadShift(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HueWheel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HueWheel::fileNameChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<HueWheel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->margin(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->wheelWidth(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->fileName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<HueWheel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMargin(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setWheelWidth(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setFileName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject HueWheel::staticMetaObject = { {
    &QQuickPaintedItem::staticMetaObject,
    qt_meta_stringdata_HueWheel.data,
    qt_meta_data_HueWheel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HueWheel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HueWheel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HueWheel.stringdata0))
        return static_cast<void*>(this);
    return QQuickPaintedItem::qt_metacast(_clname);
}

int HueWheel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPaintedItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void HueWheel::fileNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
