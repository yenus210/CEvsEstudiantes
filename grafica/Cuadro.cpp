//
// Created by yenus on 20/10/19.
//

#include "Cuadro.h"
#include "Game.h"

extern Game * game;

Cuadro::Cuadro(string id,QGraphicsItem *parent) {
    *iD = id;
    setPixmap(QPixmap("/home/yenus/CLionProjects/CEvsEstudiantes/art/block.png"));
}

void Cuadro::mousePressEvent(QGraphicsSceneMouseEvent *event) {
    handletorre("B9");
    popUp->actCasilla(casilla);
    popUp->show();

    QPixmap pixa(img.c_str());
    QPixmap pixb = pixa.scaled(90, 90, Qt::IgnoreAspectRatio);
    btnAct->setPixmap(pixb);
    popUp->close();
}

