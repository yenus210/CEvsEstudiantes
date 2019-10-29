//
// Created by yenus on 20/10/19.
//

#include "Zombie.h"
#include <QTimer>
#include <QList>
#include <cstdlib> // rand() -> really large int
#include "Game.h"
#include "Menu.h"

extern Game * game;
extern Menu * menu;

Zombie::Zombie(Estudiantes est,int ventana,int zombie, QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
    zombienum=zombie+1;
    ventanaN=ventana;
    estud=est;

    if (ventana ==0){
        random = rand() % 5;
        L={10,100,190,280,370,460};
        setPos(L.at(random),475);
    }else {
        random = rand() % 9;
        L={10,100,190,280,370,460,550,640,730,820};
        setPos(L.at(random),950);
    }

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
                    setPixmap(QPixmap((rutaArpia+"1.png").c_str()));
                    cont++;
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
    if (destinoX.length()>0&&destinoY.length()>0) {
        if (x() == destinoX.front() && y() == destinoY.front()) {
            destinoX.removeOne(destinoX.front());
            destinoY.removeOne(destinoY.front());
        } else if (x() < destinoX.front() && y() < destinoY.front()) {
            setPos(x() + vel, y() + vel);
        } else if (x() < destinoX.front() && y() == destinoY.front()) {
            setPos(x() + vel, y());
        } else if (x() == destinoX.front() && y() < destinoY.front()) {
            setPos(x(), y() + vel);
        } else if (x() > destinoX.front() && y() > destinoY.front()) {
            setPos(x() - vel, y() - vel);
        } else if (x() == destinoX.front() && y() > destinoY.front()) {
            setPos(x(), y() - vel);
        } else if (x() > destinoX.front() && y() == destinoY.front()) {
            setPos(x() - vel, y());
        } else if (x() > destinoX.front() && y() < destinoY.front()) {
            setPos(x() - vel, y() + vel);
        } else if (x() < destinoX.front() && y() > destinoY.front()) {
            setPos(x() + vel, y() - vel);
        }
    }

    // destroy enemy when it goes out of the screen
    if (ventanaN==0){
        if (pos().y() < -5){
            //decrease the health
            //game->health->decrease();
            scene()->removeItem(this);
            menu->zombieL.removeOne(this);
            game->zombieL.removeOne(this);
            delete this;
        }
    }else {
        if (pos().y() < 50){
            //decrease the health
            //game->health->decrease();
            scene()->removeItem(this);
            game->zombieL.removeOne(this);
            menu->zombieL.removeOne(this);
            game->paso();
            delete this;
        }
    }

}

void Zombie::setRuta(QList<string> lista) {
    for(string nodo: lista){
        if (nodo=="A1"){
            destinoX.append(10);
            destinoY.append(10);

        }else if(nodo =="A2"){
            destinoX.append(100);
            destinoY.append(10);


        }else if (nodo=="A3"){
            destinoX.append(190);
            destinoY.append(10);

        }else if(nodo =="A4"){
            destinoX.append(280);
            destinoY.append(10);

        }else if (nodo=="A5"){
            destinoX.append(370);
            destinoY.append(10);

        }else if(nodo =="A6"){
            destinoX.append(460);
            destinoY.append(10);

        }else if (nodo=="A7"){
            destinoX.append(550);
            destinoY.append(10);

        }else if(nodo =="A8"){
            destinoX.append(640);
            destinoY.append(10);

        }else if (nodo=="A9"){
            destinoX.append(730);
            destinoY.append(10);

        }else if(nodo =="A10"){
            destinoX.append(820);
            destinoY.append(10);

        }else if (nodo=="B1"){
            destinoX.append(10);
            destinoY.append(100);

        }else if(nodo =="B2"){
            destinoX.append(100);
            destinoY.append(100);

        }else if (nodo=="B3"){
            destinoX.append(190);
            destinoY.append(100);

        }else if(nodo =="B4"){
            destinoX.append(280);
            destinoY.append(100);

        }else if (nodo=="B5"){
            destinoX.append(370);
            destinoY.append(100);

        }else if(nodo =="B6"){
            destinoX.append(460);
            destinoY.append(100);

        }else if (nodo=="B7"){
            destinoX.append(550);
            destinoY.append(100);

        }else if(nodo =="B8"){
            destinoX.append(640);
            destinoY.append(100);

        }else if (nodo=="B9"){
            destinoX.append(730);
            destinoY.append(100);

        }else if(nodo =="B10"){
            destinoX.append(820);
            destinoY.append(100);

        }else if (nodo=="C1"){
            destinoX.append(10);
            destinoY.append(190);

        }else if(nodo =="C2"){
            destinoX.append(100);
            destinoY.append(190);

        }else if (nodo=="C3"){
            destinoX.append(190);
            destinoY.append(190);

        }else if(nodo =="C4"){
            destinoX.append(280);
            destinoY.append(190);

        }else if (nodo=="C5"){
            destinoX.append(370);
            destinoY.append(190);

        }else if(nodo =="C6"){
            destinoX.append(460);
            destinoY.append(190);

        }else if (nodo=="C7"){
            destinoX.append(550);
            destinoY.append(190);

        }else if(nodo =="C8"){
            destinoX.append(640);
            destinoY.append(190);

        }else if (nodo=="C9"){
            destinoX.append(730);
            destinoY.append(190);

        }else if(nodo =="C10"){
            destinoX.append(820);
            destinoY.append(190);

        }else if (nodo=="D1"){
            destinoX.append(10);
            destinoY.append(280);

        }else if(nodo =="D2"){
            destinoX.append(100);
            destinoY.append(280);

        }else if (nodo=="D3"){
            destinoX.append(190);
            destinoY.append(280);

        }else if(nodo =="D4"){
            destinoX.append(280);
            destinoY.append(280);

        }else if (nodo=="D5"){
            destinoX.append(370);
            destinoY.append(280);

        }else if(nodo =="D6"){
            destinoX.append(460);
            destinoY.append(280);

        }else if (nodo=="D7"){
            destinoX.append(550);
            destinoY.append(280);

        }else if(nodo =="D8"){
            destinoX.append(640);
            destinoY.append(280);

        }else if (nodo=="D9"){
            destinoX.append(730);
            destinoY.append(280);

        }else if(nodo =="D10"){
            destinoX.append(820);
            destinoY.append(280);

        }else if (nodo=="E1"){
            destinoX.append(10);
            destinoY.append(370);

        }else if(nodo =="E2"){
            destinoX.append(100);
            destinoY.append(370);

        }else if (nodo=="E3"){
            destinoX.append(190);
            destinoY.append(370);

        }else if(nodo =="E4"){
            destinoX.append(280);
            destinoY.append(370);

        }else if (nodo=="E5"){
            destinoX.append(370);
            destinoY.append(370);

        }else if(nodo =="E6"){
            destinoX.append(460);
            destinoY.append(370);

        }else if (nodo=="E7"){
            destinoX.append(550);
            destinoY.append(370);

        }else if(nodo =="E8"){
            destinoX.append(640);
            destinoY.append(370);

        }else if (nodo=="E9"){
            destinoX.append(730);
            destinoY.append(370);

        }else if(nodo =="E10"){
            destinoX.append(820);
            destinoY.append(370);

        }else if (nodo=="F1"){
            destinoX.append(10);
            destinoY.append(460);

        }else if(nodo =="F2"){
            destinoX.append(100);
            destinoY.append(460);


        }else if (nodo=="F3"){
            destinoX.append(190);
            destinoY.append(460);


        }else if(nodo =="F4"){
            destinoX.append(280);
            destinoY.append(460);


        }else if (nodo=="F5"){
            destinoX.append(370);
            destinoY.append(460);


        }else if(nodo =="F6"){
            destinoX.append(550);
            destinoY.append(460);

        }else if (nodo=="F7"){
            destinoX.append(460);
            destinoY.append(460);


        }else if(nodo =="F8"){
            destinoX.append(640);
            destinoY.append(460);


        }else if (nodo=="F9"){
            destinoX.append(730);
            destinoY.append(460);


        }else if(nodo =="F10"){
            destinoX.append(820);
            destinoY.append(460);

        }else if (nodo=="G1"){
            destinoX.append(10);
            destinoY.append(550);

        }else if(nodo =="G2"){
            destinoX.append(100);
            destinoY.append(550);

        }else if (nodo=="G3"){
            destinoX.append(190);
            destinoY.append(550);

        }else if(nodo =="G4"){
            destinoX.append(280);
            destinoY.append(550);

        }else if (nodo=="G5"){
            destinoX.append(370);
            destinoY.append(550);

        }else if(nodo =="G6"){
            destinoX.append(460);
            destinoY.append(550);

        }else if (nodo=="G7"){
            destinoX.append(550);
            destinoY.append(550);

        }else if(nodo =="G8"){
            destinoX.append(640);
            destinoY.append(550);

        }else if (nodo=="G9"){
            destinoX.append(730);
            destinoY.append(550);

        }else if(nodo =="G10"){
            destinoX.append(820);
            destinoY.append(550);

        }else if (nodo=="H1"){
            destinoX.append(10);
            destinoY.append(640);

        }else if(nodo =="H2"){
            destinoX.append(100);
            destinoY.append(640);

        }else if (nodo=="H3"){
            destinoX.append(190);
            destinoY.append(640);

        }else if(nodo =="H4"){
            destinoX.append(280);
            destinoY.append(640);

        }else if (nodo=="H5"){
            destinoX.append(370);
            destinoY.append(640);

        }else if(nodo =="H6"){
            destinoX.append(460);
            destinoY.append(640);

        }else if (nodo=="H7"){
            destinoX.append(550);
            destinoY.append(640);

        }else if(nodo =="H8"){
            destinoX.append(640);
            destinoY.append(640);

        }else if (nodo=="H9"){
            destinoX.append(730);
            destinoY.append(640);

        }else if(nodo =="H10"){
            destinoX.append(820);
            destinoY.append(640);

        }else if (nodo=="I1"){
            destinoX.append(10);
            destinoY.append(730);

        }else if(nodo =="I2"){
            destinoX.append(100);
            destinoY.append(730);

        }else if (nodo=="I3"){
            destinoX.append(190);
            destinoY.append(730);

        }else if(nodo =="I4"){
            destinoX.append(280);
            destinoY.append(730);

        }else if (nodo=="I5"){
            destinoX.append(370);
            destinoY.append(730);

        }else if(nodo =="I6"){
            destinoX.append(460);
            destinoY.append(730);

        }else if (nodo=="I7"){
            destinoX.append(550);
            destinoY.append(730);

        }else if(nodo =="I8"){
            destinoX.append(640);
            destinoY.append(730);

        }else if (nodo=="I9"){
            destinoX.append(730);
            destinoY.append(730);


        }else if(nodo =="I10"){
            destinoX.append(820);
            destinoY.append(730);

        }else if (nodo=="J1"){
            destinoX.append(10);
            destinoY.append(820);

        }else if(nodo =="J2"){
            destinoX.append(100);
            destinoY.append(820);

        }else if (nodo=="J3"){
            destinoX.append(190);
            destinoY.append(820);

        }else if(nodo =="J4"){
            destinoX.append(280);
            destinoY.append(820);

        }else if (nodo=="J5"){
            destinoX.append(370);
            destinoY.append(820);

        }else if(nodo =="J6"){
            destinoX.append(460);
            destinoY.append(820);

        }else if (nodo=="J7"){
            destinoX.append(550);
            destinoY.append(820);

        }else if(nodo =="J8"){
            destinoX.append(640);
            destinoY.append(820);

        }else if (nodo=="J9"){
            destinoX.append(730);
            destinoY.append(820);

        }else if(nodo =="J10"){
            destinoX.append(820);
            destinoY.append(820);

        }else if(nodo =="Menu"){
            destinoX.append(x());
            destinoY.append(-10);

        }
    }
}





