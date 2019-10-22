//
// Created by yenus on 20/10/19.
//

#ifndef CEVSESTUDIANTES_CUADRO_H
#define CEVSESTUDIANTES_CUADRO_H


#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

using namespace std;
class Cuadro: public QObject, public QGraphicsPixmapItem{
public:
    Cuadro(string id, QGraphicsItem * parent=0);
    string *iD = new string("");
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
};

#endif //CEVSESTUDIANTES_CUADRO_H
