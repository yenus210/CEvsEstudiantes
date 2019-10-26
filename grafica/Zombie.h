//
// Created by yenus on 20/10/19.
//

#ifndef CEVSESTUDIANTES_ZOMBIE_H
#define CEVSESTUDIANTES_ZOMBIE_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
using namespace std;
class Zombie: public QObject, public QGraphicsPixmapItem{
public:
    Zombie(int ventana, int zombie, QGraphicsItem * parent=0);
    void setRuta(QList<string> lista );
    int *gapy =new int(50);

private:
    int move();
    QList <int> destinoX = QList<int> {};
    QList <int> destinoY = QList<int> {};
    QList <int> L = QList<int> {};
    int random=0;
    int vel=5;
    int ventanaN;
    string rutaOgro="../art/ogro";
    string rutaDark="../art/dark";
    string rutaArpia="../art/arpia";
    string rutaMerc="../art/mercenario";
    int zombienum=1;
    int cont=1;



};


#endif //CEVSESTUDIANTES_ZOMBIE_H
