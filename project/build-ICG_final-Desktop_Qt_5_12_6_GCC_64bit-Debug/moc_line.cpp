/****************************************************************************
** Meta object code from reading C++ file 'line.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Color-harmonization-with-Qt/line.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'line.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Line_t {
    QByteArrayData data[14];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Line_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Line_t qt_meta_stringdata_Line = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Line"
QT_MOC_LITERAL(1, 5, 9), // "x1Changed"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 9), // "y1Changed"
QT_MOC_LITERAL(4, 26, 9), // "x2Changed"
QT_MOC_LITERAL(5, 36, 9), // "y2Changed"
QT_MOC_LITERAL(6, 46, 12), // "colorChanged"
QT_MOC_LITERAL(7, 59, 15), // "penWidthChanged"
QT_MOC_LITERAL(8, 75, 2), // "x1"
QT_MOC_LITERAL(9, 78, 2), // "y1"
QT_MOC_LITERAL(10, 81, 2), // "x2"
QT_MOC_LITERAL(11, 84, 2), // "y2"
QT_MOC_LITERAL(12, 87, 5), // "color"
QT_MOC_LITERAL(13, 93, 8) // "penWidth"

    },
    "Line\0x1Changed\0\0y1Changed\0x2Changed\0"
    "y2Changed\0colorChanged\0penWidthChanged\0"
    "x1\0y1\0x2\0y2\0color\0penWidth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Line[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       6,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,
       7,    0,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::Int, 0x00495103,
       9, QMetaType::Int, 0x00495103,
      10, QMetaType::Int, 0x00495103,
      11, QMetaType::Int, 0x00495103,
      12, QMetaType::QColor, 0x00495103,
      13, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,

       0        // eod
};

void Line::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Line *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->x1Changed(); break;
        case 1: _t->y1Changed(); break;
        case 2: _t->x2Changed(); break;
        case 3: _t->y2Changed(); break;
        case 4: _t->colorChanged(); break;
        case 5: _t->penWidthChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Line::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Line::x1Changed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Line::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Line::y1Changed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Line::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Line::x2Changed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Line::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Line::y2Changed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Line::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Line::colorChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Line::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Line::penWidthChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Line *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->x1(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->y1(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->x2(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->y2(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->penWidth(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Line *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setX1(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setY1(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setX2(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setY2(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setPenWidth(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Line::staticMetaObject = { {
    &QDeclarativeItem::staticMetaObject,
    qt_meta_stringdata_Line.data,
    qt_meta_data_Line,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Line::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Line::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Line.stringdata0))
        return static_cast<void*>(this);
    return QDeclarativeItem::qt_metacast(_clname);
}

int Line::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Line::x1Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Line::y1Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Line::x2Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Line::y2Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Line::colorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Line::penWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
