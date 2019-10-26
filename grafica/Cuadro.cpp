// Created by yenus on 20/10/19.

#include "Cuadro.h"
#include "Game.h"
#include "TorresPopUp.h"
#include "Bullet.h"

extern Game * game;

Cuadro::Cuadro(QGraphicsItem *parent) {
    setPixmap(QPixmap("../art/block.png"));

}

void Cuadro::mousePressEvent(QGraphicsSceneMouseEvent *event) {
    auto* popUp=new TorresPopUp();
    popUp->show();
    popUp->setC(this);
    Zombie *z1 = new Zombie(1,1);
    QList <string> L = {"J3","I2","H1","G2","F3","E4","D5","C4","B3","A4"};
    z1->setRuta(L);
    game->zombieL.append(z1);
    scene()->addItem(z1);


}

void Cuadro::fire(int dir) {
    Bullet *b=new Bullet(dir);
    b->setPos(this->x()+22,this->y()+22);
    scene()->addItem(b);

}

