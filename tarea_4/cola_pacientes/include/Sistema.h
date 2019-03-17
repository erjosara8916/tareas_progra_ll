#ifndef SISTEMA_H
#define SISTEMA_H

#include <iostream> // entrada y salida de datos
#include <queue> // plantilla para crear cola
#include <string>  // para usar variables tipo string
#include "Menu.h" // para crear menus
#include "Paciente.h"

using namespace std;

class Sistema{
    private:
        queue<Paciente> pacientes; // cola de pacientes
        string msn;
        int prev;
        Paciente aux_paciente ; // cuenta temporal para crear pacientes
        Menu main_menu; // menu del sistema

    public:
        Sistema() ; // constructor
        void showMenu(); // mostrar el menu al usuario
        void newSick(); // ingresar nuevo paciente
        void showSicks(); // mostrar los pacientes registrados
        void delFirst(); // extraer el primer paciente

};

#endif // SISTEMA_H
