//
// Created by ashley on 24/10/19.
//

#ifndef CEVSESTUDIANTES_A_STAR_H
#define CEVSESTUDIANTES_A_STAR_H

// Bibliotecas
#include <iostream>
#include <vector>
#include <string>
#include "lista.h"

using namespace std;

// A structure to hold the neccesary parameters
struct cell
{
    // Row and Column index of its parent
    // Note that 0 <= i <= ROW-1 & 0 <= j <= COL-1
    int parent_i, parent_j;
    // f = g + h
    double f, g, h;
};

#define ROW 10
#define COL 10

class A_star{

public:
    Lista *strpath = new Lista;

    typedef pair<int, int> Pair;
    typedef pair<double, pair<int, int>> pPair;

    //! @brief Constructor
    A_star();
    Lista * get_path();
    bool isValid(int row, int col);
    bool isUnBlocked(int grid[][COL], int row, int col);
    bool isDestination(int row, int col, Pair dest);
    double calculateHValue(int row, int col, Pair dest);
    void tracePath(cell cellDetails[][COL], Pair dest);
    void aStarSearch(int grid[][COL], Pair src, Pair dest);

};
#endif //CEVSESTUDIANTES_A_STAR_H
