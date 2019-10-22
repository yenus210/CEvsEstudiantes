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
    void enfriaDisparo();
private:
    bool flag0 =false;
    bool flag1 =false;
    bool flag2 =false;
    bool flag3 =false;
    bool flag4 =false;
    bool flag5 =false;
    bool flag6 =false;
    bool flag7 =false;
    void nBullet(int dir);


};

#endif //CEVSESTUDIANTES_CUADRO_H
