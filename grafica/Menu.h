//
// Created by yenus on 23/10/19.
//

#ifndef CEVSESTUDIANTES_MENU_H
#define CEVSESTUDIANTES_MENU_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QtWidgets/QPushButton>
#include <cstdlib>
#include "Cuadro.h"
#include "Game.h"

using namespace std;
class Menu :public QGraphicsView{
public:
    Menu(QWidget * parent=0);
    QGraphicsScene* scene;
    QList<QGraphicsItem *> zombieL;
private:
    void mousePressEvent(QMouseEvent *event);
    QPushButton* btn1;
    QPushButton* btn2;

    void handlebtn1();
    void handlebtn2();

    void genZomb();
};


#endif //CEVSESTUDIANTES_MENU_H
