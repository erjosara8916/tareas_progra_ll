#ifndef SISTEMA_H
#define SISTEMA_H

#include <iostream> // entrada y salida de datos
#include <queue> // plantilla para crear cola
#include <string>  // para usar variables tipo string
#include "Vector.h"  // para poder crear objetos tipo vector
#include "Menu.h" // para crear menus

using namespace std;

class Sistema{
    private:
        queue<Vector> vectores; // cola de ahorrantes
        string msn;
        Vector *aux_v;
        Vector aux_vector ; // cuenta temporal para crear vectores
        Menu main_menu; // menu del sistema
        double prom_x;
        double prom_y;
        double prom_z;
        void calcProm();

    public:
        Sistema() ; // constructor
        void showMenu(); // mostrar el menu al usuario
        void newVector(); // crear nuevo usuario
        void showVectores(); // mostrar vectores actuales
        void delFirst(); // eliminar el primer vector
        void showProm(); // mostrar promedio
        void showWeight(); // mostrar el peso del conjunto de vectores
};

#endif // SISTEMA_H
