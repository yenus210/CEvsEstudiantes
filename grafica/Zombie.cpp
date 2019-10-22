//
// Created by yenus on 20/10/19.
//

#include "Zombie.h"
#include <QTimer>
#include <QList>
#include <cstdlib> // rand() -> really large int
#include "Game.h"

extern Game * game;

Zombie::Zombie(int zombie, QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
    zombienum=zombie;
    //set random x position
    int random_number = rand() % 810;
    setPos(random_number,100);

    // drew the rect
    switch(zombienum) {
        case 1:
            setPixmap(QPixmap((rutaOgro+"1.png").c_str()));
            break;
        case 2:
            setPixmap(QPixmap((rutaDark+"1.png").c_str()));
            break;
        case 3:
            setPixmap(QPixmap((rutaArpia+"1.png").c_str()));
            break;
        case 4:
            setPixmap(QPixmap((rutaMerc+"1.png").c_str()));
            break;
    }


    // make/connect a timer to move() the enemy every so often
    QTimer * timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this, &Zombie::move);

    // start the timer
    timer->start(30);
}

int Zombie::move(){
    switch(zombienum) {
        case 1:
            switch (cont){
                case 1:
                    setPixmap(QPixmap((rutaOgro+"1.png").c_str()));
                    cont++;
                    break;
                case 2:
                    setPixmap(QPixmap((rutaOgro+"2.png").c_str()));
                    cont++;
                    break;
                case 3:
                    setPixmap(QPixmap((rutaOgro+"3.png").c_str()));
                    cont=1;
                    break;
            }
            break;
        case 2:
            switch (cont){
                case 1:
                    setPixmap(QPixmap((rutaDark+"1.png").c_str()));
                    cont++;
                    break;
                case 2:
                    setPixmap(QPixmap((rutaDark+"2.png").c_str()));
                    cont++;
                    break;
                case 3:
                    setPixmap(QPixmap((rutaDark+"3.png").c_str()));
                    cont=1;
                    break;
            }
            break;
        case 3:
            switch (cont){
                case 1:
                    setPixmap(QPixmap((rutaArpia+"1.png").c_str()));cont++;
                    break;
                case 2:
                    setPixmap(QPixmap((rutaArpia+"2.png").c_str()));
                    cont++;
                    break;
                case 3:
                    setPixmap(QPixmap((rutaArpia+"3.png").c_str()));
                    cont=1;
                    break;
            }
            break;
        case 4:
            switch (cont){
                case 1:
                    setPixmap(QPixmap((rutaMerc+"1.png").c_str()));
                    cont++;
                    break;
                case 2:
                    setPixmap(QPixmap((rutaMerc+"2.png").c_str()));
                    cont++;
                    break;
                case 3:
                    setPixmap(QPixmap((rutaMerc+"3.png").c_str()));
                    cont=1;
                    break;
            }
            break;
    }
    setPos(x(),y()-2);

    // destroy enemy when it goes out of the screen
    if (pos().y() < 0){
        //decrease the health
        //game->health->decrease();
        scene()->removeItem(this);
        delete this;
    }
}

int Zombie::getZombienum() const {
    return zombienum;
}

void Zombie::setZombienum(int zombienum) {
    Zombie::zombienum = zombienum;
}

