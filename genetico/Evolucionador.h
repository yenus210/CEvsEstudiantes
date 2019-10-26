//
// Created by joshua on 24/10/19.
//

#ifndef GENETICO_EVOLUCIONADOR_H
#define GENETICO_EVOLUCIONADOR_H


#include "Estudiantes.h"


class Evolucionador {



    public:

    Evolucionador();

    Estudiantes* Evolucion(Estudiantes* a);

    int* Obtener_Resistencia(Estudiantes* arreglo);

    Estudiantes* Seleccion(int* chequear_resistencia, Estudiantes[]);

    Estudiantes* Cruce(Estudiantes padre1, Estudiantes padre2);

    int Mutacion();

    int Index (int arr[], int t);

};


#endif //GENETICO_EVOLUCIONADOR_H
