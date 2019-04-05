#ifndef SISTEMA_H
#define SISTEMA_H

#include <iostream> // entrada y salida de datos
#include <string>  // para usar variables tipo string
#include "Menu.h" // para crear menus
#include "Rectangulo.h"
#include "Cuadrado.h"

using namespace std;

class Sistema{
    private:
        Menu main_menu; // menu del sistema
        Rectangulo *r;
        Cuadrado *c;
        void defRectangulo();
        void defCuadrado();
        void mostrarRectangulo();
        void mostrarCuadrado();
        string msn;

    public:
        Sistema() ; // constructor
        void showMenu(); // mostrar el menu al usuario
};

#endif // SISTEMA_H
