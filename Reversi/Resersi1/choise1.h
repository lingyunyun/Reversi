#ifndef CHOISE1_H
#define CHOISE1_H

#include <QWidget>
//选择黑白方界面
class choise1 : public QWidget
{
    Q_OBJECT
public:
    explicit choise1(QWidget *parent = nullptr);

signals:
  void mysignal1();
public slots:
};

#endif // CHOISE1_H
