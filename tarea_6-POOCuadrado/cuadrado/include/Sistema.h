#ifndef SISTEMA_H
#define SISTEMA_H

#include <iostream> // entrada y salida de datos
#include <string>  // para usar variables tipo string
#include "Menu.h" // para crear menus
#include "Rectangulo.h"
#include "Cuadrado.h"
#include "Triangulo2.h"

using namespace std;

class Sistema{
    private:
        Menu main_menu; // menu del sistema
        Rectangulo *r;
        Cuadrado *c;
        Triangulo *t;
        void defRectangulo();
        void defCuadrado();
        void defTriangulo();
        void mostrarRectangulo();
        void mostrarCuadrado();
        void mostrarTriangulo();
        void showMenu();
        string msn;

    public:
        Sistema() ; // constructor
        // mostrar el menu al usuario
};

#endif // SISTEMA_H
