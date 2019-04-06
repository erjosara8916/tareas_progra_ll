#ifndef SISTEMA_H
#define SISTEMA_H

#include <iostream> // entrada y salida de datos
#include <stack> // plantilla para crear cola
#include <string>  // para usar variables tipo string
#include "Menu.h" // para crear menus
#include "Examen.h"

using namespace std;

class Sistema{
    private:
        stack<Saravia_Examen> EJSaravia_Examenes; // cola de ahorrantes
        string EJMsn;
        Saravia_Examen EJAux_Examen ; // cuenta temporal para crear ahorrantes
        Menu EJMainMenu; // menu del sistema
        double EJProm;
        double EJMax;
        double EJMin;
        void f_calcEJProm();
        void f_calcEJMax();
        void f_calcEJMin();
        void f_calcInfo();

    public:
        Sistema() ; // constructor
        void f_showMenu(); // mostrar el menu al usuario
        void f_newExam(); // crear nueva cuenta de ahorrante
        void f_showExams(); // mostrar las cuentas actuales
        void f_delFirst(); // eliminar la primera cuenta
        void f_searchExam(); // buscar Saravia_Examen
        void f_showInfo(); // mostrar la informacion de la pila
};

#endif // SISTEMA_H
