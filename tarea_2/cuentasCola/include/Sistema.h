#ifndef SISTEMA_H
#define SISTEMA_H

#include <iostream> // entrada y salida de datos
#include <queue> // plantilla para crear cola
#include <string>  // para usar variables tipo string
#include "Cuenta.h"  // para poder crear objetos tipo cuenta
#include "Menu.h" // para crear menus

using namespace std;

class Sistema{
    private:
        queue<Cuenta> usuarios; // cola de ahorrantes
        string msn;
        Cuenta aux_cuenta ; // cuenta temporal para crear ahorrantes
        Menu main_menu; // menu del sistema

    public:
        Sistema() ; // constructor
        void showMenu(); // mostrar el menu al usuario
        void newCuent(); // crear nueva cuenta de ahorrante
        void showCuents(); // mostrar las cuentas actuales
        void delFirst(); // eliminar la primera cuenta
};

#endif // SISTEMA_H
