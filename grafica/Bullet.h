#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QObject>

class Bullet: public QObject,public QGraphicsPixmapItem {
public:
    Bullet(QGraphicsItem * parent=0);
    void move();
};

#endif // BULLET_H
