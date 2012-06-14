/****************************************************************************
** Meta object code from reading C++ file 'canvas.h'
**
** Created: Thu 17. May 15:18:37 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/canvas.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'canvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Canvas[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       4,  104, // properties
       1,  120, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x05,
      26,    7,    7,    7, 0x05,
      47,    7,    7,    7, 0x05,
      69,    7,    7,    7, 0x05,
      84,    7,    7,    7, 0x05,
      91,    7,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
     110,    7,   99,    7, 0x0a,
     130,    7,   99,    7, 0x2a,
     143,    7,    7,    7, 0x0a,
     167,    7,  158,    7, 0x0a,
     178,    7,    7,    7, 0x0a,
     207,    7,  200,    7, 0x0a,
     215,    7,    7,    7, 0x0a,
     246,  237,  232,    7, 0x0a,
     276,  260,    7,    7, 0x0a,
     307,  260,    7,    7, 0x0a,
     345,  337,    7,    7, 0x0a,
     373,  337,    7,    7, 0x0a,

 // properties: name, type, flags
     400,  200, 0x43495103,
     410,  406, 0x02495103,
     422,  406, 0x02495103,
     435,  158, 0x0049510b,

 // properties: notify_signal_id
       3,
       1,
       2,
       0,

 // enums: name, flags, count, data
     158, 0x0,    6,  124,

 // enum data: key, value
     444, uint(Canvas::Stretch),
     452, uint(Canvas::PreserveAspectFit),
     470, uint(Canvas::PreserveAspectCrop),
     489, uint(Canvas::Tile),
     494, uint(Canvas::TileVertically),
     509, uint(Canvas::TileHorizontally),

       0        // eod
};

static const char qt_meta_stringdata_Canvas[] = {
    "Canvas\0\0fillModeChanged()\0"
    "canvasWidthChanged()\0canvasHeightChanged()\0"
    "colorChanged()\0init()\0paint()\0Context2D*\0"
    "getContext(QString)\0getContext()\0"
    "requestPaint()\0FillMode\0fillMode()\0"
    "setFillMode(FillMode)\0QColor\0color()\0"
    "setColor(QColor)\0bool\0filename\0"
    "save(QString)\0handler,timeout\0"
    "setInterval(QScriptValue,long)\0"
    "setTimeout(QScriptValue,long)\0handler\0"
    "clearInterval(QScriptValue)\0"
    "clearTimeout(QScriptValue)\0color\0int\0"
    "canvasWidth\0canvasHeight\0fillMode\0"
    "Stretch\0PreserveAspectFit\0PreserveAspectCrop\0"
    "Tile\0TileVertically\0TileHorizontally\0"
};

void Canvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Canvas *_t = static_cast<Canvas *>(_o);
        switch (_id) {
        case 0: _t->fillModeChanged(); break;
        case 1: _t->canvasWidthChanged(); break;
        case 2: _t->canvasHeightChanged(); break;
        case 3: _t->colorChanged(); break;
        case 4: _t->init(); break;
        case 5: _t->paint(); break;
        case 6: { Context2D* _r = _t->getContext((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Context2D**>(_a[0]) = _r; }  break;
        case 7: { Context2D* _r = _t->getContext();
            if (_a[0]) *reinterpret_cast< Context2D**>(_a[0]) = _r; }  break;
        case 8: _t->requestPaint(); break;
        case 9: { FillMode _r = _t->fillMode();
            if (_a[0]) *reinterpret_cast< FillMode*>(_a[0]) = _r; }  break;
        case 10: _t->setFillMode((*reinterpret_cast< FillMode(*)>(_a[1]))); break;
        case 11: { QColor _r = _t->color();
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 12: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 13: { bool _r = _t->save((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->setInterval((*reinterpret_cast< const QScriptValue(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2]))); break;
        case 15: _t->setTimeout((*reinterpret_cast< const QScriptValue(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2]))); break;
        case 16: _t->clearInterval((*reinterpret_cast< const QScriptValue(*)>(_a[1]))); break;
        case 17: _t->clearTimeout((*reinterpret_cast< const QScriptValue(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Canvas::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Canvas::staticMetaObject = {
    { &QDeclarativeItem::staticMetaObject, qt_meta_stringdata_Canvas,
      qt_meta_data_Canvas, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Canvas::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Canvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Canvas::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Canvas))
        return static_cast<void*>(const_cast< Canvas*>(this));
    return QDeclarativeItem::qt_metacast(_clname);
}

int Canvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = color(); break;
        case 1: *reinterpret_cast< int*>(_v) = canvasWidth(); break;
        case 2: *reinterpret_cast< int*>(_v) = canvasHeight(); break;
        case 3: *reinterpret_cast< FillMode*>(_v) = fillMode(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: setCanvasWidth(*reinterpret_cast< int*>(_v)); break;
        case 2: setCanvasHeight(*reinterpret_cast< int*>(_v)); break;
        case 3: setFillMode(*reinterpret_cast< FillMode*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
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
void Canvas::fillModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Canvas::canvasWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Canvas::canvasHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Canvas::colorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void Canvas::init()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void Canvas::paint()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE
