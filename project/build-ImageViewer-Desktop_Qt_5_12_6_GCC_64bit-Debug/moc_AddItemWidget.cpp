/****************************************************************************
** Meta object code from reading C++ file 'AddItemWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ImageViewer/QListWidget_Sample-master/AddItemWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AddItemWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddItemWidget_t {
    QByteArrayData data[10];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddItemWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddItemWidget_t qt_meta_stringdata_AddItemWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AddItemWidget"
QT_MOC_LITERAL(1, 14, 7), // "itemAdd"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 3), // "str"
QT_MOC_LITERAL(4, 27, 10), // "removeItem"
QT_MOC_LITERAL(5, 38, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(6, 55, 4), // "item"
QT_MOC_LITERAL(7, 60, 11), // "displayItem"
QT_MOC_LITERAL(8, 72, 21), // "on_btnAddItem_clicked"
QT_MOC_LITERAL(9, 94, 25) // "on_btnDisplayItem_clicked"

    },
    "AddItemWidget\0itemAdd\0\0str\0removeItem\0"
    "QListWidgetItem*\0item\0displayItem\0"
    "on_btnAddItem_clicked\0on_btnDisplayItem_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddItemWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       7,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   48,    2, 0x08 /* Private */,
       9,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddItemWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AddItemWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->itemAdd((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->removeItem((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->displayItem((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->on_btnAddItem_clicked(); break;
        case 4: _t->on_btnDisplayItem_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AddItemWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddItemWidget::itemAdd)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AddItemWidget::*)(QListWidgetItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddItemWidget::removeItem)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AddItemWidget::*)(QListWidgetItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddItemWidget::displayItem)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AddItemWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_AddItemWidget.data,
    qt_meta_data_AddItemWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AddItemWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddItemWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddItemWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AddItemWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void AddItemWidget::itemAdd(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AddItemWidget::removeItem(QListWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AddItemWidget::displayItem(QListWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
