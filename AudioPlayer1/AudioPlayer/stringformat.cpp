#include "stringformat.h"

StringFormat::StringFormat(QObject *parent) : QObject(parent){

}

QString StringFormat::getTimeView(qint64 time){
    qint64 seconds=time/1000;
        const qint64 minutes=seconds/60;
        seconds-=minutes*60;
        return QStringLiteral("%1:%2")
                .arg(minutes, 2, 10, QLatin1Char('0'))
                .arg(seconds, 2, 10, QLatin1Char('0'));
}
