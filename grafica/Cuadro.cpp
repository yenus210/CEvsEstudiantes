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
}

void Cuadro::fire(int dir) {
    Bullet *b=new Bullet(dir);
    b->setPos(this->x()+22,this->y()+22);
    scene()->addItem(b);

}

void Cuadro::actMatriz() {
    if(objectName().contains("J")){
        xm=0;
    }else if(objectName().contains("I")){
        xm=1;
    }else if(objectName().contains("H")){
        xm=2;
    }else if(objectName().contains("G")){
        xm=3;
    }else if(objectName().contains("F")){
        xm=4;
    }else if(objectName().contains("E")){
        xm=5;
    }else if(objectName().contains("D")){
        xm=6;
    }else if(objectName().contains("C")){
        xm=7;
    }else if(objectName().contains("B")){
        xm=8;
    }else if(objectName().contains("A")){
        xm=9;
    }

    if(objectName().contains("1")){
        ym=0;
    }
    else if(objectName().contains("2")){
        ym=1;
    }else if(objectName().contains("3")){
        ym=2;
    }else if(objectName().contains("4")){
        ym=3;
    }else if(objectName().contains("5")){
        ym=4;
    }else if(objectName().contains("6")){
        ym=5;
    }else if(objectName().contains("7")){
        ym=6;
    }else if(objectName().contains("8")){
        ym=7;
    }else if(objectName().contains("9")){
        ym=8;
    }else if(objectName().contains("10")){
        ym=9;
    }
    game->maze[xm][ym]=1;
}

