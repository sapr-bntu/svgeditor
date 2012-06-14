/****************************************************************************
** Meta object code from reading C++ file 'canvastimer.h'
**
** Created: Thu 17. May 15:18:39 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/canvastimer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'canvastimer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CanvasTimer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      40,   34,   29,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CanvasTimer[] = {
    "CanvasTimer\0\0handleTimeout()\0bool\0"
    "value\0equals(QScriptValue)\0"
};

void CanvasTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CanvasTimer *_t = static_cast<CanvasTimer *>(_o);
        switch (_id) {
        case 0: _t->handleTimeout(); break;
        case 1: { bool _r = _t->equals((*reinterpret_cast< const QScriptValue(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CanvasTimer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CanvasTimer::staticMetaObject = {
    { &QTimer::staticMetaObject, qt_meta_stringdata_CanvasTimer,
      qt_meta_data_CanvasTimer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CanvasTimer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CanvasTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CanvasTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CanvasTimer))
        return static_cast<void*>(const_cast< CanvasTimer*>(this));
    return QTimer::qt_metacast(_clname);
}

int CanvasTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTimer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
