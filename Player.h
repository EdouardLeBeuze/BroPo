#ifndef PLAYER_H
#define PLAYER_H
#include <QGraphicsPixmapItem>
#include <QObject>

class Player: public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Player(QGraphicsItem * parent = 0);

    // oups j'avais oublié que c'était a toi de faire cette classe, je te laisse continuer.

};

#endif // PLAYER_H
