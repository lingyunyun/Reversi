#ifndef AUDIOPLAYER_H
#define AUDIOPLAYER_H
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDriver>
#include <QSqlRecord>
#include <QtWidgets>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QtCore>
namespace Ui {
class AudioPlayer;
}
class AudioPlayer : public QWidget{
    Q_OBJECT

public:
    explicit AudioPlayer(QWidget *parent = nullptr);
    ~AudioPlayer();
private slots:
    void on_pushButton_previous_clicked();
    void on_pushButton_play_clicked();
    void on_pushButton_stop_clicked();
    void on_pushButton_next_clicked();
    void positionChanged(qint64 position);
    void durationChanged(qint64 duration);
    void currentIndexChanged(int value);
    void on_horizontalSlider_sliderReleased();
    void on_horizontalSlider_sliderMoved(int position);
    void on_listWidget_currentRowChanged(int currentRow);
    void on_pushButton_add_clicked();
    void on_pushButton_min_clicked();
    void on_pushButton_max_clicked();
    void on_pushButton_quit_clicked();
private:
    void init();
    void setListWidgetStyle();
private:
    void mousePressEvent(QMouseEvent *)override;
    void mouseMoveEvent(QMouseEvent *)override;
    void mouseReleaseEvent(QMouseEvent *)override;
private:
    Ui::AudioPlayer *ui;
    QMediaPlaylist *playlist;
    QMediaPlayer*player;
    int position=0;
    QPoint offset;
    QCursor cursor;
    QAction *action1;//添加至本地音乐
    QAction *action2;//添加至我喜欢
    QAction *action3;//添加至播放队列
};

#endif // AUDIOPLAYER_H
