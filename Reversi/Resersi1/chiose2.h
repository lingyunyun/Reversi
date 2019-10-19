#ifndef CHIOSE2_H
#define CHIOSE2_H

#include <QWidget>
//选择对战模式界面
class chiose2 : public QWidget
{
    Q_OBJECT
public:
    explicit chiose2(QWidget *parent = nullptr);

signals:
     void mysignal2();
public slots:
};

#endif // CHIOSE2_H
