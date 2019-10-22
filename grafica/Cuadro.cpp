// Created by yenus on 20/10/19.

#include "Cuadro.h"
#include "Game.h"
#include "TorresPopUp.h"

extern Game * game;

Cuadro::Cuadro(QGraphicsItem *parent) {
    setPixmap(QPixmap("/home/yenus/CLionProjects/CEvsEstudiantes/art/block.png"));
}

void Cuadro::mousePressEvent(QGraphicsSceneMouseEvent *event) {
    auto* popUp=new TorresPopUp();
    popUp->show();
    popUp->setC(this);




}

