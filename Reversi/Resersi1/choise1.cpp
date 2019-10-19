#include "choise1.h"
#include "mainwindow.h"
#include<QPushButton>
#include<chiose2.h>
int count;
choise1::choise1(QWidget *parent) : QWidget(parent)
{
    this->setAutoFillBackground(true);
         QPalette palette;
         QPixmap pixmap(":/image/10.jpg");
         pixmap= pixmap.scaled(this->size());
         palette.setBrush(QPalette::Window, QBrush(pixmap));
        this->setPalette(palette);
      this->setFixedSize(500,350);
     QPushButton *btn1=new QPushButton("黑子先",this);
       btn1->setStyleSheet("background-color: black;color:white");
         btn1->setFont(QFont(tr("Consolas"), 12));

     btn1->setFixedSize(100,100);
     btn1->move(100,140);
     QPushButton *btn2=new QPushButton("白子先",this);
       btn2->setStyleSheet("background-color: white;color: black");
       btn2->setFont(QFont(tr("Consolas"), 12));

     btn2->setFixedSize(100,100);
     btn2->move(340,140);
     QPushButton *btn3=new QPushButton(this);

     btn3->setFixedSize(60,60);
     btn3->move(380,0);
      btn3->setStyleSheet("border-image:url(:/image/bk2.jpg)");
     QPushButton *btn4=new QPushButton(this);
     btn4->setFixedSize(60,60);
     btn4->move(440,0);
      btn4->setStyleSheet("border-image:url(:/image/0.jpg)");
     connect(btn4,&QPushButton::clicked,this,&choise1::close);
     connect(btn3,&QPushButton::clicked,[=]
     {
         emit this->mysignal1();
      });
      chiose2 *cc=new chiose2;
       this->setWindowFlags(Qt::FramelessWindowHint);//去掉标题栏

     connect(btn1,&QPushButton::clicked,[=]{
        this->hide();
         cc->show();
         count=1;

     });
     connect(btn2,&QPushButton::clicked,[=]{
         this->hide();
          cc->show();
          count=0;

     });
     connect(cc,&chiose2::mysignal2,[=]{
         this->show();
         cc->hide();
     });
}
