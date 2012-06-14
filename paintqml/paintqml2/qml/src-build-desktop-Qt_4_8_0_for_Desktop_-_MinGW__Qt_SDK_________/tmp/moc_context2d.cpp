/****************************************************************************
** Meta object code from reading C++ file 'context2d.h'
**
** Created: Thu 17. May 15:18:06 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/context2d.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'context2d.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CanvasGradient[] = {

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
      26,   15,   16,   15, 0x0a,
      44,   34,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CanvasGradient[] = {
    "CanvasGradient\0\0QGradient\0value()\0"
    "pos,color\0addColorStop(float,QString)\0"
};

void CanvasGradient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CanvasGradient *_t = static_cast<CanvasGradient *>(_o);
        switch (_id) {
        case 0: { QGradient _r = _t->value();
            if (_a[0]) *reinterpret_cast< QGradient*>(_a[0]) = _r; }  break;
        case 1: _t->addColorStop((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CanvasGradient::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CanvasGradient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CanvasGradient,
      qt_meta_data_CanvasGradient, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CanvasGradient::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CanvasGradient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CanvasGradient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CanvasGradient))
        return static_cast<void*>(const_cast< CanvasGradient*>(this));
    return QObject::qt_metacast(_clname);
}

int CanvasGradient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_CanvasImage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      33,   12,   29,   12, 0x0a,
      41,   12,   29,   12, 0x0a,
      50,   12,   12,   12, 0x0a,
      66,   12,   58,   12, 0x0a,
      76,   72,   12,   12, 0x0a,

 // properties: name, type, flags
      72,   58, 0x0a495103,
      92,   29, 0x02095001,
      98,   29, 0x02095001,

 // properties: notify_signal_id
       0,
       0,
       0,

       0        // eod
};

static const char qt_meta_stringdata_CanvasImage[] = {
    "CanvasImage\0\0sourceChanged()\0int\0"
    "width()\0height()\0value()\0QString\0src()\0"
    "src\0setSrc(QString)\0width\0height\0"
};

void CanvasImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CanvasImage *_t = static_cast<CanvasImage *>(_o);
        switch (_id) {
        case 0: _t->sourceChanged(); break;
        case 1: { int _r = _t->width();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->height();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: _t->value(); break;
        case 4: { QString _r = _t->src();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: _t->setSrc((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CanvasImage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CanvasImage::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CanvasImage,
      qt_meta_data_CanvasImage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CanvasImage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CanvasImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CanvasImage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CanvasImage))
        return static_cast<void*>(const_cast< CanvasImage*>(this));
    return QObject::qt_metacast(_clname);
}

int CanvasImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = src(); break;
        case 1: *reinterpret_cast< int*>(_v) = width(); break;
        case 2: *reinterpret_cast< int*>(_v) = height(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSrc(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CanvasImage::sourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_Context2D[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
      15,  184, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      21,   10,   10,   10, 0x0a,
      28,   10,   10,   10, 0x0a,
      47,   38,   10,   10, 0x0a,
      77,   38,   10,   10, 0x0a,
     113,  109,   10,   10, 0x0a,
     134,  130,   10,   10, 0x0a,
     159,  153,   10,   10, 0x0a,
     173,  130,   10,   10, 0x0a,
     218,  196,   10,   10, 0x0a,
     265,  196,   10,   10, 0x0a,
     343,  331,  315,   10, 0x0a,
     407,  389,  315,   10, 0x0a,
     473,  465,   10,   10, 0x0a,
     508,  465,   10,   10, 0x0a,
     542,  465,   10,   10, 0x0a,
     578,   10,   10,   10, 0x0a,
     590,   10,   10,   10, 0x0a,
     602,  130,   10,   10, 0x0a,
     622,  130,   10,   10, 0x0a,
     654,  642,   10,   10, 0x0a,
     720,  696,   10,   10, 0x0a,
     790,  771,   10,   10, 0x0a,
     827,  465,   10,   10, 0x0a,
     902,  857,   10,   10, 0x0a,
     942,   10,   10,   10, 0x0a,
     949,   10,   10,   10, 0x0a,
     958,   10,   10,   10, 0x0a,
     970,  130,  965,   10, 0x0a,
    1014, 1010,  997,   10, 0x0a,
    1051, 1035,   10,   10, 0x0a,
    1117, 1105, 1095,   10, 0x0a,
    1167, 1155,   10,   10, 0x0a,
    1203,   10,   10,   10, 0x0a,

 // properties: name, type, flags
    1223, 1217, ((uint)QMetaType::QReal << 24) | 0x00095103,
    1243, 1235, 0x0a095103,
    1277, 1268, 0xff095103,
    1289, 1268, 0xff095103,
    1299, 1217, ((uint)QMetaType::QReal << 24) | 0x00095103,
    1309, 1235, 0x0a095103,
    1317, 1235, 0x0a095103,
    1326, 1217, ((uint)QMetaType::QReal << 24) | 0x00095103,
    1337, 1217, ((uint)QMetaType::QReal << 24) | 0x00095103,
    1351, 1217, ((uint)QMetaType::QReal << 24) | 0x00095103,
    1365, 1217, ((uint)QMetaType::QReal << 24) | 0x00095103,
    1376, 1235, 0x0a095103,
    1388, 1235, 0x0a095103,
    1393, 1235, 0x0a095103,
    1406, 1235, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_Context2D[] = {
    "Context2D\0\0changed()\0save()\0restore()\0"
    "text,x,y\0fillText(QString,qreal,qreal)\0"
    "strokeText(QString,qreal,qreal)\0val\0"
    "setInPaint(bool)\0x,y\0scale(qreal,qreal)\0"
    "angle\0rotate(qreal)\0translate(qreal,qreal)\0"
    "m11,m12,m21,m22,dx,dy\0"
    "transform(qreal,qreal,qreal,qreal,qreal,qreal)\0"
    "setTransform(qreal,qreal,qreal,qreal,qreal,qreal)\0"
    "CanvasGradient*\0x0,y0,x1,y1\0"
    "createLinearGradient(qreal,qreal,qreal,qreal)\0"
    "x0,y0,r0,x1,y1,r1\0"
    "createRadialGradient(qreal,qreal,qreal,qreal,qreal,qreal)\0"
    "x,y,w,h\0clearRect(qreal,qreal,qreal,qreal)\0"
    "fillRect(qreal,qreal,qreal,qreal)\0"
    "strokeRect(qreal,qreal,qreal,qreal)\0"
    "beginPath()\0closePath()\0moveTo(qreal,qreal)\0"
    "lineTo(qreal,qreal)\0cpx,cpy,x,y\0"
    "quadraticCurveTo(qreal,qreal,qreal,qreal)\0"
    "cp1x,cp1y,cp2x,cp2y,x,y\0"
    "bezierCurveTo(qreal,qreal,qreal,qreal,qreal,qreal)\0"
    "x1,y1,x2,y2,radius\0"
    "arcTo(qreal,qreal,qreal,qreal,qreal)\0"
    "rect(qreal,qreal,qreal,qreal)\0"
    "x,y,radius,startAngle,endAngle,anticlockwise\0"
    "arc(qreal,qreal,qreal,qreal,qreal,bool)\0"
    "fill()\0stroke()\0clip()\0bool\0"
    "isPointInPath(qreal,qreal)\0CanvasImage*\0"
    "url\0createImage(QString)\0var,dx,dy,dw,dh\0"
    "drawImage(QVariant,qreal,qreal,qreal,qreal)\0"
    "ImageData\0sx,sy,sw,sh\0"
    "getImageData(qreal,qreal,qreal,qreal)\0"
    "image,dx,dy\0putImageData(ImageData,qreal,qreal)\0"
    "endPainting()\0qreal\0globalAlpha\0QString\0"
    "globalCompositeOperation\0QVariant\0"
    "strokeStyle\0fillStyle\0lineWidth\0lineCap\0"
    "lineJoin\0miterLimit\0shadowOffsetX\0"
    "shadowOffsetY\0shadowBlur\0shadowColor\0"
    "font\0textBaseline\0textAlign\0"
};

void Context2D::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Context2D *_t = static_cast<Context2D *>(_o);
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->save(); break;
        case 2: _t->restore(); break;
        case 3: _t->fillText((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 4: _t->strokeText((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 5: _t->setInPaint((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->scale((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 7: _t->rotate((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 8: _t->translate((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 9: _t->transform((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< qreal(*)>(_a[6]))); break;
        case 10: _t->setTransform((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< qreal(*)>(_a[6]))); break;
        case 11: { CanvasGradient* _r = _t->createLinearGradient((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< CanvasGradient**>(_a[0]) = _r; }  break;
        case 12: { CanvasGradient* _r = _t->createRadialGradient((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< qreal(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< CanvasGradient**>(_a[0]) = _r; }  break;
        case 13: _t->clearRect((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        case 14: _t->fillRect((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        case 15: _t->strokeRect((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        case 16: _t->beginPath(); break;
        case 17: _t->closePath(); break;
        case 18: _t->moveTo((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 19: _t->lineTo((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 20: _t->quadraticCurveTo((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        case 21: _t->bezierCurveTo((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< qreal(*)>(_a[6]))); break;
        case 22: _t->arcTo((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5]))); break;
        case 23: _t->rect((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        case 24: _t->arc((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 25: _t->fill(); break;
        case 26: _t->stroke(); break;
        case 27: _t->clip(); break;
        case 28: { bool _r = _t->isPointInPath((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { CanvasImage* _r = _t->createImage((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< CanvasImage**>(_a[0]) = _r; }  break;
        case 30: _t->drawImage((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5]))); break;
        case 31: { ImageData _r = _t->getImageData((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< ImageData*>(_a[0]) = _r; }  break;
        case 32: _t->putImageData((*reinterpret_cast< ImageData(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 33: _t->endPainting(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Context2D::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Context2D::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Context2D,
      qt_meta_data_Context2D, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Context2D::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Context2D::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Context2D::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Context2D))
        return static_cast<void*>(const_cast< Context2D*>(this));
    return QObject::qt_metacast(_clname);
}

int Context2D::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = globalAlpha(); break;
        case 1: *reinterpret_cast< QString*>(_v) = globalCompositeOperation(); break;
        case 2: *reinterpret_cast< QVariant*>(_v) = strokeStyle(); break;
        case 3: *reinterpret_cast< QVariant*>(_v) = fillStyle(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = lineWidth(); break;
        case 5: *reinterpret_cast< QString*>(_v) = lineCap(); break;
        case 6: *reinterpret_cast< QString*>(_v) = lineJoin(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = miterLimit(); break;
        case 8: *reinterpret_cast< qreal*>(_v) = shadowOffsetX(); break;
        case 9: *reinterpret_cast< qreal*>(_v) = shadowOffsetY(); break;
        case 10: *reinterpret_cast< qreal*>(_v) = shadowBlur(); break;
        case 11: *reinterpret_cast< QString*>(_v) = shadowColor(); break;
        case 12: *reinterpret_cast< QString*>(_v) = font(); break;
        case 13: *reinterpret_cast< QString*>(_v) = textBaseline(); break;
        case 14: *reinterpret_cast< QString*>(_v) = textAlign(); break;
        }
        _id -= 15;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setGlobalAlpha(*reinterpret_cast< qreal*>(_v)); break;
        case 1: setGlobalCompositeOperation(*reinterpret_cast< QString*>(_v)); break;
        case 2: setStrokeStyle(*reinterpret_cast< QVariant*>(_v)); break;
        case 3: setFillStyle(*reinterpret_cast< QVariant*>(_v)); break;
        case 4: setLineWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 5: setLineCap(*reinterpret_cast< QString*>(_v)); break;
        case 6: setLineJoin(*reinterpret_cast< QString*>(_v)); break;
        case 7: setMiterLimit(*reinterpret_cast< qreal*>(_v)); break;
        case 8: setShadowOffsetX(*reinterpret_cast< qreal*>(_v)); break;
        case 9: setShadowOffsetY(*reinterpret_cast< qreal*>(_v)); break;
        case 10: setShadowBlur(*reinterpret_cast< qreal*>(_v)); break;
        case 11: setShadowColor(*reinterpret_cast< QString*>(_v)); break;
        case 12: setFont(*reinterpret_cast< QString*>(_v)); break;
        case 13: setTextBaseline(*reinterpret_cast< QString*>(_v)); break;
        case 14: setTextAlign(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 15;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 15;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Context2D::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
