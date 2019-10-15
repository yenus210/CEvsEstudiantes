#include "Game.h"
#include <QTimer>
#include <QGraphicsTextItem>
#include <QFont>

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

    btnA1 = new QPushButton("", this);
    btnA1->setGeometry(0, 0+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnA2 = new QPushButton("", this);
    btnA2->setGeometry(90, 0+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnA3 = new QPushButton("", this);
    btnA3->setGeometry(180, 0+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnA4 = new QPushButton("", this);
    btnA4->setGeometry(270, 0+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnA5 = new QPushButton("", this);
    btnA5->setGeometry(360, 0+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnA6 = new QPushButton("", this);
    btnA6->setGeometry(450, 0+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnA7 = new QPushButton("", this);
    btnA7->setGeometry(540, 0+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnA8 = new QPushButton("", this);
    btnA8->setGeometry(630, 0+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnA9 = new QPushButton("", this);
    btnA9->setGeometry(720, 0+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnA10 = new QPushButton("", this);
    btnA10->setGeometry(810, 0+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);



    btnB1 = new QPushButton("", this);
    btnB1->setGeometry(0, 90+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnB2 = new QPushButton("", this);
    btnB2->setGeometry(90, 90+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnB3 = new QPushButton("", this);
    btnB3->setGeometry(180, 90+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnB4 = new QPushButton("", this);
    btnB4->setGeometry(270, 90+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnB5 = new QPushButton("", this);
    btnB5->setGeometry(360, 90+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnB6 = new QPushButton("", this);
    btnB6->setGeometry(450, 90+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnB7 = new QPushButton("", this);
    btnB7->setGeometry(540, 90+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnB8 = new QPushButton("", this);
    btnB8->setGeometry(630, 90+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnB9 = new QPushButton("", this);
    btnB9->setGeometry(720, 90+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnB10 = new QPushButton("", this);
    btnB10->setGeometry(810, 90+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);



    btnC1 = new QPushButton("", this);
    btnC1->setGeometry(0, 180+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnC2 = new QPushButton("", this);
    btnC2->setGeometry(90, 180+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnC3 = new QPushButton("", this);
    btnC3->setGeometry(180, 180+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnC4 = new QPushButton("", this);
    btnC4->setGeometry(270, 180+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnC5 = new QPushButton("", this);
    btnC5->setGeometry(360, 180+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnC6 = new QPushButton("", this);
    btnC6->setGeometry(450, 180+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnC7 = new QPushButton("", this);
    btnC7->setGeometry(540, 180+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnC8 = new QPushButton("", this);
    btnC8->setGeometry(630, 180+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnC9 = new QPushButton("", this);
    btnC9->setGeometry(720, 180+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnC10 = new QPushButton("", this);
    btnC10->setGeometry(810, 180+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);



    btnD1 = new QPushButton("", this);
    btnD1->setGeometry(0, 270+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnD2 = new QPushButton("", this);
    btnD2->setGeometry(90, 270+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnD3 = new QPushButton("", this);
    btnD3->setGeometry(180, 270+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnD4 = new QPushButton("", this);
    btnD4->setGeometry(270, 270+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnD5 = new QPushButton("", this);
    btnD5->setGeometry(360, 270+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnD6 = new QPushButton("", this);
    btnD6->setGeometry(450, 270+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnD7 = new QPushButton("", this);
    btnD7->setGeometry(540, 270+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnD8 = new QPushButton("", this);
    btnD8->setGeometry(630, 270+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnD9 = new QPushButton("", this);
    btnD9->setGeometry(720, 270+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnD10 = new QPushButton("", this);
    btnD10->setGeometry(810, 270+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);



    btnE1 = new QPushButton("", this);
    btnE1->setGeometry(0, 360+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnE2 = new QPushButton("", this);
    btnE2->setGeometry(90, 360+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnE3 = new QPushButton("", this);
    btnE3->setGeometry(180, 360+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnE4 = new QPushButton("", this);
    btnE4->setGeometry(270, 360+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnE5 = new QPushButton("", this);
    btnE5->setGeometry(360, 360+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnE6 = new QPushButton("", this);
    btnE6->setGeometry(450, 360+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnE7 = new QPushButton("", this);
    btnE7->setGeometry(540, 360+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnE8 = new QPushButton("", this);
    btnE8->setGeometry(630, 360+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnE9 = new QPushButton("", this);
    btnE9->setGeometry(720, 360+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnE10 = new QPushButton("", this);
    btnE10->setGeometry(810, 360+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);



    btnF1 = new QPushButton("", this);
    btnF1->setGeometry(0, 450+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnF2 = new QPushButton("", this);
    btnF2->setGeometry(90, 450+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnF3 = new QPushButton("", this);
    btnF3->setGeometry(180, 450+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnF4 = new QPushButton("", this);
    btnF4->setGeometry(270, 450+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnF5 = new QPushButton("", this);
    btnF5->setGeometry(360, 450+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnF6 = new QPushButton("", this);
    btnF6->setGeometry(450, 450+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnF7 = new QPushButton("", this);
    btnF7->setGeometry(540, 450+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnF8 = new QPushButton("", this);
    btnF8->setGeometry(630, 450+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnF9 = new QPushButton("", this);
    btnF9->setGeometry(720, 450+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnF10 = new QPushButton("", this);
    btnF10->setGeometry(810, 450+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);



    btnG1 = new QPushButton("", this);
    btnG1->setGeometry(0, 540+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnG2 = new QPushButton("", this);
    btnG2->setGeometry(90, 540+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnG3 = new QPushButton("", this);
    btnG3->setGeometry(180, 540+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnG4 = new QPushButton("", this);
    btnG4->setGeometry(270, 540+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnG5 = new QPushButton("", this);
    btnG5->setGeometry(360, 540+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnG6 = new QPushButton("", this);
    btnG6->setGeometry(450, 540+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnG7 = new QPushButton("", this);
    btnG7->setGeometry(540, 540+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnG8 = new QPushButton("", this);
    btnG8->setGeometry(630, 540+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnG9 = new QPushButton("", this);
    btnG9->setGeometry(720, 540+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnG10 = new QPushButton("", this);
    btnG10->setGeometry(810, 540+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);




    btnH1 = new QPushButton("", this);
    btnH1->setGeometry(0, 630+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnH2 = new QPushButton("", this);
    btnH2->setGeometry(90, 630+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnH3 = new QPushButton("", this);
    btnH3->setGeometry(180, 630+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnH4 = new QPushButton("", this);
    btnH4->setGeometry(270, 630+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnH5 = new QPushButton("", this);
    btnH5->setGeometry(360, 630+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnH6 = new QPushButton("", this);
    btnH6->setGeometry(450, 630+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnH7 = new QPushButton("", this);
    btnH7->setGeometry(540, 630+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnH8 = new QPushButton("", this);
    btnH8->setGeometry(630, 630+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnH9 = new QPushButton("", this);
    btnH9->setGeometry(720, 630+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnH10 = new QPushButton("", this);
    btnH10->setGeometry(810, 630+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);




    btnI1 = new QPushButton("", this);
    btnI1->setGeometry(0, 720+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnI2 = new QPushButton("", this);
    btnI2->setGeometry(90, 720+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnI3 = new QPushButton("", this);
    btnI3->setGeometry(180, 720+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnI4 = new QPushButton("", this);
    btnI4->setGeometry(270, 720+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnI5 = new QPushButton("", this);
    btnI5->setGeometry(360, 720+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnI6 = new QPushButton("", this);
    btnI6->setGeometry(450, 720+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnI7 = new QPushButton("", this);
    btnI7->setGeometry(540, 720+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnI8 = new QPushButton("", this);
    btnI8->setGeometry(630, 720+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnI9 = new QPushButton("", this);
    btnI9->setGeometry(720, 720+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnI10 = new QPushButton("", this);
    btnI10->setGeometry(810, 720+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);




    btnJ1 = new QPushButton("", this);
    btnJ1->setGeometry(0, 810+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnJ2 = new QPushButton("", this);
    btnJ2->setGeometry(90, 810+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnJ3 = new QPushButton("", this);
    btnJ3->setGeometry(180, 810+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnJ4 = new QPushButton("", this);
    btnJ4->setGeometry(270, 810+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnJ5 = new QPushButton("", this);
    btnJ5->setGeometry(360, 810+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnJ6 = new QPushButton("", this);
    btnJ6->setGeometry(450, 810+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnJ7 = new QPushButton("", this);
    btnJ7->setGeometry(540, 810+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnJ8 = new QPushButton("", this);
    btnJ8->setGeometry(630, 810+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnJ9 = new QPushButton("", this);
    btnJ9->setGeometry(720, 810+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    btnJ10 = new QPushButton("", this);
    btnJ10->setGeometry(810, 810+gapy, 90 , 90);
    //connect(btnA1 ,&QPushButton::clicked, this, &Ventana::handleBtn1);

    QPixmap pix1("/home/yenus/CLionProjects/CEvsEstudiantes/art/block.png");
    QPixmap pix = pix1.scaled(90, 90, Qt::IgnoreAspectRatio);


    btnA1->setIcon(pix);
    btnA1->setIconSize(pix.rect().size());
    btnA2->setIcon(pix);
    btnA2->setIconSize(pix.rect().size());
    btnA3->setIcon(pix);
    btnA3->setIconSize(pix.rect().size());
    btnA4->setIcon(pix);
    btnA4->setIconSize(pix.rect().size());
    btnA5->setIcon(pix);
    btnA5->setIconSize(pix.rect().size());
    btnA6->setIcon(pix);
    btnA6->setIconSize(pix.rect().size());
    btnA7->setIcon(pix);
    btnA7->setIconSize(pix.rect().size());
    btnA8->setIcon(pix);
    btnA8->setIconSize(pix.rect().size());
    btnA9->setIcon(pix);
    btnA9->setIconSize(pix.rect().size());
    btnA10->setIcon(pix);
    btnA10->setIconSize(pix.rect().size());

    btnB1->setIcon(pix);
    btnB1->setIconSize(pix.rect().size());
    btnB2->setIcon(pix);
    btnB2->setIconSize(pix.rect().size());
    btnB3->setIcon(pix);
    btnB3->setIconSize(pix.rect().size());
    btnB4->setIcon(pix);
    btnB4->setIconSize(pix.rect().size());
    btnB5->setIcon(pix);
    btnB5->setIconSize(pix.rect().size());
    btnB6->setIcon(pix);
    btnB6->setIconSize(pix.rect().size());
    btnB7->setIcon(pix);
    btnB7->setIconSize(pix.rect().size());
    btnB8->setIcon(pix);
    btnB8->setIconSize(pix.rect().size());
    btnB9->setIcon(pix);
    btnB9->setIconSize(pix.rect().size());
    btnB10->setIcon(pix);
    btnB10->setIconSize(pix.rect().size());

    btnC1->setIcon(pix);
    btnC1->setIconSize(pix.rect().size());
    btnC2->setIcon(pix);
    btnC2->setIconSize(pix.rect().size());
    btnC3->setIcon(pix);
    btnC3->setIconSize(pix.rect().size());
    btnC4->setIcon(pix);
    btnC4->setIconSize(pix.rect().size());
    btnC5->setIcon(pix);
    btnC5->setIconSize(pix.rect().size());
    btnC6->setIcon(pix);
    btnC6->setIconSize(pix.rect().size());
    btnC7->setIcon(pix);
    btnC7->setIconSize(pix.rect().size());
    btnC8->setIcon(pix);
    btnC8->setIconSize(pix.rect().size());
    btnC9->setIcon(pix);
    btnC9->setIconSize(pix.rect().size());
    btnC10->setIcon(pix);
    btnC10->setIconSize(pix.rect().size());

    btnD1->setIcon(pix);
    btnD1->setIconSize(pix.rect().size());
    btnD2->setIcon(pix);
    btnD2->setIconSize(pix.rect().size());
    btnD3->setIcon(pix);
    btnD3->setIconSize(pix.rect().size());
    btnD4->setIcon(pix);
    btnD4->setIconSize(pix.rect().size());
    btnD5->setIcon(pix);
    btnD5->setIconSize(pix.rect().size());
    btnD6->setIcon(pix);
    btnD6->setIconSize(pix.rect().size());
    btnD7->setIcon(pix);
    btnD7->setIconSize(pix.rect().size());
    btnD8->setIcon(pix);
    btnD8->setIconSize(pix.rect().size());
    btnD9->setIcon(pix);
    btnD9->setIconSize(pix.rect().size());
    btnD10->setIcon(pix);
    btnD10->setIconSize(pix.rect().size());

    btnE1->setIcon(pix);
    btnE1->setIconSize(pix.rect().size());
    btnE2->setIcon(pix);
    btnE2->setIconSize(pix.rect().size());
    btnE3->setIcon(pix);
    btnE3->setIconSize(pix.rect().size());
    btnE4->setIcon(pix);
    btnE4->setIconSize(pix.rect().size());
    btnE5->setIcon(pix);
    btnE5->setIconSize(pix.rect().size());
    btnE6->setIcon(pix);
    btnE6->setIconSize(pix.rect().size());
    btnE7->setIcon(pix);
    btnE7->setIconSize(pix.rect().size());
    btnE8->setIcon(pix);
    btnE8->setIconSize(pix.rect().size());
    btnE9->setIcon(pix);
    btnE9->setIconSize(pix.rect().size());
    btnE10->setIcon(pix);
    btnE10->setIconSize(pix.rect().size());

    btnF1->setIcon(pix);
    btnF1->setIconSize(pix.rect().size());
    btnF2->setIcon(pix);
    btnF2->setIconSize(pix.rect().size());
    btnF3->setIcon(pix);
    btnF3->setIconSize(pix.rect().size());
    btnF4->setIcon(pix);
    btnF4->setIconSize(pix.rect().size());
    btnF5->setIcon(pix);
    btnF5->setIconSize(pix.rect().size());
    btnF6->setIcon(pix);
    btnF6->setIconSize(pix.rect().size());
    btnF7->setIcon(pix);
    btnF7->setIconSize(pix.rect().size());
    btnF8->setIcon(pix);
    btnF8->setIconSize(pix.rect().size());
    btnF9->setIcon(pix);
    btnF9->setIconSize(pix.rect().size());
    btnF10->setIcon(pix);
    btnF10->setIconSize(pix.rect().size());

    btnG1->setIcon(pix);
    btnG1->setIconSize(pix.rect().size());
    btnG2->setIcon(pix);
    btnG2->setIconSize(pix.rect().size());
    btnG3->setIcon(pix);
    btnG3->setIconSize(pix.rect().size());
    btnG4->setIcon(pix);
    btnG4->setIconSize(pix.rect().size());
    btnG5->setIcon(pix);
    btnG5->setIconSize(pix.rect().size());
    btnG6->setIcon(pix);
    btnG6->setIconSize(pix.rect().size());
    btnG7->setIcon(pix);
    btnG7->setIconSize(pix.rect().size());
    btnG8->setIcon(pix);
    btnG8->setIconSize(pix.rect().size());
    btnG9->setIcon(pix);
    btnG9->setIconSize(pix.rect().size());
    btnG10->setIcon(pix);
    btnG10->setIconSize(pix.rect().size());

    btnH1->setIcon(pix);
    btnH1->setIconSize(pix.rect().size());
    btnH2->setIcon(pix);
    btnH2->setIconSize(pix.rect().size());
    btnH3->setIcon(pix);
    btnH3->setIconSize(pix.rect().size());
    btnH4->setIcon(pix);
    btnH4->setIconSize(pix.rect().size());
    btnH5->setIcon(pix);
    btnH5->setIconSize(pix.rect().size());
    btnH6->setIcon(pix);
    btnH6->setIconSize(pix.rect().size());
    btnH7->setIcon(pix);
    btnH7->setIconSize(pix.rect().size());
    btnH8->setIcon(pix);
    btnH8->setIconSize(pix.rect().size());
    btnH9->setIcon(pix);
    btnH9->setIconSize(pix.rect().size());
    btnH10->setIcon(pix);
    btnH10->setIconSize(pix.rect().size());

    btnI1->setIcon(pix);
    btnI1->setIconSize(pix.rect().size());
    btnI2->setIcon(pix);
    btnI2->setIconSize(pix.rect().size());
    btnI3->setIcon(pix);
    btnI3->setIconSize(pix.rect().size());
    btnI4->setIcon(pix);
    btnI4->setIconSize(pix.rect().size());
    btnI5->setIcon(pix);
    btnI5->setIconSize(pix.rect().size());
    btnI6->setIcon(pix);
    btnI6->setIconSize(pix.rect().size());
    btnI7->setIcon(pix);
    btnI7->setIconSize(pix.rect().size());
    btnI8->setIcon(pix);
    btnI8->setIconSize(pix.rect().size());
    btnI9->setIcon(pix);
    btnI9->setIconSize(pix.rect().size());
    btnI10->setIcon(pix);
    btnI10->setIconSize(pix.rect().size());


    btnJ1->setIcon(pix);
    btnJ1->setIconSize(pix.rect().size());
    btnJ2->setIcon(pix);
    btnJ2->setIconSize(pix.rect().size());
    btnJ3->setIcon(pix);
    btnJ3->setIconSize(pix.rect().size());
    btnJ4->setIcon(pix);
    btnJ4->setIconSize(pix.rect().size());
    btnJ5->setIcon(pix);
    btnJ5->setIconSize(pix.rect().size());
    btnJ6->setIcon(pix);
    btnJ6->setIconSize(pix.rect().size());
    btnJ7->setIcon(pix);
    btnJ7->setIconSize(pix.rect().size());
    btnJ8->setIcon(pix);
    btnJ8->setIconSize(pix.rect().size());
    btnJ9->setIcon(pix);
    btnJ9->setIconSize(pix.rect().size());
    btnJ10->setIcon(pix);
    btnJ10->setIconSize(pix.rect().size());
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
