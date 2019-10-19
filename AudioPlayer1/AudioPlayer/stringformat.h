#ifndef STRINGFORMAT_H
#define STRINGFORMAT_H

#include <QObject>

class StringFormat : public QObject{
    Q_OBJECT
public:
    explicit StringFormat(QObject *parent = nullptr);
    static QString getTimeView(qint64 time);
signals:

public slots:
};

#endif // STRINGFORMAT_H
