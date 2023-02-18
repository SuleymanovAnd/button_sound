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



    window.show();
    return a.exec();
}
