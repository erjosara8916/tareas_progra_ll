#include "Examen.h"
#include <iostream> // entrada y salida de datos
#include <queue> // plantilla para crear cola
#include <string>  // para usar variables tipo string
#include "BasicOperations.h" // Operaciones basicas

using namespace std;

Saravia_Examen::Saravia_Examen() {}

string Saravia_Examen::f_GetEJDue() {
    return EJDue;
}

string Saravia_Examen::f_GetEJFecha() {
    return EJDue;
}
string Saravia_Examen::f_GetEJTipoActividad() {
    return EJTipoActividad;
}
double Saravia_Examen::f_GetEJNota() {
    return EJNota;
}
void Saravia_Examen::f_SetEJDue() {
    do {
        f_SetData ( "Ingresa el numero de Due (7 caracteres) : ", cin, EJDue ) ;
    } while ( EJDue.size() != 7 ) ;

    f_cms ( "cls" ) ;
}
void Saravia_Examen::f_SetEJFecha() {
    do {
        f_SetData ( "Ingresa la fecha del Examen (dd/mm/aaaa) : ", cin, EJFecha ) ;
    } while ( EJFecha.size() != 10 ) ;

    f_cms ( "cls" ) ;
}
void Saravia_Examen::f_SetEJTipoActividad() {

    f_SetData ( "Ingresa el tipo de evalucaion : ", cin, EJTipoActividad ) ;

    f_cms ( "cls" ) ;
}



void Saravia_Examen::f_SetEJNota() {
    do {
        f_SetData ( "Ingresa la nota del Examen (0 - 10) : ", EJNota ) ;
    } while ( EJNota < 0 || EJNota > 10 ) ;

    f_cms ( "cls" ) ;
}

void Saravia_Examen::f_llenar() {
    f_SetEJDue();
    f_SetEJFecha();
    f_SetEJTipoActividad();
    f_SetEJNota();
}

void Saravia_Examen::f_mostrarSaravia_Examen() {
    EJMsn ;
    EJMsn = "Due: " + EJDue ;
    EJMsn += "\n   Fecha: " + EJFecha ;
    EJMsn += "\n   Tipo de Actividad: " + EJTipoActividad;
    EJMsn += "\n   Nota: " + to_string ( EJNota ) ;

    f_showMessage ( EJMsn );
}

Saravia_Examen::~Saravia_Examen()
{
    //dtor
}
