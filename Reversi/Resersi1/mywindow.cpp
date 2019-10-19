//登录注册界面
#include "mywindow.h"
#include<QPushButton>
#include "choise1.h"
#include<QLabel>
#include<QTextEdit>
#include"mylabel.h"
#include<QString>
#include<QDebug>
#include<string.h>
#include<Qfile>
#include<QTextStream>
#include<QVector>
#include<QFont>
#include<QLineEdit>
#include<QMessageBox>
QLineEdit *te1;
QLineEdit *te2;
Mywindow::Mywindow(QWidget *parent) : QMainWindow(parent)
{
   QPushButton *btn1=new QPushButton("登录",this);
   QPushButton *btn2=new QPushButton("注册",this);
   QPushButton *btn3=new QPushButton(this);
   btn1->setStyleSheet("background-color: white");
    btn2->setStyleSheet("background-color: white");
   btn1->setFixedSize(80,60);
   btn2->setFixedSize(80,60);
   btn3->setFixedSize(50,50);
   this->setFixedSize(500,350);
   btn1->move(150,250);
   btn2->move(300,250);
   btn3->move(450,0);
  btn3->setStyleSheet("border-image:url(:/image/00.jpg)");

        this->setAutoFillBackground(true);
        QPalette palette;
        QPixmap pixmap(":/image/6.jpg");
        pixmap= pixmap.scaled(this->size());
        palette.setBrush(QPalette::Window, QBrush(pixmap));
       this->setPalette(palette);
        this->setWindowFlags(Qt::FramelessWindowHint);//去掉标题栏
        connect(btn3,&QPushButton::clicked,this,&Mywindow::close);
     /*   QPixmap p2;
        p2.load(":/image/close.png");
        p2=p2.scaled(btn3->size())*/;
        btn3->setAutoFillBackground(true);
        QPalette palette1;
        QPixmap pixmap1(":/image/close.png");
        pixmap1= pixmap1.scaled(btn3->size());
        palette.setBrush(QPalette::Window, QBrush(pixmap1));
       btn3->setPalette(palette1);
      te1=new QLineEdit(this);
       te1->move(150,150);
       te1->setFixedSize(250,40);
       te1->setFont(QFont(tr("Consolas"), 10));
      te2=new QLineEdit(this);
       te2->setFixedSize(250,40);
        te2->move(150,200);
         te2->setFont(QFont(tr("Consolas"), 10));
         te2->setEchoMode(QLineEdit::Password);
        QLabel *q1=new QLabel("用户名:",this);
        q1->setFixedSize(60,40);
        q1->move(65,150);
        q1->setFont(QFont(tr("Consolas"), 10));
        QLabel *q2=new QLabel("密  码:",this);
         q2->setFixedSize(60,40);
         q2->move(65,200);
         q2->setFont(QFont(tr("Consolas"), 10));
   MainWindow *qm=new MainWindow;

   choise1 *ch=new choise1;

   connect(btn1,&QPushButton::clicked,[=]()
   {
    QVector <QString>v1;
      v1= open_file();
      QVector<QString>::iterator it;
      int aaa=1;
       for(it=v1.begin();it<v1.end()-1;it++)
       {
           it->remove('\n');
           (it+1)->remove('\n');
           //qDebug()<<*it<<"  "<<*(it+1);

           //qDebug()<<te1->text()<<"   "<<te2->text();
        if(*it==te1->text()&&*(it+1)==te2->text())
        {
       this->hide();
       ch->show();
       te1->setText("");
       te2->setText("");
         aaa=2;
        }
       }
       if(aaa==1)
       {
           QMessageBox::critical(this,"错误","用户名或密码错误");
           te2->setText("");

       }




   });
   connect(btn2,&QPushButton::clicked,[=]
   {
       Write_file();

   });
   connect(ch,&choise1::mysignal1,[=]{
       this->show();
       ch->hide();

   });



}

QVector<QString> Mywindow::open_file()
{
    QVector<QString>v1;
    QFile file("code.txt");
 if(file.open(QIODevice::ReadOnly| QIODevice::Text))
 {

     while(!file.atEnd())
      v1.push_back(file.readLine());
    // qDebug()<<v1[2];
     file.close();
     return v1;
 }
 else
 {
     exit -1;
 }

}

void Mywindow::Write_file()
{
    QFile file("code.txt");
    if(!file.open(QIODevice::Append | QIODevice::Text))
    {
        return ;
    }
    QTextStream out(&file);
    out<<'\n';
    out<<te1->text();
    out<<'\n';
    out<<te2->text();
    out<<'\n';
    out.flush();
    QMessageBox::information(this," 注册","注册成功");
    te1->setText("");
    te2->setText("");
    file.close();



}

