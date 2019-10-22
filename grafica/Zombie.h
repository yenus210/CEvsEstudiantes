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
    Zombie(int zombie, QGraphicsItem * parent=0);

private:
    int move();
    int zombienum=1;
    int cont=1;
    string rutaOgro="/home/yenus/CLionProjects/CEvsEstudiantes/art/ogro";
    string rutaDark="/home/yenus/CLionProjects/CEvsEstudiantes/art/dark";
    string rutaArpia="/home/yenus/CLionProjects/CEvsEstudiantes/art/arpia";
    string rutaMerc="/home/yenus/CLionProjects/CEvsEstudiantes/art/mercenario";

public:
    int getZombienum() const;

    void setZombienum(int zombienum);
};


#endif //CEVSESTUDIANTES_ZOMBIE_H
