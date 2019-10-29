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
    //! @brief Constructor del campo/matriz del juego
    //! \param parent
    Cuadro(QGraphicsItem * parent=0);
    //! Evento al presiona el botón de l mouse
    //! \param event
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    bool ocupado = false;
    int rango = 1;

    //! @brief maneja los disparos
    //! \param dir dirección de los disparos
    void fire(int dir);

};

#endif //CEVSESTUDIANTES_CUADRO_H
