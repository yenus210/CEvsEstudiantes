//
// Created by yenus on 20/10/19.
//

#include "Cuadro.h"
#include "Game.h"
#include <QTimer>

extern Game * game;

Cuadro::Cuadro(QGraphicsItem *parent) {
    setPixmap(QPixmap("/home/yenus/CLionProjects/CEvsEstudiantes/art/block.png"));
}

void Cuadro::mousePressEvent(QGraphicsSceneMouseEvent *event) {

    popUp->show();
    string ruta =popUp->actCasilla();
    QPixmap pixa(ruta.c_str());
    QPixmap pixb = pixa.scaled(90, 90, Qt::IgnoreAspectRatio);
    setPixmap(pixb);
    popUp->close();
}

