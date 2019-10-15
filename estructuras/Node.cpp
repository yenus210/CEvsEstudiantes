//
// Created by yenus on 11/10/19.
//

#include "Node.h"
// Constructor por defecto
Node::Node()
{
    data = string();
    next = NULL;
}

// Constructor por parámetro
Node::Node(string data_)
{
    data = data_;
    a1 = NULL;
    a2 = NULL;
    a3 = NULL;
    back = NULL;
    next = NULL;
    b1 = NULL;
    b2 = NULL;
    b3 = NULL;
}

// Eliminar todos los Nodos

void Node::delete_all()
{
    if (next)
        next->delete_all();
    delete this;
}

// Imprimir un Nodo
void Node::print(string s)
{
    cout<<data<<endl;
}


Node::~Node() {}