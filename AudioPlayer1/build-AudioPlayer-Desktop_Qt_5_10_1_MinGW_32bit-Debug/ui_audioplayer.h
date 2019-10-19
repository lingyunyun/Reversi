/********************************************************************************
** Form generated from reading UI file 'audioplayer.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDIOPLAYER_H
#define UI_AUDIOPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AudioPlayer
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_add;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_search;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_min;
    QPushButton *pushButton_max;
    QPushButton *pushButton_quit;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_music;
    QPushButton *pushButton_like;
    QPushButton *pushButton_list;
    QPushButton *pushButton_resently;
    QListWidget *listWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_previous;
    QPushButton *pushButton_play;
    QPushButton *pushButton_stop;
    QPushButton *pushButton_next;
    QSlider *horizontalSlider;
    QLabel *label_nowtime;
    QLabel *label;
    QLabel *label_time;
    QPushButton *pushButton_loop;
    QPushButton *pushButton_ilike;
    QPushButton *pushButton_position;
    QPushButton *pushButton_playlist;
    QPushButton *pushButton_voice;

    void setupUi(QWidget *AudioPlayer)
    {
        if (AudioPlayer->objectName().isEmpty())
            AudioPlayer->setObjectName(QStringLiteral("AudioPlayer"));
        AudioPlayer->resize(1064, 653);
        AudioPlayer->setStyleSheet(QLatin1String("QWidget{\n"
"\n"
"background-repeat:no-repeat;\n"
"\n"
"\n"
"\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(AudioPlayer);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_add = new QPushButton(AudioPlayer);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        pushButton_add->setMinimumSize(QSize(24, 24));
        pushButton_add->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-image: url(:/rec/image/add.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border:none;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"\n"
"	background-image: url(:/rec/image/add-hover.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed{\n"
"background-image: url(:/rec/image/add.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"\n"
"}\n"
""));

        horizontalLayout_5->addWidget(pushButton_add);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        lineEdit = new QLineEdit(AudioPlayer);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setStyleSheet(QLatin1String("QLineEdit{\n"
"background-color: rgba(255, 255, 255,150);\n"
"border-style:outset;\n"
"\n"
"border-width:0px;\n"
"\n"
"border-radius:10px;\n"
"border-color: rgba(0,0,0,100);\n"
"font:bold 14px;\n"
"color:rgb(180,180,180);\n"
"padding:6px;\n"
"}"));

        horizontalLayout_5->addWidget(lineEdit);

        pushButton_search = new QPushButton(AudioPlayer);
        pushButton_search->setObjectName(QStringLiteral("pushButton_search"));
        pushButton_search->setMinimumSize(QSize(24, 24));
        pushButton_search->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-image: url(:/rec/image/sereach.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border:none;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"\n"
"\n"
"background-image: url(:/rec/image/sereach-hover.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed{\n"
"background-image: url(:/rec/image/sereach.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"\n"
"}\n"
""));
        pushButton_search->setIconSize(QSize(24, 24));

        horizontalLayout_5->addWidget(pushButton_search);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_min = new QPushButton(AudioPlayer);
        pushButton_min->setObjectName(QStringLiteral("pushButton_min"));
        pushButton_min->setMinimumSize(QSize(16, 16));
        pushButton_min->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"border-radius:0px;\n"
"background-image: url(:/rec/image/min.png);\n"
"background-color: rgba(255, 255, 255,0);\n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"\n"
"\n"
"\n"
"	background-color: rgb(255, 255, 255,100);\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgba(95, 95, 95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgba(0,0,0,100);\n"
"\n"
"}\n"
""));

        horizontalLayout_3->addWidget(pushButton_min);

        pushButton_max = new QPushButton(AudioPlayer);
        pushButton_max->setObjectName(QStringLiteral("pushButton_max"));
        pushButton_max->setMinimumSize(QSize(16, 16));
        pushButton_max->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"border-radius:0px;\n"
"background-image: url(:/rec/image/max.png);\n"
"background-color: rgba(255, 255, 255,0);\n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"\n"
"\n"
"\n"
"	background-color: rgb(255, 255, 255,100);\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgba(95, 95, 95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgba(0,0,0,100);\n"
"\n"
"}\n"
""));

        horizontalLayout_3->addWidget(pushButton_max);

        pushButton_quit = new QPushButton(AudioPlayer);
        pushButton_quit->setObjectName(QStringLiteral("pushButton_quit"));
        pushButton_quit->setMinimumSize(QSize(16, 16));
        pushButton_quit->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"border-radius:0px;\n"
"background-image: url(:/rec/image/quit.png);\n"
"background-color: rgba(255, 255, 255,0);\n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"\n"
"\n"
"\n"
"	background-color: rgb(255, 255, 255,100);\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgba(95, 95, 95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgba(0,0,0,100);\n"
"\n"
"}\n"
""));

        horizontalLayout_3->addWidget(pushButton_quit);


        verticalLayout_2->addLayout(horizontalLayout_3);

        label_2 = new QLabel(AudioPlayer);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);


        horizontalLayout_5->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_music = new QPushButton(AudioPlayer);
        pushButton_music->setObjectName(QStringLiteral("pushButton_music"));
        pushButton_music->setMinimumSize(QSize(24, 24));
        pushButton_music->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-image: url(:/rec/image/music.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border:none;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"\n"
"	background-image: url(:/rec/image/music-hover.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed{\n"
"background-image: url(:/rec/image/music.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"\n"
"}\n"
""));

        horizontalLayout_2->addWidget(pushButton_music);

        pushButton_like = new QPushButton(AudioPlayer);
        pushButton_like->setObjectName(QStringLiteral("pushButton_like"));
        pushButton_like->setMinimumSize(QSize(24, 24));
        pushButton_like->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-image: url(:/rec/image/like.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border:none;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"\n"
"	background-image: url(:/rec/image/like-hover.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed{\n"
"background-image: url(:/rec/image/like.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"\n"
"}\n"
""));

        horizontalLayout_2->addWidget(pushButton_like);

        pushButton_list = new QPushButton(AudioPlayer);
        pushButton_list->setObjectName(QStringLiteral("pushButton_list"));
        pushButton_list->setMinimumSize(QSize(24, 24));
        pushButton_list->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-image: url(:/rec/image/list.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border:none;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"\n"
"	background-image: url(:/rec/image/list-hover.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed{\n"
"background-image: url(:/rec/image/list.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"\n"
"}\n"
""));

        horizontalLayout_2->addWidget(pushButton_list);

        pushButton_resently = new QPushButton(AudioPlayer);
        pushButton_resently->setObjectName(QStringLiteral("pushButton_resently"));
        pushButton_resently->setMinimumSize(QSize(24, 24));
        pushButton_resently->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-image: url(:/rec/image/play-resently.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border:none;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"\n"
"	background-image: url(:/rec/image/play-resently-hover.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed{\n"
"background-image: url(:/rec/image/play-resently.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"\n"
"}\n"
""));

        horizontalLayout_2->addWidget(pushButton_resently);


        verticalLayout->addLayout(horizontalLayout_2);

        listWidget = new QListWidget(AudioPlayer);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);


        horizontalLayout_4->addLayout(verticalLayout);

        widget = new QWidget(AudioPlayer);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 0));

        horizontalLayout_4->addWidget(widget);

        horizontalLayout_4->setStretch(0, 25);
        horizontalLayout_4->setStretch(1, 75);

        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_previous = new QPushButton(AudioPlayer);
        pushButton_previous->setObjectName(QStringLiteral("pushButton_previous"));
        pushButton_previous->setMinimumSize(QSize(24, 24));
        pushButton_previous->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-image: url(:/rec/image/pre.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border:none;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"\n"
"	background-image: url(:/rec/image/pre-hover.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed{\n"
"background-image: url(:/rec/image/pre.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_previous);

        pushButton_play = new QPushButton(AudioPlayer);
        pushButton_play->setObjectName(QStringLiteral("pushButton_play"));
        pushButton_play->setMinimumSize(QSize(28, 28));
        pushButton_play->setStyleSheet(QLatin1String("QPushButton{\n"
"\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border:none;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"\n"
"\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed{\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_play);

        pushButton_stop = new QPushButton(AudioPlayer);
        pushButton_stop->setObjectName(QStringLiteral("pushButton_stop"));
        pushButton_stop->setMinimumSize(QSize(24, 24));
        pushButton_stop->setStyleSheet(QLatin1String("QPushButton{\n"
"background-image: url(:/rec/image/stop.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border:none;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"\n"
"	background-image: url(:/rec/image/stop-hover.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed{\n"
"background-image: url(:/rec/image/stop.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_stop);

        pushButton_next = new QPushButton(AudioPlayer);
        pushButton_next->setObjectName(QStringLiteral("pushButton_next"));
        pushButton_next->setMinimumSize(QSize(24, 24));
        pushButton_next->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-image: url(:/rec/image/next.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border:none;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"\n"
"	background-image: url(:/rec/image/next-hover.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed{\n"
"background-image: url(:/rec/image/next.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_next);

        horizontalSlider = new QSlider(AudioPlayer);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setStyleSheet(QLatin1String("\n"
"    QSlider::add-page:Horizontal\n"
"     {     \n"
"background-color: rgba(255, 255, 255,100);\n"
"        height:4px;  \n"
"     } \n"
"     QSlider::sub-page:Horizontal   \n"
"    {  \n"
"background-color: rgb(255, 255, 255);\n"
"        height:4px;\n"
"     }\n"
"    QSlider::groove:Horizontal   \n"
"    { \n"
"        background:transparent; \n"
"        height:4px;\n"
"    }  \n"
"    QSlider::handle:Horizontal  \n"
"    { \n"
"        height:16px; \n"
"        width:16px; \n"
"	\n"
"	border-image: url(:/rec/image/circle.png);\n"
"  margin: -6 0px; \n"
"    }\n"
"      \n"
""));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);

        label_nowtime = new QLabel(AudioPlayer);
        label_nowtime->setObjectName(QStringLiteral("label_nowtime"));

        horizontalLayout->addWidget(label_nowtime);

        label = new QLabel(AudioPlayer);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        label_time = new QLabel(AudioPlayer);
        label_time->setObjectName(QStringLiteral("label_time"));

        horizontalLayout->addWidget(label_time);

        pushButton_loop = new QPushButton(AudioPlayer);
        pushButton_loop->setObjectName(QStringLiteral("pushButton_loop"));
        pushButton_loop->setMinimumSize(QSize(30, 24));
        pushButton_loop->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border:none;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed{\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_loop);

        pushButton_ilike = new QPushButton(AudioPlayer);
        pushButton_ilike->setObjectName(QStringLiteral("pushButton_ilike"));
        pushButton_ilike->setMinimumSize(QSize(24, 24));
        pushButton_ilike->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border:none;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed{\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_ilike);

        pushButton_position = new QPushButton(AudioPlayer);
        pushButton_position->setObjectName(QStringLiteral("pushButton_position"));
        pushButton_position->setMinimumSize(QSize(24, 24));
        pushButton_position->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-image: url(:/rec/image/position.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border:none;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-image: url(:/rec/image/position-hover.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed{\n"
"background-image: url(:/rec/image/position.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_position);

        pushButton_playlist = new QPushButton(AudioPlayer);
        pushButton_playlist->setObjectName(QStringLiteral("pushButton_playlist"));
        pushButton_playlist->setMinimumSize(QSize(24, 24));
        pushButton_playlist->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-image: url(:/rec/image/playlist.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border:none;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-image: url(:/rec/image/playlist-hover.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed{\n"
"background-image: url(:/rec/image/playlist.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_playlist);

        pushButton_voice = new QPushButton(AudioPlayer);
        pushButton_voice->setObjectName(QStringLiteral("pushButton_voice"));
        pushButton_voice->setMinimumSize(QSize(24, 24));
        pushButton_voice->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border:none;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"\n"
"\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"\n"
"\n"
"}\n"
"QPushButton:pressed{\n"
"\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_voice);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(AudioPlayer);

        QMetaObject::connectSlotsByName(AudioPlayer);
    } // setupUi

    void retranslateUi(QWidget *AudioPlayer)
    {
        AudioPlayer->setWindowTitle(QApplication::translate("AudioPlayer", "AudioPlayer", nullptr));
        pushButton_add->setText(QString());
        pushButton_search->setText(QString());
        pushButton_min->setText(QString());
        pushButton_max->setText(QString());
        pushButton_quit->setText(QString());
        label_2->setText(QString());
        pushButton_music->setText(QString());
        pushButton_like->setText(QString());
        pushButton_list->setText(QString());
        pushButton_resently->setText(QString());
        pushButton_previous->setText(QString());
        pushButton_play->setText(QString());
        pushButton_stop->setText(QString());
        pushButton_next->setText(QString());
        label_nowtime->setText(QApplication::translate("AudioPlayer", "00:00", nullptr));
        label->setText(QApplication::translate("AudioPlayer", "/", nullptr));
        label_time->setText(QApplication::translate("AudioPlayer", "00:00", nullptr));
        pushButton_loop->setText(QString());
        pushButton_ilike->setText(QString());
        pushButton_position->setText(QString());
        pushButton_playlist->setText(QString());
        pushButton_voice->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AudioPlayer: public Ui_AudioPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIOPLAYER_H
