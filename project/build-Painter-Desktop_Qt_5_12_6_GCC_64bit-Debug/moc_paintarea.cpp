/****************************************************************************
** Meta object code from reading C++ file 'paintarea.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QtPainter_Qt5/paintarea.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paintarea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PaintArea_t {
    QByteArrayData data[14];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PaintArea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PaintArea_t qt_meta_stringdata_PaintArea = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PaintArea"
QT_MOC_LITERAL(1, 10, 8), // "PenColor"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 9), // "FillColor"
QT_MOC_LITERAL(4, 30, 7), // "setSize"
QT_MOC_LITERAL(5, 38, 6), // "noRedo"
QT_MOC_LITERAL(6, 45, 6), // "noUndo"
QT_MOC_LITERAL(7, 52, 10), // "enableRedo"
QT_MOC_LITERAL(8, 63, 10), // "enableUndo"
QT_MOC_LITERAL(9, 74, 8), // "canPaste"
QT_MOC_LITERAL(10, 83, 7), // "canCopy"
QT_MOC_LITERAL(11, 91, 6), // "noCopy"
QT_MOC_LITERAL(12, 98, 10), // "clearImage"
QT_MOC_LITERAL(13, 109, 5) // "print"

    },
    "PaintArea\0PenColor\0\0FillColor\0setSize\0"
    "noRedo\0noUndo\0enableRedo\0enableUndo\0"
    "canPaste\0canCopy\0noCopy\0clearImage\0"
    "print"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PaintArea[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       3,    1,   77,    2, 0x06 /* Public */,
       4,    2,   80,    2, 0x06 /* Public */,
       5,    0,   85,    2, 0x06 /* Public */,
       6,    0,   86,    2, 0x06 /* Public */,
       7,    0,   87,    2, 0x06 /* Public */,
       8,    0,   88,    2, 0x06 /* Public */,
       9,    0,   89,    2, 0x06 /* Public */,
      10,    0,   90,    2, 0x06 /* Public */,
      11,    0,   91,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   92,    2, 0x0a /* Public */,
      13,    0,   93,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PaintArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PaintArea *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->PenColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 1: _t->FillColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 2: _t->setSize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->noRedo(); break;
        case 4: _t->noUndo(); break;
        case 5: _t->enableRedo(); break;
        case 6: _t->enableUndo(); break;
        case 7: _t->canPaste(); break;
        case 8: _t->canCopy(); break;
        case 9: _t->noCopy(); break;
        case 10: _t->clearImage(); break;
        case 11: _t->print(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PaintArea::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaintArea::PenColor)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PaintArea::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaintArea::FillColor)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PaintArea::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaintArea::setSize)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PaintArea::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaintArea::noRedo)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PaintArea::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaintArea::noUndo)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PaintArea::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaintArea::enableRedo)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PaintArea::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaintArea::enableUndo)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PaintArea::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaintArea::canPaste)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (PaintArea::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaintArea::canCopy)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (PaintArea::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaintArea::noCopy)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PaintArea::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_PaintArea.data,
    qt_meta_data_PaintArea,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PaintArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PaintArea::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PaintArea.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PaintArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void PaintArea::PenColor(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PaintArea::FillColor(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PaintArea::setSize(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PaintArea::noRedo()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PaintArea::noUndo()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PaintArea::enableRedo()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void PaintArea::enableUndo()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void PaintArea::canPaste()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void PaintArea::canCopy()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void PaintArea::noCopy()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
