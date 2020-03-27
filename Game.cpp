#include "Game.h"

Game::Game(QWidget *parent): QGraphicsView(parent){
    // create a scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0, 0, 10000, 1080);    // the scene's size
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setScene(scene);

    QImage background(":/images/images/Background.png");     // l'image de background
    QImage img2 = background.scaled(1920, 1080, Qt::KeepAspectRatio);      // redimension du background
    setBackgroundBrush(img2);       // affichage
}
