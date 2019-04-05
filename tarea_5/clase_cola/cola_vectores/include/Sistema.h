#ifndef SISTEMA_H
#define SISTEMA_H

#include <iostream> // entrada y salida de datos
#include <queue> // plantilla para crear cola
#include <string>  // para usar variables tipo string
#include "Vector.h"  // para poder crear objetos tipo vector
#include "Menu.h" // para crear menus
#include "Cola.h"

using namespace std;

class Sistema{
    private:

        Cola *vectores = new Cola();
        string msn;
        Vector *aux_v;

        Vector aux_vector ; // vector temporal para crear vectores
        Menu main_menu; // menu del sistema
        double prom_x;
        double prom_y;
        double prom_z;
        void calcProm();

    public:
        Sistema() ; // constructor
        void showMenu(); // mostrar el menu al usuario
        void newVector(); // crear nuevo vector
        void showVectores(); // mostrar los vectores
        void delFirst(); // eliminar el primer vector
        void showProm(); // mostrar promedio
        void showWeight(); // mostrar el peso del conjunto de vectores
};

#endif // SISTEMA_H
