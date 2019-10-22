#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QObject>
#include <QTimer>
#include <QList>
#include "Cuadro.h"

class Bullet: public QObject,public QGraphicsPixmapItem {
public:
    Bullet(int dir,  QGraphicsItem * parent=0);
    void move();
private:
    int cont =1;
    int direccion =0;

};

#endif // BULLET_H
