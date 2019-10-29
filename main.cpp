#include <QApplication>
#include "grafica/Game.h"
#include "path/lista.h"
#include "path/A_star.h"
#include "path/Backtracking.h"
#include "grafica/Menu.h"

using namespace std;
Game * game;
Menu * menu;

int A_star_test(){

    typedef pair<int, int> Pair;
    typedef pair<double, pair<int, int>> pPair;

    int (*maze)[10] = (int(*)[10]) calloc(10,sizeof(*maze));

    Pair src = make_pair(0, rand()%9);
    Pair dest = make_pair(9, rand()%9);
    auto solver = new A_star();
    solver->aStarSearch(maze, src, dest);
    solver->get_path();


}




int main(int argc, char *argv[]){

    //A_star_test();
    QApplication a(argc, argv);

    menu = new Menu();
    game = new Game();
    menu->show();


    return a.exec();
}

