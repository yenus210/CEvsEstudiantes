//
// Created by yenus on 11/10/19.
//

#ifndef CEVSESTUDIANTES_LIST_H
#define CEVSESTUDIANTES_LIST_H

#ifndef LIST_H
#define LIST_H

#include <fstream>
#include <iostream>

#include <stdlib.h>

#include "Node.h"
using namespace std;
/**
 * @brief Clase Lista, define la estructura de datos de lista enlazada en la cual se van a almacenar Peliculas, Basado en: https://github.com/ronnyml/C-Tutorial-Series/tree/master/Listas_enlazadas
 */
class List
{
public:
    List();
    ~List();
/**
 * @brief Metodo para agregar Peliculas al final de la lista
 * @param p Pelicula a Almacenar
 */
    void add_next(string n);
    void add_back(string b);
    void add_a1(string a1);
    void add_a2(string a2);
    void add_a3(string a3);
    void add_b1(string b1);
    void add_b2(string b2);
    void add_b3(string b3);


    /**
     * @brief Metodo para obtener una impresion en consola de la Lista
     */
    void print();
    /**
     * @brief Metodo para obtener un Nodo por su posicion en la Lista
     * @param pos entero que indica la posicion
     * @return La pelicula en tal posicion indicada
     */
    string obt_by_position(int pos);
    /**
     * @brief metodo cant usado para obtener la cantidad total de nodos
     * @return retorna la cantidad total de nodos en la lista
     */
    int cant();

private:
    Node* m_head;
    int m_num_nodes;
};

#endif // LIST_H


#endif //CEVSESTUDIANTES_LIST_H
