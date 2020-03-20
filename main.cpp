#include <QApplication>
#include "Game.h"

Game * game;    // global pointer

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    game = new Game();
    game->show();

    return a.exec();
}
