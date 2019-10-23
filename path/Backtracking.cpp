//
// Created by ashley on 22/10/19.
//
#include "lista.h"
#include "Backtracking.h"

/* -------------------------------
 *          CONSTRUCTOR
 * -------------------------------*/
Backtracking::Backtracking(){

}

/* -------------------------------
 *          METODOS UTIL
 * -------------------------------*/

// Metodo inicial de la funcion
string Backtracking::Backtracking_Search(int (*maze)[10]){

    Lista *path = new Lista();
    if(!Backtracking_Solver(maze,0,0,path)){
        return this->_path;
    }

    return this->_path;
}


// Metodo recursivo de Backtracking
bool Backtracking::Backtracking_Solver(int (*maze)[10], int x, int y, Lista *path){

    // Si (x,y) es la salida return true
    if(x == 9 && y == 9)
    {
        // Se agrega (x,y) al path
        path->push_back(to_string(x) + to_string(y) + "-");
        maze[x][y] = 5;

        // Se convierte la lista al string
        trace_path(path);
        return true;
    }

    // Verifica si maze[x][y] es una posicion valida
    if(is_safe_Bt(maze,x,y))
    {
        // Marcar x,y como parte del path
        path->push_back(to_string(x)+to_string(y)+"-" );
        maze[x][y] = 5;

        // Moverse hacia adelante
        if (Backtracking_Solver(maze, x, y+1, path) == true)
            return true;

        /* Si moverse hacia el frente no es una solucion
           entonces intenta moverse hacia abajo  */
        if (Backtracking_Solver(maze, x+1, y, path) == true)
            return true;

        /* Si ninguna de estas lleva a una solucion entonces
           intenta moverse en diagonal */
        if(Backtracking_Solver(maze,x+1,y+1,path)){
            return true;
        }

        /* Si ninguno de estos movimientos, lleva a una solucion, realizar BACKTRACK:
            desmarcar x,y como parte de la solucion */
        path->pop_back();
        maze[x][y] = 0;
        return false;
    }

    return false;
}

/* -------------------------------
 *          METODOS EXTRA
 * -------------------------------*/

// Metodo que valida si la posicion es valida
bool Backtracking::is_safe_Bt(int (*maze)[10],int x, int y){
    // Si (x,y) se encuentra fuera del laberinto return False
    if(x >= 0 && x < 10 && y >= 0 && y < 10 && maze[x][y] == 0){
        return true;
    }
    return false;
}

// Metodo que muestra el path en consola
void Backtracking::trace_path(Lista *path){
    while(!path->empty()){
        _path += path->pop_front();
    }
    //cout<<_path<<endl;
}