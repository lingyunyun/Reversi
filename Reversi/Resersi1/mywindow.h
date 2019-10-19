//登录注册界面
#ifndef MYWINDOW_H
#define MYWINDOW_H
#include<QString>
#include<QVector>
#include <QMainWindow>
#include<mainwindow.h>

class Mywindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit Mywindow(QWidget *parent = nullptr);
   QVector<QString> open_file();//登录方法
    void Write_file();//注册方法
signals:
  void mysignal3();
public slots:
};

#endif // MYWINDOW_H
