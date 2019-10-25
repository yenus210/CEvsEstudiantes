//
// Created by yenus on 23/10/19.
//

#include "Menu.h"


extern Game * game;
Menu::Menu(QWidget *parent) {
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,450,475); // make the scene 800x600 instead of infinity by infinity (default)
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(450,475);

    btn1 = new QPushButton("Modo\nProfe",this);
    btn1->setFont(QFont("times",16,63));
    btn1->setGeometry(160, 130, 130 , 60);
    connect(btn1 ,&QPushButton::clicked, this, &Menu::handlebtn1);

    btn2 = new QPushButton("Modo\nEstudiante",this);
    btn2->setFont(QFont("times",16,63));
    btn2->setGeometry(160, 260, 130 , 60);
    connect(btn2 ,&QPushButton::clicked, this, &Menu::handlebtn2);

    QTimer * timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this, &Menu::genZomb);

    // start the timer
    timer->start(50);

}

void Menu::mousePressEvent(QMouseEvent *event) {
    QGraphicsView::mousePressEvent(event);
}

void Menu::handlebtn1() {
    game->show();
    for (QGraphicsItem * zomb:zombieL){
        scene->removeItem(zomb);
        delete zomb;
    }
    close();
}

void Menu::handlebtn2() {

}
void Menu::genZomb() {

    int random = rand() % 4;
    Zombie *z = new Zombie(0,random);
    zombieL.append(z);
    QList<string> List = {"Menu"};
    z->setRuta(List);
    z->gapy = new int (0);
    scene->addItem(z);
}
