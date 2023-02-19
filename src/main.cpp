#include <QApplication>
#include <QPushButton>
#include <QObject>

#include "redButton.h"
#include <iostream>


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QWidget window;
    RedButton redButton(&window);
    window.resize(350,350);
    window.show();
    return a.exec();
}
