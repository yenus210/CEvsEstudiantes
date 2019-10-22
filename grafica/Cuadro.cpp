// Created by yenus on 20/10/19.

#include "Cuadro.h"
#include "Game.h"
#include "TorresPopUp.h"
#include "Bullet.h"

extern Game * game;

Cuadro::Cuadro(QGraphicsItem *parent) {
    setPixmap(QPixmap("/home/yenus/CLionProjects/CEvsEstudiantes/art/block.png"));
}

void Cuadro::mousePressEvent(QGraphicsSceneMouseEvent *event) {
    auto* popUp=new TorresPopUp();
    popUp->show();
    popUp->setC(this);
    Zombie *z1 = new Zombie(1);
    Zombie *z2 = new Zombie(2);
    Zombie *z3 = new Zombie(3);
    Zombie *z4 = new Zombie(4);
    scene()->addItem(z1);
    scene()->addItem(z2);
    scene()->addItem(z3);
    scene()->addItem(z4);

    QTimer *timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this,&Cuadro::enfriaDisparo);

    // start the timer
    timer->start(1000);



}

void Cuadro::fire(int dir) {
    switch(dir){
        case 0:
            if (flag0){}
            else{
            nBullet(dir);
            flag0=true;}
            break;
        case 1:
            if (flag1){}
            else{
            nBullet(dir);
            flag1=true;}
            break;
        case 2:
            if (flag2){}
            else{
            nBullet(dir);
            flag2=true;}
            break;
        case 3:
            if (flag3){}
            else{
            nBullet(dir);
            flag3=true;}
            break;
        case 4:
            if (flag4){}
            else{
            nBullet(dir);
            flag4=true;}
            break;
        case 5:
            if (flag5){}
            else{
            nBullet(dir);
            flag5=true;}
            break;
        case 6:
            if (flag6){}
            else{
            nBullet(dir);
            flag6=true;}
            break;
        case 7:
            if (flag7){}
            else{
            nBullet(dir);
            flag7=true;}
            break;
    }

}

void Cuadro::enfriaDisparo() {
    flag0=false;
    flag1=false;
    flag2=false;
    flag3=false;
    flag4=false;
    flag5=false;
    flag6=false;
    flag7=false;

}

void Cuadro::nBullet(int dir) {
    Bullet *b=new Bullet(dir);
    b->setPos(this->x()+22,this->y()+22);
    scene()->addItem(b);
}

