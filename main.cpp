#include <QApplication>
#include "grafica/Game.h"
#include "path/lista.h"
#include "path/A_star.h"
#include "path/Backtracking.h"
#include "grafica/Menu.h"

using namespace std;
Game * game;
Menu * menu;


/*
 * Funcion que se encarga de  realizar una prueba al algoritmo Backtracking
 */
int Backtracking_test(int maze[][10]){

    auto *solver1 = new Backtracking();
    solver1->Backtracking_Search(maze,0,3);
    return 0;
}

// Función que ejecuta el algoritmo A*
int A_star_test(int maze[][10]){


    typedef pair<int, int> Pair;
    typedef pair<double, pair<int, int>> pPair;
    auto *solver = new A_star();
    Pair src = make_pair(0, 3);
    Pair dest = make_pair(9, 9);
    solver->aStarSearch(maze, src, dest);
    return(0);
}

int main(int argc, char *argv[]){

    int (*maze)[10];
    maze = (int(*)[10]) calloc(10,sizeof(*maze));
    maze[0][4]=1;

    QApplication a(argc, argv);

    menu = new Menu();
    game = new Game();
    menu->show();
    A_star_test(maze);
    Backtracking_test(maze);


    return a.exec();
}

