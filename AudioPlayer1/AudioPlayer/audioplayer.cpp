#include "audioplayer.h"
#include "ui_audioplayer.h"
#include <stringformat.h>
AudioPlayer::AudioPlayer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AudioPlayer){
    ui->setupUi(this);
    setWindowIcon(QIcon(":/rec/icon/ooopic_1501574969.ico"));
    init();
    QPalette palette;
    palette.setBrush(QPalette::Background,
                     QBrush(QPixmap(":/rec/background/bg3.jpg")));
    setPalette(palette);
    setAutoFillBackground(true);
    ui->lineEdit->setPlaceholderText(("输入歌手或歌曲"));
    setWindowFlags(Qt::FramelessWindowHint);
    //setWindowFlag(Qt::CustomizeWindowHint);
    //setAttribute(Qt::WA_TranslucentBackground);
    setListWidgetStyle();
    ui->pushButton_loop->setIcon(QIcon(":/rec/image/loop.png"));
    ui->pushButton_ilike->setIcon(QIcon(":/rec/image/Ilike.png"));
    ui->pushButton_voice->setIcon(QIcon(":/rec/image/music-voice.png"));
    ui->pushButton_play->setIcon(QIcon(":/rec/image/pase.png"));
}

AudioPlayer::~AudioPlayer(){
    delete ui;
}

void AudioPlayer::init(){
    player=new QMediaPlayer(this);
    playlist=new QMediaPlaylist(this);
    connect(player,&QMediaPlayer::positionChanged,
            this,&AudioPlayer::positionChanged);
    connect(player,&QMediaPlayer::durationChanged,
            this,&AudioPlayer::durationChanged);
    connect(playlist,&QMediaPlaylist::currentIndexChanged,
            this,&AudioPlayer::currentIndexChanged);
}
void AudioPlayer::setListWidgetStyle(){
    ui->listWidget->verticalScrollBar()->setCursor(Qt::PointingHandCursor);
    ui->listWidget->horizontalScrollBar()->hide();
    QString listWidgetStyle = "QScrollBar:vertical"
                              "{"
                              "width:8px;"
                              "background-color:transparent;"
                              "margin:0px,0px,0px,0px;"
                              " padding-top:12px;   /*上预留位置*/"
                              " padding-bottom:12px;    /*下预留位置*/"
                              "}"


                              "QScrollBar::handle:vertical"
                              " {"
                              "     width:8px;"
                              "     background-color:rgba(255,255,255,0.2);"
                              "     border-radius:4px;"
                              "     min-height:20px;"
                              " }"


                              "QScrollBar::handle:vertical:hover"
                              "{"
                              "    width:9px;"
                              "    background-color:rgba(255,255,255,0.5);"
                              "    border-radius:4px;"
                              "    min-height:20;"
                              "}"

                              "QScrollBar::add-line:vertical"
                              "{"
                              "     height:12px;"
                              "     width:10px;"
                              "     border-image:url(:/selectfile/scroll/3.png);"
                              "     subcontrol-position:bottom;"
                              "}"

                              "QScrollBar::sub-line:vertical"
                              "{"
                              "     height:12px;"
                              "     width:10px;"
                              "     border-image:url(:/selectfile/scroll/1.png);"
                              "     subcontrol-position:top;"
                              "}"
                              "QScrollBar::add-line:vertical:hover"
                              "{"
                              "     height:12px;"
                              "     width:10px;"
                              "     border-image:url(:/selectfile/scroll/4.png);"
                              "     subcontrol-position:bottom;"
                              " }"


                              " QScrollBar::sub-line:vertical:hover"
                              " {"
                              "     height:12px;"
                              "     width:10px;"
                              "     border-image:url(:/selectfile/scroll/2.png);"
                              "     subcontrol-position:top;"
                              " }"

                              " QScrollBar::add-page:vertical,"
                              "QScrollBar::sub-page:vertical"
                              " {"
                              "     background-color:transparent;"
                              "     border-radius:4px;"
                              "}";
    ui->listWidget->verticalScrollBar()->setStyleSheet(listWidgetStyle);
}
void AudioPlayer::on_pushButton_previous_clicked(){
    if(playlist->currentIndex()==0)
        return;
    playlist->previous();
}

void AudioPlayer::on_pushButton_play_clicked(){
    if(player->state()==QMediaPlayer::PausedState||
            player->state()==QMediaPlayer::StoppedState){
        player->play();
        ui->pushButton_play->setIcon(QIcon(":/rec/image/play.png"));
    }else if(player->state()==QMediaPlayer::PlayingState){
        player->pause();
        ui->pushButton_play->setIcon(QIcon(":/rec/image/pase.png"));
    }

}

void AudioPlayer::on_pushButton_stop_clicked(){
    player->stop();
    ui->pushButton_play->setIcon(QIcon(":/rec/image/pase.png"));
}

void AudioPlayer::on_pushButton_next_clicked(){
    playlist->next();
}
void AudioPlayer::positionChanged(qint64 position){
    ui->horizontalSlider->setValue(int(position));
    ui->label_nowtime->setText(StringFormat::getTimeView(position));
}
void AudioPlayer::durationChanged(qint64 duration){
    ui->horizontalSlider->setRange(0,int(duration));
    ui->horizontalSlider->setEnabled(duration>0);
    ui->horizontalSlider->setPageStep(int(duration/10));
    ui->label_time->setText(StringFormat::getTimeView(duration));
}
void AudioPlayer::on_horizontalSlider_sliderReleased(){
    connect(player,&QMediaPlayer::positionChanged,
            this,&AudioPlayer::positionChanged);
    player->setPosition(position);
}

void AudioPlayer::on_horizontalSlider_sliderMoved(int position){
    disconnect(player,&QMediaPlayer::positionChanged,
               this,&AudioPlayer::positionChanged);
    this->position=position;
}

void AudioPlayer::currentIndexChanged(int value){
    ui->listWidget->item(value)->setSelected(true);
}

void AudioPlayer::on_listWidget_currentRowChanged(int currentRow){
    playlist->setCurrentIndex(currentRow);
    player->play();
    ui->pushButton_play->setIcon(QIcon(":/rec/image/play.png"));
}

void AudioPlayer::on_pushButton_add_clicked(){
   QStringList list=QFileDialog::getOpenFileNames(this,"添加歌曲",
                                                  "d:/","音频文件(*.mp3)");
   foreach(QString file,list){
       QFileInfo info(file);
       playlist->addMedia(QUrl::fromLocalFile(file));
       QListWidgetItem *item=new QListWidgetItem(
                   QIcon(":/rec/icon/ooopic_1501574980.ico"),info.fileName());
       item->setToolTip(info.fileName());
       ui->listWidget->addItem(item);
   }
   player->setPlaylist(playlist);
}

void AudioPlayer::mousePressEvent(QMouseEvent *event){
    if(event->buttons()==Qt::LeftButton){
        QCursor cursor1;
        cursor1.setShape(Qt::OpenHandCursor);
        setCursor(cursor1);
        offset=event->globalPos()-this->pos();
    }

}
void AudioPlayer::mouseReleaseEvent(QMouseEvent*){
    setCursor(cursor);
}
void AudioPlayer::mouseMoveEvent(QMouseEvent *event){
    if(event->buttons()==Qt::LeftButton){
        QPoint tmp;
        tmp=event->globalPos()-offset;
        move(tmp);
    }
}

void AudioPlayer::on_pushButton_min_clicked(){
    showMinimized();
}
void AudioPlayer::on_pushButton_max_clicked(){
    if(isMaximized()){
        showNormal();
    }else {
        showMaximized();
    }
}

void AudioPlayer::on_pushButton_quit_clicked(){
    close();
}
