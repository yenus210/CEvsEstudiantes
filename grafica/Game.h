#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include <QtWidgets/QPushButton>
#include <iostream>

using namespace std;

class Game: public QGraphicsView{

public:
    Game(QWidget * parent=0);

    QGraphicsScene * scene;
    ~Game();
public slots:
    int btn(int but);
private:
    QPushButton* btnA1;
    QPushButton* btnA2;
    QPushButton* btnA3;
    QPushButton* btnA4;
    QPushButton* btnA5;
    QPushButton* btnA6;
    QPushButton* btnA7;
    QPushButton* btnA8;
    QPushButton* btnA9;
    QPushButton* btnA10;

    QPushButton* btnB1;
    QPushButton* btnB2;
    QPushButton* btnB3;
    QPushButton* btnB4;
    QPushButton* btnB5;
    QPushButton* btnB6;
    QPushButton* btnB7;
    QPushButton* btnB8;
    QPushButton* btnB9;
    QPushButton* btnB10;

    QPushButton* btnC1;
    QPushButton* btnC2;
    QPushButton* btnC3;
    QPushButton* btnC4;
    QPushButton* btnC5;
    QPushButton* btnC6;
    QPushButton* btnC7;
    QPushButton* btnC8;
    QPushButton* btnC9;
    QPushButton* btnC10;

    QPushButton* btnD1;
    QPushButton* btnD2;
    QPushButton* btnD3;
    QPushButton* btnD4;
    QPushButton* btnD5;
    QPushButton* btnD6;
    QPushButton* btnD7;
    QPushButton* btnD8;
    QPushButton* btnD9;
    QPushButton* btnD10;

    QPushButton* btnE1;
    QPushButton* btnE2;
    QPushButton* btnE3;
    QPushButton* btnE4;
    QPushButton* btnE5;
    QPushButton* btnE6;
    QPushButton* btnE7;
    QPushButton* btnE8;
    QPushButton* btnE9;
    QPushButton* btnE10;

    QPushButton* btnF1;
    QPushButton* btnF2;
    QPushButton* btnF3;
    QPushButton* btnF4;
    QPushButton* btnF5;
    QPushButton* btnF6;
    QPushButton* btnF7;
    QPushButton* btnF8;
    QPushButton* btnF9;
    QPushButton* btnF10;

    QPushButton* btnG1;
    QPushButton* btnG2;
    QPushButton* btnG3;
    QPushButton* btnG4;
    QPushButton* btnG5;
    QPushButton* btnG6;
    QPushButton* btnG7;
    QPushButton* btnG8;
    QPushButton* btnG9;
    QPushButton* btnG10;

    QPushButton* btnH1;
    QPushButton* btnH2;
    QPushButton* btnH3;
    QPushButton* btnH4;
    QPushButton* btnH5;
    QPushButton* btnH6;
    QPushButton* btnH7;
    QPushButton* btnH8;
    QPushButton* btnH9;
    QPushButton* btnH10;

    QPushButton* btnI1;
    QPushButton* btnI2;
    QPushButton* btnI3;
    QPushButton* btnI4;
    QPushButton* btnI5;
    QPushButton* btnI6;
    QPushButton* btnI7;
    QPushButton* btnI8;
    QPushButton* btnI9;
    QPushButton* btnI10;

    QPushButton* btnJ1;
    QPushButton* btnJ2;
    QPushButton* btnJ3;
    QPushButton* btnJ4;
    QPushButton* btnJ5;
    QPushButton* btnJ6;
    QPushButton* btnJ7;
    QPushButton* btnJ8;
    QPushButton* btnJ9;
    QPushButton* btnJ10;

};

#endif // GAME_H
