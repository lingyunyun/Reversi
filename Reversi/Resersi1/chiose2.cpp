#include "chiose2.h"
#include<mainwindow.h>
#include<QPushButton>
#include "mylabel.h"
#include<QDebug>
extern int flag1;

chiose2::chiose2(QWidget *parent) : QWidget(parent)
{
    this->setFixedSize(500,350);
    QPushButton *btn1=new QPushButton(this);
    btn1->setFixedSize(100,100);
    btn1->move(100,140);
    btn1->setStyleSheet("border-image:url(:/image/m1.jpg)");
    connect(btn1,&QPushButton::clicked,[=]()
    {
        MainWindow *mm =new MainWindow;
        mm->show();
        this->hide();
        flag1=1;

        connect(mm,&MainWindow::Mysignal,[=]()
        {
            mm->hide();
            this->show();
        });

    });
    this->setAutoFillBackground(true);
    QPalette palette;
    QPixmap pixmap(":/image/7.jpg");
    pixmap= pixmap.scaled(this->size());
    palette.setBrush(QPalette::Window, QBrush(pixmap));
    this->setPalette(palette);
    this->setWindowFlags(Qt::FramelessWindowHint);//去掉标题栏
    QPushButton *btn2=new QPushButton(this);
    btn2->setFixedSize(100,100);
    btn2->move(340,140);
    btn2->setStyleSheet("border-image:url(:/image/r1.jpg)");
    QPushButton *btn3=new QPushButton(this);
    btn3->setFixedSize(60,60);
    btn3->move(380,0);
    btn3->setStyleSheet("border-image:url(:/image/bk2.jpg)");
    QPushButton *btn4=new QPushButton(this);
    btn4->setFixedSize(60,60);

    btn4->move(440,0);
    btn4->setStyleSheet("border-image:url(:/image/00.jpg)");
    connect(btn4,&QPushButton::clicked,this,&chiose2::close);
    connect(btn3,&QPushButton::clicked,[=]
    {
        emit this->mysignal2();
    });
    connect(btn2,&QPushButton::clicked,[=]
    {
        MainWindow *mm =new MainWindow;
        mm->show();
        this->hide();
        flag1=0;

        connect(mm,&MainWindow::Mysignal,[=]()
        {

            mm->hide();
            this->show();
        });

    });

}
