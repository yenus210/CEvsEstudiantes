#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsRectItem>
#include <QGraphicsItem>
#include <QObject>

class Bullet: public QObject,public QGraphicsRectItem{
public:
    Bullet(QGraphicsItem * parent=0);
    ~Bullet();
    int move();
};

#endif // BULLET_H
