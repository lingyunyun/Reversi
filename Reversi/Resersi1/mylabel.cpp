#include "mylabel.h"
#include<mainwindow.h>
#include<QDebug>
#include<time.h>
#include "choise1.h"
int a[8][8]={0};
extern MyLabel *ql[8][8];
extern int count;
int black_count1;
int white_count1;
int flag1;
int MyLabel:: black_find(int &x1,int &y1)
{

    int flag5=0;

    int i,j;          //i为x轴,j为y轴
    for(i=x1+1;i<8;i++)//向右边查找
    {

        if(a[i][y1]==0)
            break;

        if(a[i][y1]==1 && a[x1+1][y1]==2)
        {



            flag5=1;
            break;


        }
    }
    for(i=x1-1;i>=0;i--)  //向左边查找
    {
        if(a[i][y1]==0)
        {
            break;
        }
        if(a[i][y1]==1&&(a[x1-1][y1]==2))
        {


            flag5=1;
            break;


        }
    }
    for(j=y1+1;j<8;j++)//向下查找
    {
        if(a[x1][j]==0)
        {
            break;
        }
        if(a[x1][j]==1&&(a[x1][y1+1]==2))
        {


            flag5=1;

            break;
        }
    }
    for(j=y1-1;j>=0;j--)//向上查找
    {
        if(a[x1][j]==0)
        {
            break;
        }
        if(a[x1][j]==1&&(a[x1][y1-1]==2))
        {

            flag5=1;

            break;
        }
    }
    for(i=x1+1,j=y1+1;i<8&&j<8;i++,j++)//向右下查找
    {
        if(a[i][j]==0)
            break;
        if(a[i][j]==1 &&a [x1+1][y1+1]==2)
        {


            flag5=1;

            break;
        }
    }
    for(i=x1-1,j=y1-1;i>=0&&j>=0;i--,j--)//向左上查找
    {
        if(a[i][j]==0)
            break;
        if(a[i][j]==1&&a[x1-1][y1-1]==2)
        {


            flag5=1;

            break;
        }
    }
    for(i=x1+1,j=y1-1;i<8&&j>=0;i++,j--)//向右上查找
    {
        if(a[i][j]==0)
            break;
        if(a[i][j]==1&&a[x1+1][y1-1]==2)
        {

            flag5=1;
            break;

        }
    }
    for(i=x1-1,j=y1+1;i>=0&&j<7;i--,j++)//向左下查找
    {
        if(a[i][j]==0)
            break;
        if(a[i][j]==1 && a[x1-1][y1+1]==2)
        {


            flag5=1;

            break;
        }
    }


    //  qDebug()<<"black  "<<flag5;
    return flag5;

}

int MyLabel::white_find(int &x1,int &y1)
{
    int flag6=0;
    int i,j;          //i为x轴,j为y轴
    for(i=x1+1;i<8;i++)//向右边查找
    {

        if(a[i][y1]==0)
        {

            break;
        }

        // qDebug()<<a[i][y1]<<"   "<<a[x1+1][y1];
        if(a[i][y1]==2&&(a[x1+1][y1]==1))
        {

            flag6=2;
            break;

        }
    }
    for(i=x1-1;i>=0;i--)  //向左边查找
    {
        if(a[i][y1]==0)
        {
            break;
        }
        if(a[i][y1]==2&&(a[x1-1][y1]==1))
        {


            flag6=2;
            break;

        }
    }
    for(j=y1+1;j<8;j++)//向下查找
    {
        if(a[x1][j]==0)
        {
            break;
        }
        if(a[x1][j]==2&&(a[x1][y1+1]==1))
        {


            flag6=2;

            break;
        }
    }
    for(j=y1-1;j>=0;j--)//向上查找
    {
        if(a[x1][j]==0)
        {
            break;
        }
        if(a[x1][j]==2&&(a[x1][y1-1]==1))
        {

            flag6=2;
            break;
        }
    }
    for(i=x1+1,j=y1+1;i<8&&j<8;i++,j++)//向右下查找
    {
        if(a[i][j]==0)
            break;
        if(a[i][j]==2 &&a [x1+1][y1+1]==1)
        {


            flag6=2;
            break;

        }
    }
    for(i=x1-1,j=y1-1;i>=0&&j>=0;i--,j--)//向左上查找
    {
        if(a[i][j]==0)
            break;
        if(a[i][j]==2&&a[x1-1][y1-1]==1)
        {


            flag6=2;
            break;

        }
    }
    for(i=x1+1,j=y1-1;i<8&&j>=0;i++,j--)//向右上查找
    {
        if(a[i][j]==0)
            break;
        if(a[i][j]==2&&a[x1+1][y1-1]==1)
        {


            flag6=2;
            break;

        }
    }
    for(i=x1-1,j=y1+1;i>=0&&j<7;i--,j++)//向左下查找
    {
        if(a[i][j]==0)
            break;
        if(a[i][j]==2 && a[x1-1][y1+1]==1)
        {


            flag6=2;
            break;

        }
    }

    // qDebug()<<"white   "<<flag6;
    return flag6;

}

void MyLabel::Rebort(int flag)
{
    int count_reserve=count;
    int rr_count=0;
    while(rr_count<64)
    {
        int i=rand()%8;
        int j=rand()%8;

        if(a[i][j]==0)
        {
            if(flag==2)
            {
                white(i,j);
                if(a[i][j]==2)
                    break;

            }
            if(flag==1)
            {

                black(i,j);
                if(a[i][j]==1)
                    break;
            }
        }
        rr_count++;
    }
    if(count_reserve==count)
    {
        count++;
    }


}

void MyLabel::white_exchange()
{
    int flag=0;
    for(int i;i<8;i++)
    {
        for(int j;j<8;j++)
        {
            if(a[i][j]==0)
                flag=white_find(i,j);
            if(flag==1)
            {
                return ;
            }
        }
    }
    if(flag==0)
        count++;
}

void MyLabel::black_exchange()
{
    int flag=0;
    for(int i;i<8;i++)
    {
        for(int j;j<8;j++)
        {
            if(a[i][j]==0)
                flag=black_find(i,j);
            if(flag==1)
            {
                return ;
            }
        }
    }
    if(flag==2)
        count++;


}


MyLabel::MyLabel(QWidget *parent) : QLabel(parent)
{
    a[3][3]=1;
    a[4][4]=1;
    a[3][4]=2;
    a[4][3]=2;
}
int MyLabel::chess_black_count1()
{
    int black_count=0;
    int i,j;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            if(a[i][j]==1)
            {
                ++black_count;
            }

        }
    }
    //qDebug()<<black_count;
    return black_count;

}
int MyLabel::chess_white_count1()
{
    int white_count=0;
    int i,j;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            if(a[i][j]==2)
            {
                ++white_count;
            }

        }
    }
    //       qDebug()<<white_count;
    return white_count;
}
void MyLabel:: black(int &x1,int &y1)
{

    QPixmap pic1;
    pic1.load(":/image/black.png");
    pic1=pic1.scaled(ql[x1][y1]->size());

    int i,j;          //i为x轴,j为y轴
    for(i=x1+1;i<8;i++)//向右边查找
    {
        //qDebug()<<"1111111111111";
        if(a[i][y1]==0)
            break;
        //  qDebug()<<"22222222222222222";
        if(a[i][y1]==1 && a[x1+1][y1]==2)
        {

            // qDebug()<<"3333333333333333333333";
            while(x1<=i)
            {
                //  qDebug()<<"44444444444444444444";
                ql[i][y1]->setPixmap(pic1);
                a[i][y1]=1;
                i--;

            }
        }
    }
    for(i=x1-1;i>=0;i--)  //向左边查找
    {
        if(a[i][y1]==0)
        {
            break;
        }
        if(a[i][y1]==1&&(a[x1-1][y1]==2))
        {

            while(x1>=i){
                ql[i][y1]->setPixmap(pic1);
                a[i][y1]=1;
                i++;

            }
        }
    }
    for(j=y1+1;j<8;j++)//向下查找
    {
        if(a[x1][j]==0)
        {
            break;
        }
        if(a[x1][j]==1&&(a[x1][y1+1]==2))
        {

            while(y1<=j)
            {
                ql[x1][j]->setPixmap(pic1);
                a[x1][j]=1;
                j--;

            }
        }
    }
    for(j=y1-1;j>=0;j--)//向上查找
    {
        if(a[x1][j]==0)
        {
            break;
        }
        if(a[x1][j]==1&&(a[x1][y1-1]==2))
        {

            while(y1>=j)
            {
                ql[x1][j]->setPixmap(pic1);
                a[x1][j]=1;
                j++;

            }
        }
    }
    for(i=x1+1,j=y1+1;i<8&&j<8;i++,j++)//向右下查找
    {
        if(a[i][j]==0)
            break;
        if(a[i][j]==1 &&a [x1+1][y1+1]==2)
        {

            while(x1 <= i && y1 <= j)
            {
                ql[i][j]->setPixmap(pic1);
                a[i][j]=1;
                i--;
                j--;

            }
        }
    }
    for(i=x1-1,j=y1-1;i>=0&&j>=0;i--,j--)//向左上查找
    {
        if(a[i][j]==0)
            break;
        if(a[i][j]==1&&a[x1-1][y1-1]==2)
        {

            while(x1>=i)
            {
                ql[i][j]->setPixmap(pic1);
                a[i][j]=1;
                i++;
                j++;

            }
        }
    }
    for(i=x1+1,j=y1-1;i<8&&j>=0;i++,j--)//向右上查找
    {
        if(a[i][j]==0)
            break;
        if(a[i][j]==1&&a[x1+1][y1-1]==2)
        {
            while(x1<=i)
            {
                ql[i][j]->setPixmap(pic1);
                a[i][j]=1;
                i--;
                j++;

            }
        }
    }
    for(i=x1-1,j=y1+1;i>=0&&j<8;i--,j++)//向左下查找
    {
        if(a[i][j]==0)
            break;
        if(a[i][j]==1 && a[x1-1][y1+1]==2)
        {

            while(x1>=i){
                ql[i][j]->setPixmap(pic1);
                a[i][j]=1;
                i++;
                j--;

            }
        }
    }

    if(a[x1][y1]==1)
    {
        count++;

    }

    // black_exchange();

}

void MyLabel::white(int &x1,int &y1)
{
    QPixmap pic2;
    pic2.load(":/image/white.png");
    pic2=pic2.scaled(ql[x1][y1]->size());
    int i,j;          //i为x轴,j为y轴
    for(i=x1+1;i<8;i++)//向右边查找
    {
        //qDebug()<<"1111111111111";
        if(a[i][y1]==0)
            break;
        //  qDebug()<<"22222222222222222";
        if(a[i][y1]==2&&(a[x1+1][y1]==1))
        {

            // qDebug()<<"3333333333333333333333";
            while(x1<=i)
            {
                //  qDebug()<<"44444444444444444444";
                ql[i][y1]->setPixmap(pic2);
                a[i][y1]=2;
                i--;

            }
        }
    }
    for(i=x1-1;i>=0;i--)  //向左边查找
    {
        if(a[i][y1]==0)
        {
            break;
        }
        if(a[i][y1]==2&&(a[x1-1][y1]==1))
        {

            while(x1>=i){
                ql[i][y1]->setPixmap(pic2);
                a[i][y1]=2;
                i++;

            }
        }
    }
    for(j=y1+1;j<8;j++)
    {
        if(a[x1][j]==0)
        {
            break;
        }
        if(a[x1][j]==2&&(a[x1][y1+1]==1))
        {

            while(y1<=j)
            {
                ql[x1][j]->setPixmap(pic2);
                a[x1][j]=2;
                j--;

            }
        }
    }
    for(j=y1-1;j>=0;j--)
    {
        if(a[x1][j]==0)
        {
            break;
        }
        if(a[x1][j]==2&&(a[x1][y1-1]==1))
        {

            while(y1>=j)
            {
                ql[x1][j]->setPixmap(pic2);
                a[x1][j]=2;
                j++;

            }
        }
    }
    for(i=x1+1,j=y1+1;i<8&&j<8;i++,j++)
    {
        if(a[i][j]==0)
            break;
        if(a[i][j]==2 &&a [x1+1][y1+1]==1)
        {

            while(x1 <=i && y1 <= j)
            {
                ql[i][j]->setPixmap(pic2);
                a[i][j]=2;
                i--;
                j--;

            }
        }
    }
    for(i=x1-1,j=y1-1;i>=0&&j>=0;i--,j--)
    {
        if(a[i][j]==0)
            break;
        if(a[i][j]==2&&a[x1-1][y1-1]==1)
        {

            while(x1>=i)
            {
                ql[i][j]->setPixmap(pic2);
                a[i][j]=2;
                i++;
                j++;

            }
        }
    }
    for(i=x1+1,j=y1-1;i<8&&j>=0;i++,j--)
    {
        if(a[i][j]==0)
            break;
        if(a[i][j]==2&&a[x1+1][y1-1]==1)
        {

            while(x1<=i)
            {
                ql[i][j]->setPixmap(pic2);
                a[i][j]=2;
                i--;
                j++;

            }
        }
    }
    for(i=x1-1,j=y1+1;i>=0&&j<8;i--,j++)
    {
        if(a[i][j]==0)
            break;
        if(a[i][j]==2 && a[x1-1][y1+1]==1)
        {

            while(x1>=i)
            {
                ql[i][j]->setPixmap(pic2);
                a[i][j]=2;
                i++;
                j--;

            }
        }
    }
    if(a[x1][y1]==2)
    {
        count++;
    }
    // white_exchange();
}


void MyLabel::mousePressEvent(QMouseEvent *ev)
{
    srand(time(NULL));

    // black();
    int x1=(ev->globalX()-720)/60;
    int y1=(ev->globalY()-275)/60;
    //qDebug()<<x1<<"               "<<y1;
    if(a[x1][y1]==0)
    {
#if 0
算法思想:
        一开始屏幕上有四个棋子,两黑两白
                采用鼠标点击事件,点击标签,获取当前标签的X,Y坐标
                运用数组标志位的方式,黑子为1,白子为2,点击一个标签,往四周的八个方向查找
        #endif
                if (flag1==0)
        {
            if(count%2==1)      //黑子
            {
                black(x1,y1);
                if(count%2==0)
                {
                    Rebort(2);

                }

            }

            if(count%2==0) //白子
            {

                white(x1,y1);
                if(count%2==1)
                {

                    Rebort(1);
                }

            }
        }
        if(flag1==1)
        {


            // black_exchange();
            if(count%2==1)      //黑子
            {

                black(x1,y1);

                //white_exchange();

            }

            else //白子
            {

                white(x1,y1);

            }
        }


    }
    // qDebug()<<"x1="<<x1<<"   "<<"y1="<<y1;
    //      black_find(x1,y1);
    // white_find(x1,y1);

    //   white_exchange();
    //    black_exchange();
    black_count1= chess_black_count1();
    white_count1= chess_white_count1();
    emit this->mysignal5();



}

