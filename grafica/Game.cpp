#include "Game.h"
#include <QTimer>
#include <QGraphicsTextItem>

Game::Game(QWidget *parent){
    // create the scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,900,950); // make the scene 800x600 instead of infinity by infinity (default)
    int gapy=50;
    // make the newly created scene the scene to visualize (since Game is a QGraphicsView Widget,
    // it can be used to visualize scenes)
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(900,950);

    btnA1 = new Cuadro();
    btnA2 = new Cuadro();
    btnA3 = new Cuadro();
    btnA4 = new Cuadro();
    btnA5 = new Cuadro();
    btnA6 = new Cuadro();
    btnA7 = new Cuadro();
    btnA8 = new Cuadro();
    btnA9 = new Cuadro();
    btnA10 = new Cuadro();

    btnB1 = new Cuadro();
    btnB2 = new Cuadro();
    btnB3 = new Cuadro();
    btnB4 = new Cuadro();
    btnB5 = new Cuadro();
    btnB6 = new Cuadro();
    btnB7 = new Cuadro();
    btnB8 = new Cuadro();
    btnB9 = new Cuadro();
    btnB10 = new Cuadro();

    btnC1 = new Cuadro();
    btnC2 = new Cuadro();
    btnC3 = new Cuadro();
    btnC4 = new Cuadro();
    btnC5 = new Cuadro();
    btnC6 = new Cuadro();
    btnC7 = new Cuadro();
    btnC8 = new Cuadro();
    btnC9 = new Cuadro();
    btnC10 = new Cuadro();

    btnD1 = new Cuadro();
    btnD2 = new Cuadro();
    btnD3 = new Cuadro();
    btnD4 = new Cuadro();
    btnD5 = new Cuadro();
    btnD6 = new Cuadro();
    btnD7 = new Cuadro();
    btnD8 = new Cuadro();
    btnD9 = new Cuadro();
    btnD10 = new Cuadro();

    btnE1 = new Cuadro();
    btnE2 = new Cuadro();
    btnE3 = new Cuadro();
    btnE4 = new Cuadro();
    btnE5 = new Cuadro();
    btnE6 = new Cuadro();
    btnE7 = new Cuadro();
    btnE8 = new Cuadro();
    btnE9 = new Cuadro();
    btnE10 = new Cuadro();

    btnF1 = new Cuadro();
    btnF2 = new Cuadro();
    btnF3 = new Cuadro();
    btnF4 = new Cuadro();
    btnF5 = new Cuadro();
    btnF6 = new Cuadro();
    btnF7 = new Cuadro();
    btnF8 = new Cuadro();
    btnF9 = new Cuadro();
    btnF10 = new Cuadro();

    btnG1 = new Cuadro();
    btnG2 = new Cuadro();
    btnG3 = new Cuadro();
    btnG4 = new Cuadro();
    btnG5 = new Cuadro();
    btnG6 = new Cuadro();
    btnG7 = new Cuadro();
    btnG8 = new Cuadro();
    btnG9 = new Cuadro();
    btnG10 = new Cuadro();

    btnH1 = new Cuadro();
    btnH2 = new Cuadro();
    btnH3 = new Cuadro();
    btnH4 = new Cuadro();
    btnH5 = new Cuadro();
    btnH6 = new Cuadro();
    btnH7 = new Cuadro();
    btnH8 = new Cuadro();
    btnH9 = new Cuadro();
    btnH10 = new Cuadro();

    btnI1 = new Cuadro();
    btnI2 = new Cuadro();
    btnI3 = new Cuadro();
    btnI4 = new Cuadro();
    btnI5 = new Cuadro();
    btnI6 = new Cuadro();
    btnI7 = new Cuadro();
    btnI8 = new Cuadro();
    btnI9 = new Cuadro();
    btnI10 = new Cuadro();

    btnJ1 = new Cuadro();
    btnJ2 = new Cuadro();
    btnJ3 = new Cuadro();
    btnJ4 = new Cuadro();
    btnJ5 = new Cuadro();
    btnJ6 = new Cuadro();
    btnJ7 = new Cuadro();
    btnJ8 = new Cuadro();
    btnJ9 = new Cuadro();
    btnJ10 = new Cuadro();

    btnA1->setPos(0,gapy);
    scene->addItem(btnA1);

    btnA2->setPos(90,gapy);
    scene->addItem(btnA2);

    btnA3->setPos(180,gapy);
    scene->addItem(btnA3);

    btnA4->setPos(270,gapy);
    scene->addItem(btnA4);

    btnA5->setPos(360,gapy);
    scene->addItem(btnA5);

    btnA6->setPos(450,gapy);
    scene->addItem(btnA6);

    btnA7->setPos(540,gapy);
    scene->addItem(btnA7);

    btnA8->setPos(630,gapy);
    scene->addItem(btnA8);

    btnA9->setPos(720,gapy);
    scene->addItem(btnA9);

    btnA10->setPos(810,gapy);
    scene->addItem(btnA10);

    btnB1->setPos(0,gapy+90);
    scene->addItem(btnB1);

    btnB2->setPos(90,gapy+90);
    scene->addItem(btnB2);

    btnB3->setPos(180,gapy+90);
    scene->addItem(btnB3);

    btnB4->setPos(270,gapy+90);
    scene->addItem(btnB4);

    btnB5->setPos(360,gapy+90);
    scene->addItem(btnB5);

    btnB6->setPos(450,gapy+90);
    scene->addItem(btnB6);

    btnB7->setPos(540,gapy+90);
    scene->addItem(btnB7);

    btnB8->setPos(630,gapy+90);
    scene->addItem(btnB8);

    btnB9->setPos(720,gapy+90);
    scene->addItem(btnB9);

    btnB10->setPos(810,gapy+90);
    scene->addItem(btnB10);

    btnC1->setPos(0,gapy+180);
    scene->addItem(btnC1);

    btnC2->setPos(90,gapy+180);
    scene->addItem(btnC2);

    btnC3->setPos(180,gapy+180);
    scene->addItem(btnC3);

    btnC4->setPos(270,gapy+180);
    scene->addItem(btnC4);

    btnC5->setPos(360,gapy+180);
    scene->addItem(btnC5);

    btnC6->setPos(450,gapy+180);
    scene->addItem(btnC6);

    btnC7->setPos(540,gapy+180);
    scene->addItem(btnC7);

    btnC8->setPos(630,gapy+180);
    scene->addItem(btnC8);

    btnC9->setPos(720,gapy+180);
    scene->addItem(btnC9);

    btnC10->setPos(810,gapy+180);
    scene->addItem(btnC10);

    btnD1->setPos(0,gapy+270);
    scene->addItem(btnD1);

    btnD2->setPos(90,gapy+270);
    scene->addItem(btnD2);

    btnD3->setPos(180,gapy+270);
    scene->addItem(btnD3);

    btnD4->setPos(270,gapy+270);
    scene->addItem(btnD4);

    btnD5->setPos(360,gapy+270);
    scene->addItem(btnD5);

    btnD6->setPos(450,gapy+270);
    scene->addItem(btnD6);

    btnD7->setPos(540,gapy+270);
    scene->addItem(btnD7);

    btnD8->setPos(630,gapy+270);
    scene->addItem(btnD8);

    btnD9->setPos(720,gapy+270);
    scene->addItem(btnD9);

    btnD10->setPos(810,gapy+270);
    scene->addItem(btnD10);

    btnC1->setPos(0,gapy+270);
    scene->addItem(btnC1);

    btnC2->setPos(90,gapy+270);
    scene->addItem(btnC2);

    btnC3->setPos(180,gapy+270);
    scene->addItem(btnC3);

    btnC4->setPos(270,gapy+270);
    scene->addItem(btnC4);

    btnC5->setPos(360,gapy+270);
    scene->addItem(btnC5);

    btnC6->setPos(450,gapy+270);
    scene->addItem(btnC6);

    btnC7->setPos(540,gapy+270);
    scene->addItem(btnC7);

    btnC8->setPos(630,gapy+270);
    scene->addItem(btnC8);

    btnC9->setPos(720,gapy+270);
    scene->addItem(btnC9);

    btnC10->setPos(810,gapy+270);
    scene->addItem(btnC10);

    btnD1->setPos(0,gapy+270);
    scene->addItem(btnD1);

    btnD2->setPos(90,gapy+270);
    scene->addItem(btnD2);

    btnD3->setPos(180,gapy+270);
    scene->addItem(btnD3);

    btnD4->setPos(270,gapy+270);
    scene->addItem(btnD4);

    btnD5->setPos(360,gapy+270);
    scene->addItem(btnD5);

    btnD6->setPos(450,gapy+270);
    scene->addItem(btnD6);

    btnD7->setPos(540,gapy+270);
    scene->addItem(btnD7);

    btnD8->setPos(630,gapy+270);
    scene->addItem(btnD8);

    btnD9->setPos(720,gapy+270);
    scene->addItem(btnD9);

    btnD10->setPos(810,gapy+270);
    scene->addItem(btnD10);

    btnD1->setPos(0,gapy+270);
    scene->addItem(btnD1);

    btnD2->setPos(90,gapy+270);
    scene->addItem(btnD2);

    btnD3->setPos(180,gapy+270);
    scene->addItem(btnD3);

    btnD4->setPos(270,gapy+270);
    scene->addItem(btnD4);

    btnD5->setPos(360,gapy+270);
    scene->addItem(btnD5);

    btnD6->setPos(450,gapy+270);
    scene->addItem(btnD6);

    btnD7->setPos(540,gapy+270);
    scene->addItem(btnD7);

    btnD8->setPos(630,gapy+270);
    scene->addItem(btnD8);

    btnD9->setPos(720,gapy+270);
    scene->addItem(btnD9);

    btnD10->setPos(810,gapy+270);
    scene->addItem(btnD10);

/*
    // create the player
    player = new Player();
    player->setRect(0,0,100,100); // change the rect from 0x0 (default) to 100x100 pixels
    player->setPos(400,500); // TODO generalize to always be in the middle bottom of screen
    // make the player focusable and set it to be the current focus
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    // add the player to the scene
    scene->addItem(player);

    // create the score/health

    // spawn enemies
    QTimer * timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),player,SLOT(spawn()));
    timer->start(2000);

    show();
    */
}

Game::~Game() {

}

void Game::mousePressEvent(QMouseEvent *event) {
    QGraphicsView::mousePressEvent(event);
}
