//
// Created by joshua on 24/10/19.
//

#include "Evolucionador.h"

#include "Estudiantes.h"

#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <iostream>


using namespace std;

 Evolucionador::Evolucionador() {


}

        //Función para controlar el proceso evolutivo de las distintas generaciones
        Estudiantes* Evolucionador::Evolucion(Estudiantes* a){
                Estudiantes NEW[10];
                Estudiantes are[2];


                int arreglogenetico[10];
                *arreglogenetico = *Obtener_Resistencia(a);
                *are = *Seleccion(arreglogenetico, a); //Arreglo para almacenar a los dos estudiantes con mejores fitness

                *NEW = *Cruce(are[0], are[1]);
                return
                NEW;
        }

        //Se reciben los estudiantes creados en la primera generación para las siguientes generaciones
        //Esta será la función de fitness para calcular a los mejores de cada generación
        //Esto lo toma contando la resistencia total de cada uno de los estudiantes
        int* Evolucionador::Obtener_Resistencia(Estudiantes  arreglo[]){
            int res[10];
            for(int i=0; i < 10; i++){
                res[i] = (arreglo[i].getResistenciaTotal());
            }
            Seleccion(res, arreglo);
            return res;
        }

        //Se escogen los dos mejores estudiantes de la primera generación que fungiran como padres de la siguiente
        Estudiantes* Evolucionador::Seleccion(int* chequear_resistencia, Estudiantes* estudiantes){
            int aux_mayor = chequear_resistencia[0];
            int aux_seg_mayor = chequear_resistencia[0];

            for (int s = 0; s < 10; s++){
                if(aux_mayor <= chequear_resistencia[s])
                {
                    aux_seg_mayor=aux_mayor;
                    aux_mayor=chequear_resistencia[s];
                }
            }

            //Obtengo los dos mejores estudiantes de la generación
            int index_1 = Index(chequear_resistencia, aux_mayor);
            int index_2 = Index(chequear_resistencia, aux_seg_mayor);

            //Envio los dos estudiantes con mejor fitness/resistencia
            Cruce(estudiantes[index_1], estudiantes[index_2]);

            //return {estudiantes[index_1], estudiantes[index_2]};
            //return   Estudiantes {estudiantes[index_1], estudiantes[index_2]};
        }


        Estudiantes*  Evolucionador::Cruce(Estudiantes padre1, Estudiantes padre2){

                //Un nuevo objeto estudiante para la creación de uno nuevo
                Estudiantes nuevoes[10];


                //Gen que será mutado en el proceso
                int mutante = Mutacion();


                //De aquí se obtiene la nueva generación
                //Los nuevos hijos heredan genes de ambos padres, según una determinada configuración de genes
                //Esto se hace para los 10 hijos

                for (int hijo = 0; hijo<10; hijo++) {


                    switch (hijo) {
                        //Hijo 1
                        case 0: {
                            nuevoes[hijo].setVelocidad(padre1.getVelocidad());
                            nuevoes[hijo].setResArqueros(padre1.getResArqueros());
                            nuevoes[hijo].setResMagos(padre1.getResMagos());
                            nuevoes[hijo].setResArtilleros(padre2.getResArtilleros());
                            nuevoes[hijo].setResLanzafuego(padre2.getResLanzafuego());
                            nuevoes[hijo].setVida(padre2.getVida());
                            if (mutante == 0) {

                                cout << ("Habrá Mutación");
                                nuevoes[hijo].setVelocidad(5);
                                nuevoes[hijo].setVida(5);
                            }
                            nuevoes[hijo].Estadisticas();
                            break;
                        }

                        //Hijo 2
                        case 1: {
                            nuevoes[hijo].setVelocidad(padre1.getVelocidad());
                            nuevoes[hijo].setResArqueros(padre1.getResArqueros());
                            nuevoes[hijo].setResMagos(padre1.getResMagos());
                            nuevoes[hijo].setResArtilleros(padre2.getResArtilleros());
                            nuevoes[hijo].setResLanzafuego(padre2.getResLanzafuego());
                            nuevoes[hijo].setVida(padre2.getVida());
                            if (mutante == 1) {

                                cout << ("Habrá Mutación");
                                nuevoes[hijo].setVelocidad(5);
                                nuevoes[hijo].setVida(5);
                            }
                            nuevoes[hijo].Estadisticas();
                            nuevoes[hijo].Estadisticas();
                            break;
                    }

                    //Hijo 3
                    case 2: {
                        nuevoes[hijo].setVelocidad(padre1.getVelocidad());
                        nuevoes[hijo].setResArqueros(padre1.getResArqueros());
                        nuevoes[hijo].setResMagos(padre1.getResMagos());
                        nuevoes[hijo].setResArtilleros(padre2.getResArtilleros());
                        nuevoes[hijo].setResLanzafuego(padre2.getResLanzafuego());
                        nuevoes[hijo].setVida(padre2.getVida());
                        if (mutante == 2) {

                            cout << ("Habrá Mutación");
                            nuevoes[hijo].setVelocidad(5);
                            nuevoes[hijo].setVida(5);
                        }
                        nuevoes[hijo].Estadisticas();
                        break;
                    }

                    //Hijo 4
                    case 3: {
                        nuevoes[hijo].setVelocidad(padre1.getVelocidad());
                        nuevoes[hijo].setResArqueros(padre1.getResArqueros());
                        nuevoes[hijo].setResMagos(padre1.getResMagos());
                        nuevoes[hijo].setResArtilleros(padre2.getResArtilleros());
                        nuevoes[hijo].setResLanzafuego(padre2.getResLanzafuego());
                        nuevoes[hijo].setVida(padre2.getVida());
                        if (mutante == 3) {
                            cout << ("Habrá Mutación");
                            nuevoes[hijo].setVelocidad(5);
                            nuevoes[hijo].setVida(5);
                        }
                        nuevoes[hijo].Estadisticas();
                        break;
                    }

                    //Hijo 5
                    case 4: {
                        nuevoes[hijo].setVelocidad(padre1.getVelocidad());
                        nuevoes[hijo].setResArqueros(padre1.getResArqueros());
                        nuevoes[hijo].setResMagos(padre1.getResMagos());
                        nuevoes[hijo].setResArtilleros(padre2.getResArtilleros());
                        nuevoes[hijo].setResLanzafuego(padre2.getResLanzafuego());
                        nuevoes[hijo].setVida(padre2.getVida());
                        if (mutante == 4) {
                            cout << ("Habrá Mutación");
                            ("Habrá Mutación");
                            nuevoes[hijo].setVelocidad(5);
                            nuevoes[hijo].setVida(5);
                        }
                        nuevoes[hijo].Estadisticas();
                        break;
                    }

                    //Hijo 6
                    case 5: {
                        nuevoes[hijo].setVelocidad(padre1.getVelocidad());
                        nuevoes[hijo].setResArqueros(padre1.getResArqueros());
                        nuevoes[hijo].setResMagos(padre1.getResMagos());
                        nuevoes[hijo].setResArtilleros(padre2.getResArtilleros());
                        nuevoes[hijo].setResLanzafuego(padre2.getResLanzafuego());
                        nuevoes[hijo].setVida(padre2.getVida());
                        if (mutante == 5) {

                            cout << ("Habrá Mutación");
                            ("Habrá Mutación");
                            nuevoes[hijo].setVelocidad(5);
                            nuevoes[hijo].setVida(5);
                        }
                        nuevoes[hijo].Estadisticas();
                        break;
                    }

                    //Hijo 7
                    case 6: {
                        nuevoes[hijo].setVelocidad(padre1.getVelocidad());
                        nuevoes[hijo].setResArqueros(padre1.getResArqueros());
                        nuevoes[hijo].setResMagos(padre1.getResMagos());
                        nuevoes[hijo].setResArtilleros(padre2.getResArtilleros());
                        nuevoes[hijo].setResLanzafuego(padre2.getResLanzafuego());
                        nuevoes[hijo].setVida(padre2.getVida());
                        if (mutante == 6) {

                            cout << ("Habrá Mutación");
                            ("Habrá Mutación");
                            nuevoes[hijo].setVelocidad(5);
                            nuevoes[hijo].setVida(5);
                        }
                        nuevoes[hijo].Estadisticas();
                        break;
                    }
                    //Hijo 8

                    case 7: {
                        nuevoes[hijo].setVelocidad(padre1.getVelocidad());
                        nuevoes[hijo].setResArqueros(padre1.getResArqueros());
                        nuevoes[hijo].setResMagos(padre1.getResMagos());
                        nuevoes[hijo].setResArtilleros(padre2.getResArtilleros());
                        nuevoes[hijo].setResLanzafuego(padre2.getResLanzafuego());
                        nuevoes[hijo].setVida(padre2.getVida());
                        if (mutante == 7) {

                            cout << ("Habrá Mutación");
                            ("Habrá Mutación");
                            nuevoes[hijo].setVelocidad(5);
                            nuevoes[hijo].setVida(5);
                        }
                        nuevoes[hijo].Estadisticas();
                        break;
                    }

                    //Hijo 9
                    case 8: {
                        nuevoes[hijo].setVelocidad(padre1.getVelocidad());
                        nuevoes[hijo].setResArqueros(padre1.getResArqueros());
                        nuevoes[hijo].setResMagos(padre1.getResMagos());
                        nuevoes[hijo].setResArtilleros(padre2.getResArtilleros());
                        nuevoes[hijo].setResLanzafuego(padre2.getResLanzafuego());
                        nuevoes[hijo].setVida(padre2.getVida());
                        if (mutante == 8) {

                            cout << ("Habrá Mutación");
                            ("Habrá Mutación");
                            nuevoes[hijo].setVelocidad(5);
                            nuevoes[hijo].setVida(5);
                        }
                        nuevoes[hijo].Estadisticas();
                        break;
                    }

                    //Hijo 10
                    case 9: {
                        nuevoes[hijo].setVelocidad(padre1.getVelocidad());
                        nuevoes[hijo].setResArqueros(padre1.getResArqueros());
                        nuevoes[hijo].setResMagos(padre1.getResMagos());
                        nuevoes[hijo].setResArtilleros(padre2.getResArtilleros());
                        nuevoes[hijo].setResLanzafuego(padre2.getResLanzafuego());
                        nuevoes[hijo].setVida(padre2.getVida());
                        if (mutante == 9) {

                            cout << ("Habrá Mutación");
                            ("Habrá Mutación");
                            nuevoes[hijo].setVelocidad(5);
                            nuevoes[hijo].setVida(5);
                        }
                        nuevoes[hijo].Estadisticas();
                        //System.out.println("Hijo " + hijo + "creado" );
                        break;

                    }
                }
             }
                return nuevoes;
         }


         //Función para encargarse de escoger el gen (caracterisitca) a mutar y enviarla a la función de creación
        int Evolucionador::Mutacion(){
            //Se selecciona uno de los hijos a los cuales se les hará mutación
            int gen_mutado = rand() % 10 + 0;
            return  gen_mutado;
        }

        //Función para obtener el elemento de un array por medio de un índice
        int Evolucionador::Index(int* arr, int t){
                if (arr == NULL) {
                    return -1;
                    }

                int len = sizeof(arr);

                int i = 0;

                while (i < len) {
                    if (arr[i] == t) {
                        return i;
                    }
                    else {
                        i = i + 1;
                    }
                }
                return -1;
        }

