/****************************************************************************
** Meta object code from reading C++ file 'myimage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Color-harmonization-with-Qt/myimage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myimage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyImage_t {
    QByteArrayData data[14];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyImage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyImage_t qt_meta_stringdata_MyImage = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MyImage"
QT_MOC_LITERAL(1, 8, 15), // "fileNameChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "shiftImage"
QT_MOC_LITERAL(4, 36, 29), // "shiftImageWithSpatialLocality"
QT_MOC_LITERAL(5, 66, 2), // "TV"
QT_MOC_LITERAL(6, 69, 5), // "setTV"
QT_MOC_LITERAL(7, 75, 6), // "reload"
QT_MOC_LITERAL(8, 82, 10), // "openCamera"
QT_MOC_LITERAL(9, 93, 10), // "setSurface"
QT_MOC_LITERAL(10, 104, 14), // "changeFileName"
QT_MOC_LITERAL(11, 119, 8), // "fileName"
QT_MOC_LITERAL(12, 128, 19), // "updateByThreadShift"
QT_MOC_LITERAL(13, 148, 4) // "name"

    },
    "MyImage\0fileNameChanged\0\0shiftImage\0"
    "shiftImageWithSpatialLocality\0TV\0setTV\0"
    "reload\0openCamera\0setSurface\0"
    "changeFileName\0fileName\0updateByThreadShift\0"
    "name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyImage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       2,   78, // properties
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
       8,    0,   72,    2, 0x02 /* Public */,
       9,    0,   73,    2, 0x02 /* Public */,
      10,    1,   74,    2, 0x02 /* Public */,
      12,    0,   77,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QVariant,
    QMetaType::Void, QMetaType::QVariant,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,

 // properties: name, type, flags
      13, QMetaType::QString, 0x00095103,
      11, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void MyImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyImage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileNameChanged(); break;
        case 1: _t->shiftImage(); break;
        case 2: _t->shiftImageWithSpatialLocality(); break;
        case 3: { QVariant _r = _t->TV();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->setTV((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 5: _t->reload(); break;
        case 6: _t->openCamera(); break;
        case 7: _t->setSurface(); break;
        case 8: _t->changeFileName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->updateByThreadShift(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyImage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyImage::fileNameChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MyImage *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->fileName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MyImage *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setFileName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MyImage::staticMetaObject = { {
    &QQuickPaintedItem::staticMetaObject,
    qt_meta_stringdata_MyImage.data,
    qt_meta_data_MyImage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyImage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyImage.stringdata0))
        return static_cast<void*>(this);
    return QQuickPaintedItem::qt_metacast(_clname);
}

int MyImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MyImage::fileNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
