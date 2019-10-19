/****************************************************************************
** Meta object code from reading C++ file 'audioplayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../AudioPlayer/audioplayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'audioplayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AudioPlayer_t {
    QByteArrayData data[20];
    char stringdata0[416];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AudioPlayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AudioPlayer_t qt_meta_stringdata_AudioPlayer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AudioPlayer"
QT_MOC_LITERAL(1, 12, 30), // "on_pushButton_previous_clicked"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 26), // "on_pushButton_play_clicked"
QT_MOC_LITERAL(4, 71, 26), // "on_pushButton_stop_clicked"
QT_MOC_LITERAL(5, 98, 26), // "on_pushButton_next_clicked"
QT_MOC_LITERAL(6, 125, 15), // "positionChanged"
QT_MOC_LITERAL(7, 141, 8), // "position"
QT_MOC_LITERAL(8, 150, 15), // "durationChanged"
QT_MOC_LITERAL(9, 166, 8), // "duration"
QT_MOC_LITERAL(10, 175, 19), // "currentIndexChanged"
QT_MOC_LITERAL(11, 195, 5), // "value"
QT_MOC_LITERAL(12, 201, 34), // "on_horizontalSlider_sliderRel..."
QT_MOC_LITERAL(13, 236, 31), // "on_horizontalSlider_sliderMoved"
QT_MOC_LITERAL(14, 268, 31), // "on_listWidget_currentRowChanged"
QT_MOC_LITERAL(15, 300, 10), // "currentRow"
QT_MOC_LITERAL(16, 311, 25), // "on_pushButton_add_clicked"
QT_MOC_LITERAL(17, 337, 25), // "on_pushButton_min_clicked"
QT_MOC_LITERAL(18, 363, 25), // "on_pushButton_max_clicked"
QT_MOC_LITERAL(19, 389, 26) // "on_pushButton_quit_clicked"

    },
    "AudioPlayer\0on_pushButton_previous_clicked\0"
    "\0on_pushButton_play_clicked\0"
    "on_pushButton_stop_clicked\0"
    "on_pushButton_next_clicked\0positionChanged\0"
    "position\0durationChanged\0duration\0"
    "currentIndexChanged\0value\0"
    "on_horizontalSlider_sliderReleased\0"
    "on_horizontalSlider_sliderMoved\0"
    "on_listWidget_currentRowChanged\0"
    "currentRow\0on_pushButton_add_clicked\0"
    "on_pushButton_min_clicked\0"
    "on_pushButton_max_clicked\0"
    "on_pushButton_quit_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AudioPlayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    1,   88,    2, 0x08 /* Private */,
       8,    1,   91,    2, 0x08 /* Private */,
      10,    1,   94,    2, 0x08 /* Private */,
      12,    0,   97,    2, 0x08 /* Private */,
      13,    1,   98,    2, 0x08 /* Private */,
      14,    1,  101,    2, 0x08 /* Private */,
      16,    0,  104,    2, 0x08 /* Private */,
      17,    0,  105,    2, 0x08 /* Private */,
      18,    0,  106,    2, 0x08 /* Private */,
      19,    0,  107,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    7,
    QMetaType::Void, QMetaType::LongLong,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AudioPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AudioPlayer *_t = static_cast<AudioPlayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_previous_clicked(); break;
        case 1: _t->on_pushButton_play_clicked(); break;
        case 2: _t->on_pushButton_stop_clicked(); break;
        case 3: _t->on_pushButton_next_clicked(); break;
        case 4: _t->positionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->durationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 6: _t->currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_horizontalSlider_sliderReleased(); break;
        case 8: _t->on_horizontalSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_listWidget_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_pushButton_add_clicked(); break;
        case 11: _t->on_pushButton_min_clicked(); break;
        case 12: _t->on_pushButton_max_clicked(); break;
        case 13: _t->on_pushButton_quit_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AudioPlayer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AudioPlayer.data,
      qt_meta_data_AudioPlayer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AudioPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AudioPlayer.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AudioPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
