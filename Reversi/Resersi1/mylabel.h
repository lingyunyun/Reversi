#ifndef MYLABEL_H
#define MYLABEL_H
#include<QLabel>
#include <QWidget>
#include<QMouseEvent>
//主要算法
class MyLabel : public QLabel
{
    Q_OBJECT
public:
    explicit MyLabel(QWidget *parent = nullptr);
    void mousePressEvent(QMouseEvent *ev);//鼠标点击事件
    int chess_black_count1();//黑子数量方法
    int chess_white_count1();//白子数数量方法
    void black(int &x1,int &y1);//黑子算法
    void white(int &x1,int &y1);//白字算法
    void Rebort(int flag);//机器人算法
    void black_exchange();//判断白字交换
    void white_exchange();//判断黑子交换
    int  white_find(int &x1,int &y1);//查找白字是否能下
    int  black_find(int &x1,int &y1);//查找黑子是否能下
signals:
    void mysignal5();//信号


public slots:
};

#endif // MYLABEL_H
