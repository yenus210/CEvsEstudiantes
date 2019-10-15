//
// Created by yenus on 11/10/19.
//

#ifndef CEVSESTUDIANTES_NODE_H
#define CEVSESTUDIANTES_NODE_H

#include <string>
#include <iostream>

using namespace std;
class Node {

public:
    Node();
    /**
     * @brief Constructor nodo, define un nodo con su data Pelicula
     * @param p Pelicula a almacebar en tal nodo
     */
    Node(string s);
    ~Node();

    Node *a1;
    Node *a2;
    Node *a3;
    Node *back;
    Node *next;
    Node *b1;
    Node *b2;
    Node *b3;
    string data;

    void delete_all();
    void print(string s);
};


#endif //CEVSESTUDIANTES_NODE_H
