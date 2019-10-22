//
// Created by yenus on 16/10/19.
//

#include "TorresPopUp.h"
#include "Game.h"

extern Game * game;
TorresPopUp::TorresPopUp(QWidget * parent){

    torre1 = new QPushButton("", this);
    torre1->setGeometry(10, 10, 90 , 90);
    connect(torre1 ,&QPushButton::clicked, this, &TorresPopUp::handletorre1);

    torre2 = new QPushButton("", this);
    torre2->setGeometry(110, 10, 90 , 90);
    connect(torre2 ,&QPushButton::clicked, this,&TorresPopUp::handletorre2);

    torre3 = new QPushButton("", this);
    torre3->setGeometry(210, 10, 90 , 90);
    connect(torre3 ,&QPushButton::clicked, this, &TorresPopUp::handletorre3);

    torre4 = new QPushButton("", this);
    torre4->setGeometry(310, 10, 90 , 90);
    connect(torre4 ,&QPushButton::clicked, this, &TorresPopUp::handletorre4);


    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(410,110);

    QPixmap pix1("/home/yenus/CLionProjects/CEvsEstudiantes/art/torre1.png");
    QPixmap pixA = pix1.scaled(90, 90, Qt::IgnoreAspectRatio);
    torre1->setIcon(pixA);
    torre1->setIconSize(pixA.rect().size());

    QPixmap pix2("/home/yenus/CLionProjects/CEvsEstudiantes/art/torre2.png");
    QPixmap pixB = pix2.scaled(90, 90, Qt::IgnoreAspectRatio);
    torre2->setIcon(pixB);
    torre2->setIconSize(pixB.rect().size());

    QPixmap pix3("/home/yenus/CLionProjects/CEvsEstudiantes/art/torre3.png");
    QPixmap pixC = pix3.scaled(90, 90, Qt::IgnoreAspectRatio);
    torre3->setIcon(pixC);
    torre3->setIconSize(pixC.rect().size());


    QPixmap pix4("/home/yenus/CLionProjects/CEvsEstudiantes/art/torre4.png");
    QPixmap pixD = pix4.scaled(90, 90, Qt::IgnoreAspectRatio);
    torre4->setIcon(pixD);
    torre4->setIconSize(pixD.rect().size());
}

void TorresPopUp::handletorre1() {
    torre ="/home/yenus/CLionProjects/CEvsEstudiantes/art/blocktorre1.png";

    QPixmap pixa(torre.c_str());
    QPixmap pixb = pixa.scaled(90, 90, Qt::IgnoreAspectRatio);
    C->setPixmap(pixb);
    C->ocupado=true;
    close();
}

void TorresPopUp::handletorre2() {
    torre ="/home/yenus/CLionProjects/CEvsEstudiantes/art/blocktorre2.png";

    QPixmap pixa(torre.c_str());
    QPixmap pixb = pixa.scaled(90, 90, Qt::IgnoreAspectRatio);
    C->setPixmap(pixb);
    C->ocupado=true;
    close();
}

void TorresPopUp::handletorre3() {
    torre = "/home/yenus/CLionProjects/CEvsEstudiantes/art/blocktorre3.png";

    QPixmap pixa(torre.c_str());
    QPixmap pixb = pixa.scaled(90, 90, Qt::IgnoreAspectRatio);
    C->setPixmap(pixb);
    C->ocupado=true;
    close();
}

void TorresPopUp::handletorre4() {
    torre="/home/yenus/CLionProjects/CEvsEstudiantes/art/blocktorre4.png";

    QPixmap pixa(torre.c_str());
    QPixmap pixb = pixa.scaled(90, 90, Qt::IgnoreAspectRatio);
    C->setPixmap(pixb);
    C->ocupado=true;
    close();
}

void TorresPopUp::setC(Cuadro *c) {
    C = c;
}


