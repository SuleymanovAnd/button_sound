#include <QApplication>
#include <QPushButton>
#include <QObject>
#include <QMediaPlayer>
#include <QMediaContent>

#include "redButton.h"


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QWidget window;
    RedButton redButton(&window);
    window.resize(350,350);


    auto *player = new QMediaPlayer(&window);
    QString filePath = "://peg_push.mp3";
    QObject::connect(redButton,&QPushButton::clicked,[player,&filePath]()
    {
        player->setMedia(QUrl::fromLocalFile(filePath));
        player->setVolume(100);
        player->play();

    });
    window.show();
    return a.exec();
}
