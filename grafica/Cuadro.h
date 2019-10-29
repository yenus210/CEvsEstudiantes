// Created by yenus on 20/10/19.

#ifndef CEVSESTUDIANTES_CUADRO_H
#define CEVSESTUDIANTES_CUADRO_H

#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QObject>
#include <QTimer>


using namespace std;
class Cuadro: public QObject, public QGraphicsPixmapItem{
public:

    Cuadro(QGraphicsItem * parent=0);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    bool ocupado = false;
    int rango = 1;
    void fire(int dir);
    void actMatriz();
    int xm=0;
    int ym=0;


};

#endif //CEVSESTUDIANTES_CUADRO_H
