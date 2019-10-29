#include <QtWidgets/QMessageBox>
#include "Game.h"


Game::Game(QWidget *parent){
    // create the scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,900,950); // make the scene 800x600 instead of infinity by infinity (default)
    int gapy=50;
    cred=new QLabel(this);
    cred->setGeometry(10,0,100,50);
    cred->setText(QString::number(creditos));

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
    buttonsL.append(btnA1);

    btnA2->setPos(90,gapy);
    scene->addItem(btnA2);
    buttonsL.append(btnA2);

    btnA3->setPos(180,gapy);
    scene->addItem(btnA3);
    buttonsL.append(btnA3);

    btnA4->setPos(270,gapy);
    scene->addItem(btnA4);
    buttonsL.append(btnA4);

    btnA5->setPos(360,gapy);
    scene->addItem(btnA5);
    buttonsL.append(btnA5);

    btnA6->setPos(450,gapy);
    scene->addItem(btnA6);
    buttonsL.append(btnA6);

    btnA7->setPos(540,gapy);
    scene->addItem(btnA7);
    buttonsL.append(btnA7);

    btnA8->setPos(630,gapy);
    scene->addItem(btnA8);
    buttonsL.append(btnA8);

    btnA9->setPos(720,gapy);
    scene->addItem(btnA9);
    buttonsL.append(btnA9);

    btnA10->setPos(810,gapy);
    scene->addItem(btnA10);
    buttonsL.append(btnA10);

    btnB1->setPos(0,gapy+90);
    scene->addItem(btnB1);
    buttonsL.append(btnB1);

    btnB2->setPos(90,gapy+90);
    scene->addItem(btnB2);
    buttonsL.append(btnB2);

    btnB3->setPos(180,gapy+90);
    scene->addItem(btnB3);
    buttonsL.append(btnB3);

    btnB4->setPos(270,gapy+90);
    scene->addItem(btnB4);
    buttonsL.append(btnB4);

    btnB5->setPos(360,gapy+90);
    scene->addItem(btnB5);
    buttonsL.append(btnB5);

    btnB6->setPos(450,gapy+90);
    scene->addItem(btnB6);
    buttonsL.append(btnB6);

    btnB7->setPos(540,gapy+90);
    scene->addItem(btnB7);
    buttonsL.append(btnB7);

    btnB8->setPos(630,gapy+90);
    scene->addItem(btnB8);
    buttonsL.append(btnB8);

    btnB9->setPos(720,gapy+90);
    scene->addItem(btnB9);
    buttonsL.append(btnB9);

    btnB10->setPos(810,gapy+90);
    scene->addItem(btnB10);
    buttonsL.append(btnB10);

    btnC1->setPos(0,gapy+180);
    scene->addItem(btnC1);
    buttonsL.append(btnC1);

    btnC2->setPos(90,gapy+180);
    scene->addItem(btnC2);
    buttonsL.append(btnC2);

    btnC3->setPos(180,gapy+180);
    scene->addItem(btnC3);
    buttonsL.append(btnC3);

    btnC4->setPos(270,gapy+180);
    scene->addItem(btnC4);
    buttonsL.append(btnC4);

    btnC5->setPos(360,gapy+180);
    scene->addItem(btnC5);
    buttonsL.append(btnC5);

    btnC6->setPos(450,gapy+180);
    scene->addItem(btnC6);
    buttonsL.append(btnC6);

    btnC7->setPos(540,gapy+180);
    scene->addItem(btnC7);
    buttonsL.append(btnC7);

    btnC8->setPos(630,gapy+180);
    scene->addItem(btnC8);
    buttonsL.append(btnC8);

    btnC9->setPos(720,gapy+180);
    scene->addItem(btnC9);
    buttonsL.append(btnC9);

    btnC10->setPos(810,gapy+180);
    scene->addItem(btnC10);
    buttonsL.append(btnC10);

    btnD1->setPos(0,gapy+270);
    scene->addItem(btnD1);
    buttonsL.append(btnD1);

    btnD2->setPos(90,gapy+270);
    scene->addItem(btnD2);
    buttonsL.append(btnD2);

    btnD3->setPos(180,gapy+270);
    scene->addItem(btnD3);
    buttonsL.append(btnD3);

    btnD4->setPos(270,gapy+270);
    scene->addItem(btnD4);
    buttonsL.append(btnD4);

    btnD5->setPos(360,gapy+270);
    scene->addItem(btnD5);
    buttonsL.append(btnD5);

    btnD6->setPos(450,gapy+270);
    scene->addItem(btnD6);
    buttonsL.append(btnD6);

    btnD7->setPos(540,gapy+270);
    scene->addItem(btnD7);
    buttonsL.append(btnD7);

    btnD8->setPos(630,gapy+270);
    scene->addItem(btnD8);
    buttonsL.append(btnD8);

    btnD9->setPos(720,gapy+270);
    scene->addItem(btnD9);
    buttonsL.append(btnD9);

    btnD10->setPos(810,gapy+270);
    scene->addItem(btnD10);
    buttonsL.append(btnD10);

    btnE1->setPos(0,gapy+360);
    scene->addItem(btnE1);
    buttonsL.append(btnE1);

    btnE2->setPos(90,gapy+360);
    scene->addItem(btnE2);
    buttonsL.append(btnE2);

    btnE3->setPos(180,gapy+360);
    scene->addItem(btnE3);
    buttonsL.append(btnE3);

    btnE4->setPos(270,gapy+360);
    scene->addItem(btnE4);
    buttonsL.append(btnE4);

    btnE5->setPos(360,gapy+360);
    scene->addItem(btnE5);
    buttonsL.append(btnE5);

    btnE6->setPos(450,gapy+360);
    scene->addItem(btnE6);
    buttonsL.append(btnE6);

    btnE7->setPos(540,gapy+360);
    scene->addItem(btnE7);
    buttonsL.append(btnE7);

    btnE8->setPos(630,gapy+360);
    scene->addItem(btnE8);
    buttonsL.append(btnE8);

    btnE9->setPos(720,gapy+360);
    scene->addItem(btnE9);
    buttonsL.append(btnE9);

    btnE10->setPos(810,gapy+360);
    scene->addItem(btnE10);
    buttonsL.append(btnE10);

    btnF1->setPos(0,gapy+450);
    scene->addItem(btnF1);
    buttonsL.append(btnF1);

    btnF2->setPos(90,gapy+450);
    scene->addItem(btnF2);
    buttonsL.append(btnF2);

    btnF3->setPos(180,gapy+450);
    scene->addItem(btnF3);
    buttonsL.append(btnF3);

    btnF4->setPos(270,gapy+450);
    scene->addItem(btnF4);
    buttonsL.append(btnF4);

    btnF5->setPos(360,gapy+450);
    scene->addItem(btnF5);
    buttonsL.append(btnF5);

    btnF6->setPos(450,gapy+450);
    scene->addItem(btnF6);
    buttonsL.append(btnF6);

    btnF7->setPos(540,gapy+450);
    scene->addItem(btnF7);
    buttonsL.append(btnF7);

    btnF8->setPos(630,gapy+450);
    scene->addItem(btnF8);
    buttonsL.append(btnF8);

    btnF9->setPos(720,gapy+450);
    scene->addItem(btnF9);
    buttonsL.append(btnF9);

    btnF10->setPos(810,gapy+450);
    scene->addItem(btnF10);
    buttonsL.append(btnF10);

    btnG1->setPos(0,gapy+540);
    scene->addItem(btnG1);
    buttonsL.append(btnG1);

    btnG2->setPos(90,gapy+540);
    scene->addItem(btnG2);
    buttonsL.append(btnG2);

    btnG3->setPos(180,gapy+540);
    scene->addItem(btnG3);
    buttonsL.append(btnG3);

    btnG4->setPos(270,gapy+540);
    scene->addItem(btnG4);
    buttonsL.append(btnG4);

    btnG5->setPos(360,gapy+540);
    scene->addItem(btnG5);
    buttonsL.append(btnG5);

    btnG6->setPos(450,gapy+540);
    scene->addItem(btnG6);
    buttonsL.append(btnG6);

    btnG7->setPos(540,gapy+540);
    scene->addItem(btnG7);
    buttonsL.append(btnG7);

    btnG8->setPos(630,gapy+540);
    scene->addItem(btnG8);
    buttonsL.append(btnG8);

    btnG9->setPos(720,gapy+540);
    scene->addItem(btnG9);
    buttonsL.append(btnG9);

    btnG10->setPos(810,gapy+540);
    scene->addItem(btnG10);
    buttonsL.append(btnG10);

    btnH1->setPos(0,gapy+630);
    scene->addItem(btnH1);
    buttonsL.append(btnH1);

    btnH2->setPos(90,gapy+630);
    scene->addItem(btnH2);
    buttonsL.append(btnH2);

    btnH3->setPos(180,gapy+630);
    scene->addItem(btnH3);
    buttonsL.append(btnH3);

    btnH4->setPos(270,gapy+630);
    scene->addItem(btnH4);
    buttonsL.append(btnH4);

    btnH5->setPos(360,gapy+630);
    scene->addItem(btnH5);
    buttonsL.append(btnH5);

    btnH6->setPos(450,gapy+630);
    scene->addItem(btnH6);
    buttonsL.append(btnH6);

    btnH7->setPos(540,gapy+630);
    scene->addItem(btnH7);
    buttonsL.append(btnH7);

    btnH8->setPos(630,gapy+630);
    scene->addItem(btnH8);
    buttonsL.append(btnH8);

    btnH9->setPos(720,gapy+630);
    scene->addItem(btnH9);
    buttonsL.append(btnH9);

    btnH10->setPos(810,gapy+630);
    scene->addItem(btnH10);
    buttonsL.append(btnH10);

    btnI1->setPos(0,gapy+720);
    scene->addItem(btnI1);
    buttonsL.append(btnI1);

    btnI2->setPos(90,gapy+720);
    scene->addItem(btnI2);
    buttonsL.append(btnI2);
    maze[0][4]=1;

    btnI3->setPos(180,gapy+720);
    scene->addItem(btnI3);
    buttonsL.append(btnI3);

    btnI4->setPos(270,gapy+720);
    scene->addItem(btnI4);
    buttonsL.append(btnI4);

    btnI5->setPos(360,gapy+720);
    scene->addItem(btnI5);
    buttonsL.append(btnI5);

    btnI6->setPos(450,gapy+720);
    scene->addItem(btnI6);
    buttonsL.append(btnI6);

    btnI7->setPos(540,gapy+720);
    scene->addItem(btnI7);
    buttonsL.append(btnI7);

    btnI8->setPos(630,gapy+720);
    scene->addItem(btnI8);
    buttonsL.append(btnI8);

    btnI9->setPos(720,gapy+720);
    scene->addItem(btnI9);
    buttonsL.append(btnI9);

    btnI10->setPos(810,gapy+720);
    scene->addItem(btnI10);
    buttonsL.append(btnI10);

    btnJ1->setPos(0,gapy+810);
    scene->addItem(btnJ1);
    buttonsL.append(btnJ1);

    btnJ2->setPos(90,gapy+810);
    scene->addItem(btnJ2);
    buttonsL.append(btnJ2);

    btnJ3->setPos(180,gapy+810);
    scene->addItem(btnJ3);
    buttonsL.append(btnJ3);

    btnJ4->setPos(270,gapy+810);
    scene->addItem(btnJ4);
    buttonsL.append(btnJ4);

    btnJ5->setPos(360,gapy+810);
    scene->addItem(btnJ5);
    buttonsL.append(btnJ5);

    btnJ6->setPos(450,gapy+810);
    scene->addItem(btnJ6);
    buttonsL.append(btnJ6);

    btnJ7->setPos(540,gapy+810);
    scene->addItem(btnJ7);
    buttonsL.append(btnJ7);

    btnJ8->setPos(630,gapy+810);
    scene->addItem(btnJ8);
    buttonsL.append(btnJ8);

    btnJ9->setPos(720,gapy+810);
    scene->addItem(btnJ9);
    buttonsL.append(btnJ9);

    btnJ10->setPos(810,gapy+810);
    scene->addItem(btnJ10);
    buttonsL.append(btnJ10);


    // make/connect a timer to move() the bullet every so often
    QTimer * timer1 = new QTimer(this);
    connect(timer1,&QTimer::timeout,this,&Game::detectZombie);

    // start the timer
    timer1->start(100);

    QTimer * timer2 = new QTimer(this);
    connect(timer2,&QTimer::timeout,this,&Game::cool);

    // start the timer
    timer2->start(1000);

    QTimer * timer3 = new QTimer(this);
    connect(timer3,&QTimer::timeout,this,&Game::detectaOleada);

    // start the timer
    timer3->start(100);


}

Game::~Game() {

}
void Game::mousePressEvent(QMouseEvent *event) {
    QGraphicsView::mousePressEvent(event);
}

void Game::detectZombie() {
    if (!flag){
    for (Cuadro *item:buttonsL ){
        if (item->ocupado){
            for (QGraphicsItem *zomb :zombieL){
                //                                          //                                     //
                    if (zomb->y()>item->y() && zomb->y()<item->y()+90 && zomb->x()<item->x() && zomb->x()>item->x()-90*item->rango){
                        item->fire(0);
                        flag=true;
                    }else if(zomb->y()<item->y() && zomb->y()>item->y()-90*item->rango && zomb->x()<item->x() && zomb->x()>item->x()-90*item->rango){
                        item->fire(1);
                        flag=true;
                    }else if(zomb->y()>item->y()-90*item->rango && zomb->y()<item->y()&& zomb->x()>item->x() && zomb->x()<item->x()+90){
                        item->fire(2);
                        flag=true;
                    }else if(zomb->y()<item->y() && zomb->y()>item->y()-90*item->rango && zomb->x()>item->x()+90 && zomb->x()<item->x()+90+90*item->rango){
                        item->fire(3);
                        flag=true;
                    }else if(zomb->y()>item->y() && zomb->y()<item->y()+90 && zomb->x()>item->x()+90 && zomb->x()<item->x()+90+90*item->rango) {
                        item->fire(4);
                        flag=true;
                    }else if(zomb->y()>item->y()+90 && zomb->y()<item->y()+90+90*item->rango && zomb->x()>item->x()+90 && zomb->x()<item->x()+90+90*item->rango) {
                        item->fire(5);
                        flag=true;
                    }else if(zomb->y()>item->y()+90 && zomb->y()<item->y()+90+90*item->rango && zomb->x()>item->x() && zomb->x()<item->x()+90) {
                        item->fire(6);
                        flag=true;
                    }else if(zomb->y()>item->y()+90 && zomb->y()<item->y()+90+90*item->rango && zomb->x()>item->x() && zomb->x()<item->x()+90*item->rango) {
                        item->fire(7);
                        flag=true;
                    }
            }
            }
        }

    }
}

void Game::cool() {
    flag=false;
    cred->setText(QString::number(creditos));
}

void Game::detectaOleada() {
    if (zombieL.length()<1){
        switch(oleada){
            case 1:
                for (int i = 0; i < 10; i++){
                    Zombie *z = new Zombie(PrimeraGen[i],1,PrimeraGen[i].getEsI());
                    solver1.Backtracking_Search(maze,0,0);
                    L=QList <string>();
                    for (int a=0;a<solver1.get_path()->size();a++){
                        L.append(solver1.get_path()->get_index(a));
                    }
                    z->setRuta(L);
                    zombieL.append(z);
                    scene->addItem(z);
                }
                oleada+=1;
                break;
            case 2:
                for (int i = 0; i < 10; i++){
                    Zombie *z = new Zombie(SegundaGen[i],1,SegundaGen[i].getEsI());
                    Pair src = make_pair(rand()%9, 0);
                    Pair dest = make_pair(rand()%9, 9);
                    solver.aStarSearch(maze, src, dest);
                    L=QList <string>();
                    for (int a=0;a<solver.get_path()->size();a++){
                        L.append(solver.get_path()->get_index(a));
                    }
                    z->setRuta(L);
                    zombieL.append(z);
                    scene->addItem(z);
                }
                oleada+=1;
                break;
            case 3:
                for (int i = 0; i < 10; i++){
                    Zombie *z = new Zombie(TerceraGen[i],1,TerceraGen[i].getEsI());
                    Pair src = make_pair(rand()%9, 0);
                    Pair dest = make_pair(rand()%9, 9);
                    solver.aStarSearch(maze, src, dest);
                    L=QList <string>();
                    for (int a=0;a<solver.get_path()->size();a++){
                        L.append(solver.get_path()->get_index(a));
                    }
                    z->setRuta(L);
                    zombieL.append(z);
                    scene->addItem(z);
                }
                oleada+=1;
                break;
            case 4:
                for (int i = 0; i < 10; i++){
                    Zombie *z = new Zombie(CuartaGen[i],1,CuartaGen[i].getEsI());
                    Pair src = make_pair(rand()%9, 0);
                    Pair dest = make_pair(rand()%9, 9);
                    solver.aStarSearch(maze, src, dest);
                    L=QList <string>();
                    for (int a=0;a<solver.get_path()->size();a++){
                        L.append(solver.get_path()->get_index(a));
                    }
                    z->setRuta(L);
                    zombieL.append(z);
                    scene->addItem(z);
                }
                oleada+=1;
                break;
            case 5:
                for (int i = 0; i < 10; i++){
                    Zombie *z = new Zombie(QuintaGen[i],1,QuintaGen[i].getEsI());
                    Pair src = make_pair(rand()%9, 0);
                    Pair dest = make_pair(rand()%9, 9);
                    solver.aStarSearch(maze, src, dest);
                    L=QList <string>();
                    for (int a=0;a<solver.get_path()->size();a++){
                        L.append(solver.get_path()->get_index(a));
                    }
                    z->setRuta(L);
                    zombieL.append(z);
                    scene->addItem(z);
                }
                oleada+=1;
                break;
            case 6:
                //Fin juego
                break;
        }
    }

}

void Game::paso() {
    if (modo==0){
        QMessageBox mens = QMessageBox();
        mens.setText("Game Over");
        mens.exec();
        close();
    }else{

    }
}




