//
// Created by yenus on 16/10/19.
//

#ifndef CEVSESTUDIANTES_TORRESPOPUP_H
#define CEVSESTUDIANTES_TORRESPOPUP_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QtWidgets/QPushButton>
#include "Cuadro.h"

using namespace std;

class TorresPopUp: public QGraphicsView{
public:
    TorresPopUp(QWidget * parent=0);
    string torre = "";
private:
    QPushButton* torre1;
    QPushButton* torre2;
    QPushButton* torre3;
    QPushButton* torre4;
    void handletorre1();
    void handletorre2();
    void handletorre3();
    void handletorre4();
    Cuadro* C = new Cuadro();
public:
    void setC(Cuadro *c);


};


#endif //CEVSESTUDIANTES_TORRESPOPUP_H
