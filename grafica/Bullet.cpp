#include "Bullet.h"
#include "Game.h"

extern Game * game; // there is an external global object called game

Bullet::Bullet(int dir, QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
    // draw graphics}
    direccion=dir;
    QPixmap a=QPixmap("/home/yenus/CLionProjects/CEvsEstudiantes/art/quest1.png");
    QPixmap pixb = a.scaled(45, 45, Qt::IgnoreAspectRatio);
    setPixmap(pixb);



    // make/connect a timer to move() the bullet every so often
    QTimer * timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this,&Bullet::move);

    // start the timer
    timer->start(100);
}

void Bullet::move(){
    if (cont ==1){
        QPixmap a=QPixmap("/home/yenus/CLionProjects/CEvsEstudiantes/art/quest1.png");
        QPixmap pixb = a.scaled(45, 45, Qt::IgnoreAspectRatio);
        setPixmap(pixb);
        cont++;
    }else{
        QPixmap a=QPixmap("/home/yenus/CLionProjects/CEvsEstudiantes/art/quest2.png");
        QPixmap pixb = a.scaled(45, 45, Qt::IgnoreAspectRatio);
        setPixmap(pixb);
        cont = 1;
    }

    // if there was no collision with an Enemy, move the bullet forward
    switch (direccion){
        case 0:
            setPos(x()-10,y());
            break;
        case 1:
            setPos(x()-10,y()-10);
            break;
        case 2:
            setPos(x(),y()-10);
            break;
        case 3:
            setPos(x()+10,y()-10);
            break;
        case 4:
            setPos(x()+10,y());
            break;
        case 5:
            setPos(x()+10,y()+10);
            break;
        case 6:
            setPos(x(),y()+10);
            break;
        case 7:
            setPos(x()-10,y()+10);
            break;

    }

    // if the bullet is off the screen, destroy it
    if (pos().y() < 50){
        scene()->removeItem(this);
        delete this;
    }
    else if (pos().y() >950){
        scene()->removeItem(this);
        delete this;
    }
    else if (pos().x() >900){
        scene()->removeItem(this);
        delete this;
    }
    else if (pos().x() <0){
        scene()->removeItem(this);
        delete this;
    }

    // get a list of all the items currently colliding with this bullet
    QList<QGraphicsItem *> colliding_items = collidingItems();

    // if one of the colliding items is an Zombie, destroy both the bullet and the enemy
    for (int i = 0, n = colliding_items.size(); i < n; ++i){
        if (typeid(*(colliding_items[i])) == typeid(Zombie)){
            // increase the score
            //game->score->increase();

            // remove them from the scene (still on the heap)
            //scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            //game->zombieL.removeOne(colliding_items[i]);


            // delete them from the heap to save memory
            //delete colliding_items[i];
            delete this;

            // return (all code below refers to a non existint bullet)
            return;
        }
    }
}

