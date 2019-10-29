#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QtWidgets/QPushButton>
#include "Zombie.h"
#include "Cuadro.h"
#include "../genetico/Estudiantes.h"
#include "../genetico/Evolucionador.h"

using namespace std;

class Game: public QGraphicsView{

public:
    Game(QWidget * parent=0);

    QGraphicsScene* scene;
    ~Game();
    QList<Cuadro *> buttonsL;
    QList<QGraphicsItem *> zombieL;


private:
    int cantidad = 10;
    //Se da acceso al cálculo del algoritmo genético

    /*//Arreglo inicial de 10 estudiantes con el que comenzará la población
    Estudiantes PrimeraGen[cantidad];
    Estudiantes SegundaGen[cantidad];
    Estudiantes TerceraGen[cantidad];
    Estudiantes CuartaGen[cantidad];
    Estudiantes QuintaGen[cantidad];*/
    //!@brief Función para detectar cuando el zombie está cerca de la torre
    void detectZombie();
    void cool();
    bool flag=false;
    //! Todos los botones de la matriz
    Cuadro* btnA1;
    Cuadro* btnA2;
    Cuadro* btnA3;
    Cuadro* btnA4;
    Cuadro* btnA5;
    Cuadro* btnA6;
    Cuadro* btnA7;
    Cuadro* btnA8;
    Cuadro* btnA9;
    Cuadro* btnA10;

    Cuadro* btnB1;
    Cuadro* btnB2;
    Cuadro* btnB3;
    Cuadro* btnB4;
    Cuadro* btnB5;
    Cuadro* btnB6;
    Cuadro* btnB7;
    Cuadro* btnB8;
    Cuadro* btnB9;
    Cuadro* btnB10;

    Cuadro* btnC1;
    Cuadro* btnC2;
    Cuadro* btnC3;
    Cuadro* btnC4;
    Cuadro* btnC5;
    Cuadro* btnC6;
    Cuadro* btnC7;
    Cuadro* btnC8;
    Cuadro* btnC9;
    Cuadro* btnC10;

    Cuadro* btnD1;
    Cuadro* btnD2;
    Cuadro* btnD3;
    Cuadro* btnD4;
    Cuadro* btnD5;
    Cuadro* btnD6;
    Cuadro* btnD7;
    Cuadro* btnD8;
    Cuadro* btnD9;
    Cuadro* btnD10;

    Cuadro* btnE1;
    Cuadro* btnE2;
    Cuadro* btnE3;
    Cuadro* btnE4;
    Cuadro* btnE5;
    Cuadro* btnE6;
    Cuadro* btnE7;
    Cuadro* btnE8;
    Cuadro* btnE9;
    Cuadro* btnE10;

    Cuadro* btnF1;
    Cuadro* btnF2;
    Cuadro* btnF3;
    Cuadro* btnF4;
    Cuadro* btnF5;
    Cuadro* btnF6;
    Cuadro* btnF7;
    Cuadro* btnF8;
    Cuadro* btnF9;
    Cuadro* btnF10;

    Cuadro* btnG1;
    Cuadro* btnG2;
    Cuadro* btnG3;
    Cuadro* btnG4;
    Cuadro* btnG5;
    Cuadro* btnG6;
    Cuadro* btnG7;
    Cuadro* btnG8;
    Cuadro* btnG9;
    Cuadro* btnG10;

    Cuadro* btnH1;
    Cuadro* btnH2;
    Cuadro* btnH3;
    Cuadro* btnH4;
    Cuadro* btnH5;
    Cuadro* btnH6;
    Cuadro* btnH7;
    Cuadro* btnH8;
    Cuadro* btnH9;
    Cuadro* btnH10;

    Cuadro* btnI1;
    Cuadro* btnI2;
    Cuadro* btnI3;
    Cuadro* btnI4;
    Cuadro* btnI5;
    Cuadro* btnI6;
    Cuadro* btnI7;
    Cuadro* btnI8;
    Cuadro* btnI9;
    Cuadro* btnI10;

    Cuadro* btnJ1;
    Cuadro* btnJ2;
    Cuadro* btnJ3;
    Cuadro* btnJ4;
    Cuadro* btnJ5;
    Cuadro* btnJ6;
    Cuadro* btnJ7;
    Cuadro* btnJ8;
    Cuadro* btnJ9;
    Cuadro* btnJ10;
    //! @brief Evento al presionar el el botón del mouse
    //! \param event
    void mousePressEvent(QMouseEvent *event);
};

#endif // GAME_H
