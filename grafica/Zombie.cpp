//
// Created by yenus on 20/10/19.
//

#include "Zombie.h"
#include <QTimer>
#include <QList>
#include <cstdlib> // rand() -> really large int
#include "Game.h"

extern Game * game;

Zombie::Zombie(int zombie, QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
    zombienum=zombie;
    //set random x position
    int random_number = rand() % 810;
    setPos(random_number,950);
    game->zombieL.append(this);

    // drew the rect
    switch(zombienum) {
        case 1:
            setPixmap(QPixmap((rutaOgro+"1.png").c_str()));
            break;
        case 2:
            setPixmap(QPixmap((rutaDark+"1.png").c_str()));
            break;
        case 3:
            setPixmap(QPixmap((rutaArpia+"1.png").c_str()));
            break;
        case 4:
            setPixmap(QPixmap((rutaMerc+"1.png").c_str()));
            break;
    }


    // make/connect a timer to move() the enemy every so often
    QTimer * timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this, &Zombie::move);

    // start the timer
    timer->start(50);
}

int Zombie::move(){
    switch(zombienum) {
        case 1:
            switch (cont){
                case 1:
                    setPixmap(QPixmap((rutaOgro+"1.png").c_str()));
                    cont++;
                    break;
                case 2:
                    setPixmap(QPixmap((rutaOgro+"2.png").c_str()));
                    cont++;
                    break;
                case 3:
                    setPixmap(QPixmap((rutaOgro+"3.png").c_str()));
                    cont=1;
                    break;
            }
            break;
        case 2:
            switch (cont){
                case 1:
                    setPixmap(QPixmap((rutaDark+"1.png").c_str()));
                    cont++;
                    break;
                case 2:
                    setPixmap(QPixmap((rutaDark+"2.png").c_str()));
                    cont++;
                    break;
                case 3:
                    setPixmap(QPixmap((rutaDark+"3.png").c_str()));
                    cont=1;
                    break;
            }
            break;
        case 3:
            switch (cont){
                case 1:
                    setPixmap(QPixmap((rutaArpia+"1.png").c_str()));cont++;
                    break;
                case 2:
                    setPixmap(QPixmap((rutaArpia+"2.png").c_str()));
                    cont++;
                    break;
                case 3:
                    setPixmap(QPixmap((rutaArpia+"3.png").c_str()));
                    cont=1;
                    break;
            }
            break;
        case 4:
            switch (cont){
                case 1:
                    setPixmap(QPixmap((rutaMerc+"1.png").c_str()));
                    cont++;
                    break;
                case 2:
                    setPixmap(QPixmap((rutaMerc+"2.png").c_str()));
                    cont++;
                    break;
                case 3:
                    setPixmap(QPixmap((rutaMerc+"3.png").c_str()));
                    cont=1;
                    break;
            }
            break;
    }

    setPos(x(),y()-7);

    // destroy enemy when it goes out of the screen
    if (pos().y() < 50){
        //decrease the health
        //game->health->decrease();
        scene()->removeItem(this);
        game->zombieL.removeOne(this);
        delete this;
    }
}

void Zombie::setRuta(QList<string> lista) {
    for(string nodo: lista){
        if (nodo=="A1"){
            destinoX=0;
            destinoY=0;
        }else if(nodo =="A2"){

        }else if (nodo=="A3"){

        }else if(nodo =="A4"){

        }else if (nodo=="A5"){

        }else if(nodo =="A6"){

        }else if (nodo=="A7"){

        }else if(nodo =="A8"){

        }else if (nodo=="A9"){

        }else if(nodo =="A10"){

        }else if (nodo=="B1"){

        }else if(nodo =="B2"){

        }else if (nodo=="B3"){

        }else if(nodo =="B4"){

        }else if (nodo=="B5"){

        }else if(nodo =="B6"){

        }else if (nodo=="B7"){

        }else if(nodo =="B8"){

        }else if (nodo=="B9"){

        }else if(nodo =="B10"){

        }else if (nodo=="C1"){

        }else if(nodo =="C2"){

        }else if (nodo=="C3"){

        }else if(nodo =="C4"){

        }else if (nodo=="C5"){

        }else if(nodo =="C6"){

        }else if (nodo=="C7"){

        }else if(nodo =="C8"){

        }else if (nodo=="C9"){

        }else if(nodo =="C10"){

        }else if (nodo=="D1"){

        }else if(nodo =="D2"){

        }else if (nodo=="D3"){

        }else if(nodo =="D4"){

        }else if (nodo=="D5"){

        }else if(nodo =="D6"){

        }else if (nodo=="D7"){

        }else if(nodo =="D8"){

        }else if (nodo=="D9"){

        }else if(nodo =="D10"){

        }else if (nodo=="E1"){

        }else if(nodo =="E2"){

        }else if (nodo=="E3"){

        }else if(nodo =="E4"){

        }else if (nodo=="E5"){

        }else if(nodo =="E6"){

        }else if (nodo=="E7"){

        }else if(nodo =="E8"){

        }else if (nodo=="E9"){

        }else if(nodo =="E10"){

        }else if (nodo=="F1"){

        }else if(nodo =="F2"){

        }else if (nodo=="F3"){

        }else if(nodo =="F4"){

        }else if (nodo=="F5"){

        }else if(nodo =="F6"){

        }else if (nodo=="F7"){

        }else if(nodo =="F8"){

        }else if (nodo=="F9"){

        }else if(nodo =="F10"){

        }else if (nodo=="G1"){

        }else if(nodo =="G2"){

        }else if (nodo=="G3"){

        }else if(nodo =="G4"){

        }else if (nodo=="G5"){

        }else if(nodo =="G6"){

        }else if (nodo=="G7"){

        }else if(nodo =="G8"){

        }else if (nodo=="G9"){

        }else if(nodo =="G10"){

        }else if (nodo=="H1"){

        }else if(nodo =="H2"){

        }else if (nodo=="H3"){

        }else if(nodo =="H4"){

        }else if (nodo=="H5"){

        }else if(nodo =="H6"){

        }else if (nodo=="H7"){

        }else if(nodo =="H8"){

        }else if (nodo=="H9"){

        }else if(nodo =="H10"){

        }else if (nodo=="I1"){

        }else if(nodo =="I2"){

        }else if (nodo=="I3"){

        }else if(nodo =="I4"){

        }else if (nodo=="I5"){

        }else if(nodo =="I6"){

        }else if (nodo=="I7"){

        }else if(nodo =="I8"){

        }else if (nodo=="I9"){

        }else if(nodo =="I10"){

        }else if (nodo=="J1"){

        }else if(nodo =="J2"){

        }else if (nodo=="J3"){

        }else if(nodo =="J4"){

        }else if (nodo=="J5"){

        }else if(nodo =="J6"){

        }else if (nodo=="J7"){

        }else if(nodo =="J8"){

        }else if (nodo=="J9"){

        }else if(nodo =="J10"){

        }
        }
}





