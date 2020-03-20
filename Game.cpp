#include "Game.h"

Game::Game(QWidget *parent): QGraphicsView(parent){
    // create a scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0, 0, 800, 600);    //the scene's size
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800, 600);     // the view's size
    setScene(scene);
}
