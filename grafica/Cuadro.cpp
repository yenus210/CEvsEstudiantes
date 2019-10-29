// Created by yenus on 20/10/19.

#include "Cuadro.h"
#include "Game.h"
#include "TorresPopUp.h"
#include "Bullet.h"

extern Game * game;

Cuadro::Cuadro(QString id, QGraphicsItem *parent) {
    setPixmap(QPixmap("../art/block.png"));
id=iD;

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

    if(objectName().contains("j")){
        xm=0;
    }else if(objectName().contains("i")){
        xm=1;
    }else if(objectName().contains("h")){
        xm=2;
    }else if(objectName().contains("g")){
        xm=3;
    }else if(objectName().contains("f")){
        xm=4;
    }else if(objectName().contains("e")){
        xm=5;
    }else if(objectName().contains("d")){
        xm=6;
    }else if(objectName().contains("c")){
        xm=7;
    }else if(objectName().contains("b")){
        xm=8;
    }else if(objectName().contains("a")){
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
    cout << xm << ym << endl;
    cout << this->objectName().toStdString().c_str() << endl;

    game->maze[xm][ym]=1;
}

