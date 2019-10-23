#include <QApplication>
#include "grafica/Game.h"
#include "path/lista.h"

Game * game;

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    game = new Game();
    game->show();


    return a.exec();
}
// Función que ejecuta el algoritmo A*
int A_star_test(){

    // Declarar un laberinto
    int maze[][10] = { {0,0,1,0,0,0,0,0,0,0},
                       {0,0,1,0,0,0,0,0,0,0},
                       {0,0,1,0,0,0,0,0,0,0},
                       {0,1,0,0,0,1,1,0,0,0},
                       {0,0,1,0,0,0,1,0,0,0},
                       {0,0,0,0,0,0,0,0,0,1},
                       {0,0,0,1,0,0,0,0,0,1},
                       {0,0,0,1,0,0,0,0,0,1},
                       {0,0,0,1,0,0,1,1,0,0},
                       {0,0,0,1,0,0,0,1,0,0}};

    // Ejecutar el algoritmo A*
    /*A_star* solver = new A_star();
    solver->A_star_Search(maze,make_pair(0,0));

    // Obtener la ruta como String
    string my_Path = solver->get_Path();
    int time = solver->get_Time();
    delete(solver);*/

    // Muestra en consola la ruta encontrada
    /*cout<<my_Path<<endl;*/

    return 0;
}