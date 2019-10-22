//
// Created by yenus on 16/10/19.
//

#ifndef CEVSESTUDIANTES_TORRESPOPUP_H
#define CEVSESTUDIANTES_TORRESPOPUP_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include <iostream>
#include <QtWidgets/QPushButton>


using namespace std;

class TorresPopUp: public QGraphicsView{
public:
    TorresPopUp(QWidget * parent=0);
    string actCasilla();
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



};


#endif //CEVSESTUDIANTES_TORRESPOPUP_H
