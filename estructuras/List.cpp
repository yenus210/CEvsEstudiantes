#include "List.h"

using namespace std;

// Constructor por defecto

List::List()
{
    m_num_nodes = 0;
    m_head = NULL;
}

// Insertar al inicio
void List::add_back(string b)
{
    Node *new_node = new Node (b);
    Node *temp = m_head;

    if (!m_head) {
        m_head = new_node;
    } else {
        while (temp->back != NULL) {
            temp = temp->back;
        }
        temp->back = new_node;
    }
    m_num_nodes++;
}

void List::add_next(string n) {
    Node *new_node = new Node (n);
    Node *temp = m_head;

    if (!m_head) {
        m_head = new_node;
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    m_num_nodes++;
}

void List::add_a1(string a1) {

}

void List::add_a2(string a2) {

}

void List::add_a3(string a3) {

}

void List::add_b1(string b1) {

}

void List::add_b2(string b2) {

}

void List::add_b3(string b3) {

}


// Obtener por posición del nodo
string List::obt_by_position(int pos) {
    Node *temp = m_head;

    for(int i=0; i<=m_num_nodes; i++){
        if (i==pos){
            return temp->data;
        }else{
            temp=temp->next;
        }
    }

}
int List::cant() {
    return m_num_nodes;
}
void List::print() {
    Node *temp = m_head;
    if (!m_head) {
        cout << "La Lista está vacía " << endl;
    } else {
        while (temp) {
            temp->print(temp->data);
            if (!temp->next) cout << "NULL";
            temp = temp->next;
        }
    }
}


List::~List() {}


