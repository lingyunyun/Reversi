//游戏界面
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTableWidget>
#include<Qlabel>
#include<QPixmap>
#include<QTableView>
#include"mylabel.h"
#include<QPushButton>
#include<QPalette>
#include<QString>
#include<QFont>
#include"mylabel.h"
#include<QDebug>
#include<QMessageBox>
MyLabel *ql[8][8];
extern int a[8][8];
extern int black_count1;
extern int white_count1;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("黑白棋");
    this->setFixedSize(840,840);
    this->setWindowFlags(Qt::FramelessWindowHint);//去掉标题栏
    QPushButton *btn11=new QPushButton(this);
    btn11->setFixedSize(50,50);
    btn11->move(790,0);
    btn11->setStyleSheet("border-image:url(:/image/close.png)");
    connect(btn11,&QPushButton::clicked,this,&MainWindow::close);
    QPushButton *btn12=new QPushButton(this);
    btn12->setFixedSize(50,50);
    btn12->move(740,0);
    btn12->setStyleSheet("border-image:url(:/image/back.png)");
    connect(btn12,&QPushButton::clicked,[=]{
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                a[i][j]=0;
            }
        }
        emit this->Mysignal();

    });

    //    QTableWidget *qw=new QTableWidget(this);

    //     qw->verticalHeader()->setDefaultSectionSize(60);//行的大小
    //     qw->verticalHeader()->setHidden(true);
    //     qw->horizontalHeader()->setDefaultSectionSize(60);//列的大小
    //     qw->horizontalHeader()->setHidden(true);//隐藏行号
    //     qw->move(180,180);//表格的基本设置
    //     qw->resize(482,482);
    //     qw->setColumnCount(8);
    //     qw->setRowCount(8);
    // qw->setStyleSheet("border:1px solid red");//边框

    //     QLabel *Ql1=new QLabel;
    //     Ql1->resize(60,60);
    //     QPixmap pic1;
    //     pic1.load(":/image/black.png");
    //     pic1=pic1.scaled(Ql1->size());
    //     Ql1->setPixmap(pic1);
    //     qw->setCellWidget(0,0,Ql1);
    this->setAutoFillBackground(true);
    QPalette palette;
    QPixmap pixmap(":/image/8.jpg");
    pixmap= pixmap.scaled(this->size());
    palette.setBrush(QPalette::Window, QBrush(pixmap));
    this->setPalette(palette);

    //this->setStyleSheet("border-image:url(:/image/bg1.jpg)");
    QLabel *ql1=new QLabel(this);
    QPixmap p1;

    p1.load(":/image/black.png");
    ql1->setFixedSize(60,60);
    p1=p1.scaled(ql1->size());
    ql1->setPixmap(p1);
    ql1->move(60,300);

    QLabel *ql2=new QLabel(this);
    QPixmap p2;
    ql2->setFixedSize(60,60);
    p2.load(":/image/white.png");
    p2=p2.scaled(ql2->size());
    ql2->setPixmap(p2);
    ql2->move(720,300);
    QLabel *q3=new QLabel(this);
    q3->move(70,380);
    q3->setFixedSize(60,60);


    q3->setText(QString::number(2));
    QFont ft;
    ft.setPointSize(25);
    q3->setFont(ft);
    QLabel *q5=new QLabel(this);
    q5->move(725,380);
    q5->setFixedSize(60,60);
    q5->setFont(ft);

    q5->setText(QString::number(2));
    QLabel *qq1=new QLabel(this);

    //  MyLabel mm1;

    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            ql[i][j]=new MyLabel(this);
            ql[i][j]->setFixedSize(60,60);
            //qw->setCellWidget(i,j,ql[i][j]);
            ql[i][j]->move(i*60+180,j*60+180);
            ql[i][j]->setStyleSheet("border:1px solid red");

            connect(ql[i][j],&MyLabel::mysignal5,[=]
            {

                q3->setText(QString::number(black_count1));
                q5->setText(QString::number(white_count1));

            });



        }
    }

    ql[3][3]->setPixmap(p1);

    ql[3][4]->setPixmap(p2);

    ql[4][3]->setPixmap(p2);

    ql[4][4]->setPixmap(p1);



//         for(int i=0;i<8;i++)
//        {
//             for(int j=0;j<8;j++)
//             {
//                 connect(ql[i][j],&MyLabel::mysignal5,[=]{
//                     int flag11=0;
//                     int flag12=0;
//                     for(int i=0;i<8;i++){
//                         for(int j=0;j<8;j++){
//                     MyLabel mll1;
//                     if (a[i][j]==0){
//                     flag11=mll1.black_find(i,j);
//                     flag12=mll1.white_find(i,j);
//                                 }
//                     if(flag11==1||flag12==2)
//                     {
//                        i=8;
//                        j=8;
//                     }
//                  }
//                 }

//            //  qDebug()<<flag11<<"    "<<flag12;
//             if(flag11==0&&flag12==0||(black_count1+white_count1==64))
//             {
//                 if(black_count1>white_count1)
//                 {
//                     QMessageBox::information(this,"GAME OVER","BLACK WIN");
//                 }
//                 else if(black_count1<white_count1)
//                 {
//                      QMessageBox::information(this,"GAME OVER","WHITE WIN");
//                 }
//                 else
//                     QMessageBox::information(this,"GAME OVER","THE TWO SIDES DRAW");
//             }


//                 });

//    }
//         }




}
MainWindow::~MainWindow()
{
    delete ui;
}
