//
// Created by yenus on 23/10/19.
//

#include <QtWidgets/QMessageBox>
#include "Menu.h"


extern Game * game;
Menu::Menu(QWidget *parent) {
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,450,475); // make the scene 800x600 instead of infinity by infinity (default)
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(450,475);
    setBackgroundBrush(QBrush(QImage("../art/bg.png")));

    btn1 = new QPushButton("Modo\nProfe",this);
    btn1->setFont(QFont("times",16,63));
    btn1->setGeometry(140, 120, 180 , 90);
    connect(btn1 ,&QPushButton::clicked, this, &Menu::handlebtn1);
    btn1->setStyleSheet("QPushButton { border-image: url(../art/butBG.png); color: white;}");

    btn2 = new QPushButton("Modo\nEstudiante",this);
    btn2->setFont(QFont("times",16,63));
    btn2->setGeometry(140, 250, 180 , 90);
    connect(btn2 ,&QPushButton::clicked, this, &Menu::handlebtn2);
    btn2->setStyleSheet("QPushButton { border-image: url(../art/butBG.png); color: white;}");

    btn2 = new QPushButton("Reglas",this);
    btn2->setFont(QFont("times",16,63));
    btn2->setGeometry(0, 0, 130 , 70);
    connect(btn2 ,&QPushButton::clicked, this, &Menu::handlebtn3);
    btn2->setStyleSheet("QPushButton { border-image: url(../art/butBG.png); color: white;}");

    QTimer * timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this, &Menu::genZomb);

    // start the timer
    timer->start(100);

}

void Menu::mousePressEvent(QMouseEvent *event) {
    QGraphicsView::mousePressEvent(event);
}

void Menu::handlebtn1() {
    for (QGraphicsItem * zomb:zombieL){
        scene->removeItem(zomb);
        delete zomb;
    }
    close();
    game->oleada=1;
    game->modo=0;
    game->show();
}

void Menu::handlebtn2() {
    for (QGraphicsItem * zomb:zombieL){
        scene->removeItem(zomb);
        delete zomb;
    }
    close();
    game->oleada=1;
    game->modo=1;
    game->show();
}
void Menu::genZomb() {

    int random = rand() % 5;
    Zombie *z = new Zombie(Estudiantes(),0,random);
    zombieL.append(z);
    QList<string> List = {"Menu"};
    z->setRuta(List);
    z->gapy = new int (0);
    scene->addItem(z);
}

void Menu::handlebtn3() {
    QMessageBox mens = QMessageBox();
    mens.setText("Regla #1: No colocar dos torres una al lado de otra\n"
                 "Regla #2: Al realizar un upgrade se reduce el precio de 5 creditos por torre\n"
                 "Regla #3: Cada torre cuesta 5 mas que la otra empezando en 5 creditos\n"
                 "Regla #4: No permitir el paso de estudiantes en el modo profe\n"
                 "Regla #5: Divertirse en el modo estudiante\n"
                 "Regla #6: No comentar los bugs encontrados en el juego\n"
                 "Regla #7: Hacer click sobre los estudiantes para obtener sus estadisticas");
    mens.exec();
}
