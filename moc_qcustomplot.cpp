/****************************************************************************
** Meta object code from reading C++ file 'qcustomplot.h'
**
** Created: Tue Apr 3 21:06:33 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qcustomplot.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcustomplot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QCPAbstractPlottable[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   22,   21,   21, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QCPAbstractPlottable[] = {
    "QCPAbstractPlottable\0\0selected\0"
    "selectionChanged(bool)\0"
};

const QMetaObject QCPAbstractPlottable::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QCPAbstractPlottable,
      qt_meta_data_QCPAbstractPlottable, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPAbstractPlottable::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPAbstractPlottable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPAbstractPlottable::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPAbstractPlottable))
        return static_cast<void*>(const_cast< QCPAbstractPlottable*>(this));
    return QObject::qt_metacast(_clname);
}

int QCPAbstractPlottable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: selectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QCPAbstractPlottable::selectionChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_QCPGraph[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       3,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       9, 0x0,    6,   26,
      19, 0x0,   16,   38,
      32, 0x0,    4,   70,

 // enum data: key, value
      42, uint(QCPGraph::lsNone),
      49, uint(QCPGraph::lsLine),
      56, uint(QCPGraph::lsStepLeft),
      67, uint(QCPGraph::lsStepRight),
      79, uint(QCPGraph::lsStepCenter),
      92, uint(QCPGraph::lsImpulse),
     102, uint(QCPGraph::ssNone),
     109, uint(QCPGraph::ssDot),
     115, uint(QCPGraph::ssCross),
     123, uint(QCPGraph::ssPlus),
     130, uint(QCPGraph::ssCircle),
     139, uint(QCPGraph::ssDisc),
     146, uint(QCPGraph::ssSquare),
     155, uint(QCPGraph::ssStar),
     162, uint(QCPGraph::ssTriangle),
     173, uint(QCPGraph::ssTriangleInverted),
     192, uint(QCPGraph::ssCrossSquare),
     206, uint(QCPGraph::ssPlusSquare),
     219, uint(QCPGraph::ssCrossCircle),
     233, uint(QCPGraph::ssPlusCircle),
     246, uint(QCPGraph::ssPeace),
     254, uint(QCPGraph::ssPixmap),
     263, uint(QCPGraph::etNone),
     270, uint(QCPGraph::etKey),
     276, uint(QCPGraph::etValue),
     284, uint(QCPGraph::etBoth),

       0        // eod
};

static const char qt_meta_stringdata_QCPGraph[] = {
    "QCPGraph\0LineStyle\0ScatterStyle\0"
    "ErrorType\0lsNone\0lsLine\0lsStepLeft\0"
    "lsStepRight\0lsStepCenter\0lsImpulse\0"
    "ssNone\0ssDot\0ssCross\0ssPlus\0ssCircle\0"
    "ssDisc\0ssSquare\0ssStar\0ssTriangle\0"
    "ssTriangleInverted\0ssCrossSquare\0"
    "ssPlusSquare\0ssCrossCircle\0ssPlusCircle\0"
    "ssPeace\0ssPixmap\0etNone\0etKey\0etValue\0"
    "etBoth\0"
};

const QMetaObject QCPGraph::staticMetaObject = {
    { &QCPAbstractPlottable::staticMetaObject, qt_meta_stringdata_QCPGraph,
      qt_meta_data_QCPGraph, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPGraph::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPGraph::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPGraph::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPGraph))
        return static_cast<void*>(const_cast< QCPGraph*>(this));
    return QCPAbstractPlottable::qt_metacast(_clname);
}

int QCPGraph::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractPlottable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QCPCurve[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_QCPCurve[] = {
    "QCPCurve\0"
};

const QMetaObject QCPCurve::staticMetaObject = {
    { &QCPAbstractPlottable::staticMetaObject, qt_meta_stringdata_QCPCurve,
      qt_meta_data_QCPCurve, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPCurve::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPCurve::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPCurve::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPCurve))
        return static_cast<void*>(const_cast< QCPCurve*>(this));
    return QCPAbstractPlottable::qt_metacast(_clname);
}

int QCPCurve::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractPlottable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QCPBars[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_QCPBars[] = {
    "QCPBars\0"
};

const QMetaObject QCPBars::staticMetaObject = {
    { &QCPAbstractPlottable::staticMetaObject, qt_meta_stringdata_QCPBars,
      qt_meta_data_QCPBars, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPBars::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPBars::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPBars::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPBars))
        return static_cast<void*>(const_cast< QCPBars*>(this));
    return QCPAbstractPlottable::qt_metacast(_clname);
}

int QCPBars::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractPlottable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QCPStatisticalBox[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_QCPStatisticalBox[] = {
    "QCPStatisticalBox\0"
};

const QMetaObject QCPStatisticalBox::staticMetaObject = {
    { &QCPAbstractPlottable::staticMetaObject, qt_meta_stringdata_QCPStatisticalBox,
      qt_meta_data_QCPStatisticalBox, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPStatisticalBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPStatisticalBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPStatisticalBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPStatisticalBox))
        return static_cast<void*>(const_cast< QCPStatisticalBox*>(this));
    return QCPAbstractPlottable::qt_metacast(_clname);
}

int QCPStatisticalBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractPlottable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QCPAbstractLegendItem[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   23,   22,   22, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QCPAbstractLegendItem[] = {
    "QCPAbstractLegendItem\0\0selected\0"
    "selectionChanged(bool)\0"
};

const QMetaObject QCPAbstractLegendItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QCPAbstractLegendItem,
      qt_meta_data_QCPAbstractLegendItem, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPAbstractLegendItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPAbstractLegendItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPAbstractLegendItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPAbstractLegendItem))
        return static_cast<void*>(const_cast< QCPAbstractLegendItem*>(this));
    return QObject::qt_metacast(_clname);
}

int QCPAbstractLegendItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: selectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QCPAbstractLegendItem::selectionChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_QCPPlottableLegendItem[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_QCPPlottableLegendItem[] = {
    "QCPPlottableLegendItem\0"
};

const QMetaObject QCPPlottableLegendItem::staticMetaObject = {
    { &QCPAbstractLegendItem::staticMetaObject, qt_meta_stringdata_QCPPlottableLegendItem,
      qt_meta_data_QCPPlottableLegendItem, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPPlottableLegendItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPPlottableLegendItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPPlottableLegendItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPPlottableLegendItem))
        return static_cast<void*>(const_cast< QCPPlottableLegendItem*>(this));
    return QCPAbstractLegendItem::qt_metacast(_clname);
}

int QCPPlottableLegendItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractLegendItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QCPLegend[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       2,   19, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   11,   10,   10, 0x05,

 // enums: name, flags, count, data
      66, 0x0,    9,   27,
      80, 0x0,    3,   45,

 // enum data: key, value
      95, uint(QCPLegend::psManual),
     104, uint(QCPLegend::psTopLeft),
     114, uint(QCPLegend::psTop),
     120, uint(QCPLegend::psTopRight),
     131, uint(QCPLegend::psRight),
     139, uint(QCPLegend::psBottomRight),
     153, uint(QCPLegend::psBottom),
     162, uint(QCPLegend::psBottomLeft),
     175, uint(QCPLegend::psLeft),
     182, uint(QCPLegend::spNone),
     189, uint(QCPLegend::spLegendBox),
     201, uint(QCPLegend::spItems),

       0        // eod
};

static const char qt_meta_stringdata_QCPLegend[] = {
    "QCPLegend\0\0selection\0"
    "selectionChanged(QCPLegend::SelectableParts)\0"
    "PositionStyle\0SelectablePart\0psManual\0"
    "psTopLeft\0psTop\0psTopRight\0psRight\0"
    "psBottomRight\0psBottom\0psBottomLeft\0"
    "psLeft\0spNone\0spLegendBox\0spItems\0"
};

const QMetaObject QCPLegend::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QCPLegend,
      qt_meta_data_QCPLegend, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPLegend::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPLegend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPLegend::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPLegend))
        return static_cast<void*>(const_cast< QCPLegend*>(this));
    return QObject::qt_metacast(_clname);
}

int QCPLegend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: selectionChanged((*reinterpret_cast< QCPLegend::SelectableParts(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QCPLegend::selectionChanged(QCPLegend::SelectableParts _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_QCPAxis[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
      33,   44, // properties
       4,  143, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      33,   24,    8,    8, 0x05,
      66,   56,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
     115,  109,    8,    8, 0x0a,
     145,  134,    8,    8, 0x0a,
     194,  185,    8,    8, 0x0a,

 // properties: name, type, flags
     241,  232, 0x0009510b,
     260,  250, 0x0009510b,
     277,  270, 0x06095103,
     296,  290, 0x13095103,
     109,  305, 0x0009510b,
     319,  314, 0x01095103,
     327,  314, 0x01095103,
     332,  314, 0x01095103,
     340,  314, 0x01095103,
     354,  350, 0x02095103,
     368,  314, 0x01095103,
     383,  314, 0x01095103,
     396,  314, 0x01095103,
     409,  314, 0x01095103,
     415,  314, 0x01095103,
     426,  350, 0x02095103,
     453,  443, 0x0009510b,
     473,  467, 0x40095103,
     487,  270, 0x06095103,
     513,  505, 0x0a095103,
     528,  505, 0x0a095103,
     541,  270, 0x06095103,
     567,  550, 0x0009510b,
     596,  578, 0x0009510b,
     613,  350, 0x02095103,
     631,  626, 0x4d095103,
     639,  626, 0x4d095103,
     647,  626, 0x4d095103,
     658,  626, 0x4d095103,
     666,  626, 0x4d095103,
     677,  467, 0x40095103,
     687,  505, 0x0a095103,
     693,  350, 0x02095103,

 // enums: name, flags, count, data
     232, 0x0,    4,  159,
     443, 0x0,    2,  167,
     250, 0x0,    2,  171,
     706, 0x0,    4,  175,

 // enum data: key, value
     721, uint(QCPAxis::atLeft),
     728, uint(QCPAxis::atRight),
     736, uint(QCPAxis::atTop),
     742, uint(QCPAxis::atBottom),
     751, uint(QCPAxis::ltNumber),
     760, uint(QCPAxis::ltDateTime),
     771, uint(QCPAxis::stLinear),
     780, uint(QCPAxis::stLogarithmic),
     794, uint(QCPAxis::spNone),
     801, uint(QCPAxis::spAxis),
     808, uint(QCPAxis::spTickLabels),
     821, uint(QCPAxis::spAxisLabel),

       0        // eod
};

static const char qt_meta_stringdata_QCPAxis[] = {
    "QCPAxis\0\0ticksRequest()\0newRange\0"
    "rangeChanged(QCPRange)\0selection\0"
    "selectionChanged(QCPAxis::SelectableParts)\0"
    "range\0setRange(QCPRange)\0selectable\0"
    "setSelectable(QCPAxis::SelectableParts)\0"
    "selected\0setSelected(QCPAxis::SelectableParts)\0"
    "AxisType\0axisType\0ScaleType\0scaleType\0"
    "double\0scaleLogBase\0QRect\0axisRect\0"
    "QCPRange\0bool\0visible\0grid\0subGrid\0"
    "autoTicks\0int\0autoTickCount\0autoTickLabels\0"
    "autoTickStep\0autoSubTicks\0ticks\0"
    "tickLabels\0tickLabelPadding\0LabelType\0"
    "tickLabelType\0QFont\0tickLabelFont\0"
    "tickLabelRotation\0QString\0dateTimeFormat\0"
    "numberFormat\0tickStep\0QVector<double>*\0"
    "tickVector\0QVector<QString>*\0"
    "tickVectorLabels\0subTickCount\0QPen\0"
    "basePen\0gridPen\0subGridPen\0tickPen\0"
    "subTickPen\0labelFont\0label\0labelPadding\0"
    "SelectablePart\0atLeft\0atRight\0atTop\0"
    "atBottom\0ltNumber\0ltDateTime\0stLinear\0"
    "stLogarithmic\0spNone\0spAxis\0spTickLabels\0"
    "spAxisLabel\0"
};

const QMetaObject QCPAxis::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QCPAxis,
      qt_meta_data_QCPAxis, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPAxis::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPAxis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPAxis::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPAxis))
        return static_cast<void*>(const_cast< QCPAxis*>(this));
    return QObject::qt_metacast(_clname);
}

int QCPAxis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: ticksRequest(); break;
        case 1: rangeChanged((*reinterpret_cast< const QCPRange(*)>(_a[1]))); break;
        case 2: selectionChanged((*reinterpret_cast< QCPAxis::SelectableParts(*)>(_a[1]))); break;
        case 3: setRange((*reinterpret_cast< const QCPRange(*)>(_a[1]))); break;
        case 4: setSelectable((*reinterpret_cast< const QCPAxis::SelectableParts(*)>(_a[1]))); break;
        case 5: setSelected((*reinterpret_cast< const QCPAxis::SelectableParts(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< AxisType*>(_v) = axisType(); break;
        case 1: *reinterpret_cast< ScaleType*>(_v) = scaleType(); break;
        case 2: *reinterpret_cast< double*>(_v) = scaleLogBase(); break;
        case 3: *reinterpret_cast< QRect*>(_v) = axisRect(); break;
        case 4: *reinterpret_cast< QCPRange*>(_v) = range(); break;
        case 5: *reinterpret_cast< bool*>(_v) = visible(); break;
        case 6: *reinterpret_cast< bool*>(_v) = grid(); break;
        case 7: *reinterpret_cast< bool*>(_v) = subGrid(); break;
        case 8: *reinterpret_cast< bool*>(_v) = autoTicks(); break;
        case 9: *reinterpret_cast< int*>(_v) = autoTickCount(); break;
        case 10: *reinterpret_cast< bool*>(_v) = autoTickLabels(); break;
        case 11: *reinterpret_cast< bool*>(_v) = autoTickStep(); break;
        case 12: *reinterpret_cast< bool*>(_v) = autoSubTicks(); break;
        case 13: *reinterpret_cast< bool*>(_v) = ticks(); break;
        case 14: *reinterpret_cast< bool*>(_v) = tickLabels(); break;
        case 15: *reinterpret_cast< int*>(_v) = tickLabelPadding(); break;
        case 16: *reinterpret_cast< LabelType*>(_v) = tickLabelType(); break;
        case 17: *reinterpret_cast< QFont*>(_v) = tickLabelFont(); break;
        case 18: *reinterpret_cast< double*>(_v) = tickLabelRotation(); break;
        case 19: *reinterpret_cast< QString*>(_v) = dateTimeFormat(); break;
        case 20: *reinterpret_cast< QString*>(_v) = numberFormat(); break;
        case 21: *reinterpret_cast< double*>(_v) = tickStep(); break;
        case 22: *reinterpret_cast< QVector<double>**>(_v) = tickVector(); break;
        case 23: *reinterpret_cast< QVector<QString>**>(_v) = tickVectorLabels(); break;
        case 24: *reinterpret_cast< int*>(_v) = subTickCount(); break;
        case 25: *reinterpret_cast< QPen*>(_v) = basePen(); break;
        case 26: *reinterpret_cast< QPen*>(_v) = gridPen(); break;
        case 27: *reinterpret_cast< QPen*>(_v) = subGridPen(); break;
        case 28: *reinterpret_cast< QPen*>(_v) = tickPen(); break;
        case 29: *reinterpret_cast< QPen*>(_v) = subTickPen(); break;
        case 30: *reinterpret_cast< QFont*>(_v) = labelFont(); break;
        case 31: *reinterpret_cast< QString*>(_v) = label(); break;
        case 32: *reinterpret_cast< int*>(_v) = labelPadding(); break;
        }
        _id -= 33;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setAxisType(*reinterpret_cast< AxisType*>(_v)); break;
        case 1: setScaleType(*reinterpret_cast< ScaleType*>(_v)); break;
        case 2: setScaleLogBase(*reinterpret_cast< double*>(_v)); break;
        case 3: setAxisRect(*reinterpret_cast< QRect*>(_v)); break;
        case 4: setRange(*reinterpret_cast< QCPRange*>(_v)); break;
        case 5: setVisible(*reinterpret_cast< bool*>(_v)); break;
        case 6: setGrid(*reinterpret_cast< bool*>(_v)); break;
        case 7: setSubGrid(*reinterpret_cast< bool*>(_v)); break;
        case 8: setAutoTicks(*reinterpret_cast< bool*>(_v)); break;
        case 9: setAutoTickCount(*reinterpret_cast< int*>(_v)); break;
        case 10: setAutoTickLabels(*reinterpret_cast< bool*>(_v)); break;
        case 11: setAutoTickStep(*reinterpret_cast< bool*>(_v)); break;
        case 12: setAutoSubTicks(*reinterpret_cast< bool*>(_v)); break;
        case 13: setTicks(*reinterpret_cast< bool*>(_v)); break;
        case 14: setTickLabels(*reinterpret_cast< bool*>(_v)); break;
        case 15: setTickLabelPadding(*reinterpret_cast< int*>(_v)); break;
        case 16: setTickLabelType(*reinterpret_cast< LabelType*>(_v)); break;
        case 17: setTickLabelFont(*reinterpret_cast< QFont*>(_v)); break;
        case 18: setTickLabelRotation(*reinterpret_cast< double*>(_v)); break;
        case 19: setDateTimeFormat(*reinterpret_cast< QString*>(_v)); break;
        case 20: setNumberFormat(*reinterpret_cast< QString*>(_v)); break;
        case 21: setTickStep(*reinterpret_cast< double*>(_v)); break;
        case 22: setTickVector(*reinterpret_cast< QVector<double>**>(_v)); break;
        case 23: setTickVectorLabels(*reinterpret_cast< QVector<QString>**>(_v)); break;
        case 24: setSubTickCount(*reinterpret_cast< int*>(_v)); break;
        case 25: setBasePen(*reinterpret_cast< QPen*>(_v)); break;
        case 26: setGridPen(*reinterpret_cast< QPen*>(_v)); break;
        case 27: setSubGridPen(*reinterpret_cast< QPen*>(_v)); break;
        case 28: setTickPen(*reinterpret_cast< QPen*>(_v)); break;
        case 29: setSubTickPen(*reinterpret_cast< QPen*>(_v)); break;
        case 30: setLabelFont(*reinterpret_cast< QFont*>(_v)); break;
        case 31: setLabel(*reinterpret_cast< QString*>(_v)); break;
        case 32: setLabelPadding(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 33;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 33;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 33;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 33;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 33;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 33;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 33;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QCPAxis::ticksRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QCPAxis::rangeChanged(const QCPRange & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCPAxis::selectionChanged(QCPAxis::SelectableParts _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_QCustomPlot[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
      10,  109, // properties
       2,  139, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   13,   12,   12, 0x05,
      50,   13,   12,   12, 0x05,
      75,   13,   12,   12, 0x05,
      99,   13,   12,   12, 0x05,
     126,   13,   12,   12, 0x05,
     167,  151,   12,   12, 0x05,
     218,  151,   12,   12, 0x05,
     291,  275,   12,   12, 0x05,
     348,  275,   12,   12, 0x05,
     429,  411,   12,   12, 0x05,
     489,  411,   12,   12, 0x05,
     555,   13,   12,   12, 0x05,
     580,   13,   12,   12, 0x05,
     611,   12,   12,   12, 0x05,
     636,   12,   12,   12, 0x05,
     651,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     665,   12,   12,   12, 0x0a,
     679,   12,   12,   12, 0x0a,
     688,   12,   12,   12, 0x0a,

 // properties: name, type, flags
     710,  702, 0x0a095103,
     722,  716, 0x13095103,
     735,  731, 0x02095103,
     746,  731, 0x02095103,
     758,  731, 0x02095103,
     768,  731, 0x02095103,
     781,  731, 0x02095103,
     799,  792, 0x43095103,
     822,  805, 0x0009510b,
     832,  805, 0x0009510b,

 // enums: name, flags, count, data
     842, 0x0,    9,  147,
     861, 0x0,    7,  165,

 // enum data: key, value
     873, uint(QCustomPlot::aeAxes),
     880, uint(QCustomPlot::aeGrid),
     887, uint(QCustomPlot::aeSubGrid),
     897, uint(QCustomPlot::aeGraphs),
     906, uint(QCustomPlot::aePlottables),
     919, uint(QCustomPlot::aeScatters),
     930, uint(QCustomPlot::aeErrorBars),
     942, uint(QCustomPlot::aeFills),
     950, uint(QCustomPlot::aeZeroLine),
     961, uint(QCustomPlot::iRangeDrag),
     972, uint(QCustomPlot::iRangeZoom),
     983, uint(QCustomPlot::iMultiSelect),
     996, uint(QCustomPlot::iSelectTitle),
    1009, uint(QCustomPlot::iSelectPlottables),
    1027, uint(QCustomPlot::iSelectAxes),
    1039, uint(QCustomPlot::iSelectLegend),

       0        // eod
};

static const char qt_meta_stringdata_QCustomPlot[] = {
    "QCustomPlot\0\0event\0mouseDoubleClick(QMouseEvent*)\0"
    "mousePress(QMouseEvent*)\0"
    "mouseMove(QMouseEvent*)\0"
    "mouseRelease(QMouseEvent*)\0"
    "mouseWheel(QWheelEvent*)\0plottable,event\0"
    "plottableClick(QCPAbstractPlottable*,QMouseEvent*)\0"
    "plottableDoubleClick(QCPAbstractPlottable*,QMouseEvent*)\0"
    "axis,part,event\0"
    "axisClick(QCPAxis*,QCPAxis::SelectablePart,QMouseEvent*)\0"
    "axisDoubleClick(QCPAxis*,QCPAxis::SelectablePart,QMouseEvent*)\0"
    "legend,item,event\0"
    "legendClick(QCPLegend*,QCPAbstractLegendItem*,QMouseEvent*)\0"
    "legendDoubleClick(QCPLegend*,QCPAbstractLegendItem*,QMouseEvent*)\0"
    "titleClick(QMouseEvent*)\0"
    "titleDoubleClick(QMouseEvent*)\0"
    "selectionChangedByUser()\0beforeReplot()\0"
    "afterReplot()\0deselectAll()\0replot()\0"
    "rescaleAxes()\0QString\0title\0QRect\0"
    "axisRect\0int\0marginLeft\0marginRight\0"
    "marginTop\0marginBottom\0autoMargin\0"
    "QColor\0color\0Qt::Orientations\0rangeDrag\0"
    "rangeZoom\0AntialiasedElement\0Interaction\0"
    "aeAxes\0aeGrid\0aeSubGrid\0aeGraphs\0"
    "aePlottables\0aeScatters\0aeErrorBars\0"
    "aeFills\0aeZeroLine\0iRangeDrag\0iRangeZoom\0"
    "iMultiSelect\0iSelectTitle\0iSelectPlottables\0"
    "iSelectAxes\0iSelectLegend\0"
};

const QMetaObject QCustomPlot::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QCustomPlot,
      qt_meta_data_QCustomPlot, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCustomPlot::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCustomPlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCustomPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCustomPlot))
        return static_cast<void*>(const_cast< QCustomPlot*>(this));
    return QWidget::qt_metacast(_clname);
}

int QCustomPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: mouseDoubleClick((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 1: mousePress((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: mouseMove((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: mouseRelease((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: mouseWheel((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        case 5: plottableClick((*reinterpret_cast< QCPAbstractPlottable*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 6: plottableDoubleClick((*reinterpret_cast< QCPAbstractPlottable*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 7: axisClick((*reinterpret_cast< QCPAxis*(*)>(_a[1])),(*reinterpret_cast< QCPAxis::SelectablePart(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3]))); break;
        case 8: axisDoubleClick((*reinterpret_cast< QCPAxis*(*)>(_a[1])),(*reinterpret_cast< QCPAxis::SelectablePart(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3]))); break;
        case 9: legendClick((*reinterpret_cast< QCPLegend*(*)>(_a[1])),(*reinterpret_cast< QCPAbstractLegendItem*(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3]))); break;
        case 10: legendDoubleClick((*reinterpret_cast< QCPLegend*(*)>(_a[1])),(*reinterpret_cast< QCPAbstractLegendItem*(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3]))); break;
        case 11: titleClick((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 12: titleDoubleClick((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 13: selectionChangedByUser(); break;
        case 14: beforeReplot(); break;
        case 15: afterReplot(); break;
        case 16: deselectAll(); break;
        case 17: replot(); break;
        case 18: rescaleAxes(); break;
        default: ;
        }
        _id -= 19;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = title(); break;
        case 1: *reinterpret_cast< QRect*>(_v) = axisRect(); break;
        case 2: *reinterpret_cast< int*>(_v) = marginLeft(); break;
        case 3: *reinterpret_cast< int*>(_v) = marginRight(); break;
        case 4: *reinterpret_cast< int*>(_v) = marginTop(); break;
        case 5: *reinterpret_cast< int*>(_v) = marginBottom(); break;
        case 6: *reinterpret_cast< int*>(_v) = autoMargin(); break;
        case 7: *reinterpret_cast< QColor*>(_v) = color(); break;
        case 8: *reinterpret_cast< Qt::Orientations*>(_v) = rangeDrag(); break;
        case 9: *reinterpret_cast< Qt::Orientations*>(_v) = rangeZoom(); break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 1: setAxisRect(*reinterpret_cast< QRect*>(_v)); break;
        case 2: setMarginLeft(*reinterpret_cast< int*>(_v)); break;
        case 3: setMarginRight(*reinterpret_cast< int*>(_v)); break;
        case 4: setMarginTop(*reinterpret_cast< int*>(_v)); break;
        case 5: setMarginBottom(*reinterpret_cast< int*>(_v)); break;
        case 6: setAutoMargin(*reinterpret_cast< int*>(_v)); break;
        case 7: setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 8: setRangeDrag(*reinterpret_cast< Qt::Orientations*>(_v)); break;
        case 9: setRangeZoom(*reinterpret_cast< Qt::Orientations*>(_v)); break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QCustomPlot::mouseDoubleClick(QMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCustomPlot::mousePress(QMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCustomPlot::mouseMove(QMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QCustomPlot::mouseRelease(QMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QCustomPlot::mouseWheel(QWheelEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QCustomPlot::plottableClick(QCPAbstractPlottable * _t1, QMouseEvent * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QCustomPlot::plottableDoubleClick(QCPAbstractPlottable * _t1, QMouseEvent * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QCustomPlot::axisClick(QCPAxis * _t1, QCPAxis::SelectablePart _t2, QMouseEvent * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QCustomPlot::axisDoubleClick(QCPAxis * _t1, QCPAxis::SelectablePart _t2, QMouseEvent * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QCustomPlot::legendClick(QCPLegend * _t1, QCPAbstractLegendItem * _t2, QMouseEvent * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QCustomPlot::legendDoubleClick(QCPLegend * _t1, QCPAbstractLegendItem * _t2, QMouseEvent * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QCustomPlot::titleClick(QMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QCustomPlot::titleDoubleClick(QMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QCustomPlot::selectionChangedByUser()
{
    QMetaObject::activate(this, &staticMetaObject, 13, 0);
}

// SIGNAL 14
void QCustomPlot::beforeReplot()
{
    QMetaObject::activate(this, &staticMetaObject, 14, 0);
}

// SIGNAL 15
void QCustomPlot::afterReplot()
{
    QMetaObject::activate(this, &staticMetaObject, 15, 0);
}
QT_END_MOC_NAMESPACE
