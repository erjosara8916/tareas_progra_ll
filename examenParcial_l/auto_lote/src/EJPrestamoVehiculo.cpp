#include "EJPrestamoVehiculo.h"
#include <iostream> // entrada y salida de datos
#include <queue> // plantilla para crear cola
#include <string>  // para usar variables tipo string
#include "BasicOperations.h" // Operaciones basicas

using namespace std;

Saravia_PrestamoVehiculo::Saravia_PrestamoVehiculo()
{
    //ctor
}


string Saravia_PrestamoVehiculo::f_GetEJCod() {
    return EJCod;
}
void Saravia_PrestamoVehiculo::f_SetEJCod() {
    do {
        f_SetData ( "Ingresa el codigo del vehiculo (7 caracteres) : ", cin, EJCod ) ;
    } while ( EJCod.size() != 7 ) ;

    f_cms ( "cls" ) ;
}
string Saravia_PrestamoVehiculo::f_GetEJVehiculo() {
    return EJVehiculo;
}
void Saravia_PrestamoVehiculo::f_SetEJVehiculo() {

    f_SetData ( "Ingresa el vehiculo : ", cin, EJVehiculo ) ;


    f_cms ( "cls" ) ;
}
string Saravia_PrestamoVehiculo::f_GetEJHora() {
    return EJHora;
}
void Saravia_PrestamoVehiculo::f_SetEJHora() {
    f_SetData ( "Ingresa la hora del prestamo : ", cin, EJHora ) ;

    f_cms ( "cls" ) ;
}
double Saravia_PrestamoVehiculo::f_GetEJCosto() {
    return EJCosto;
}

void Saravia_PrestamoVehiculo::f_SetEJCosto() {
    f_SetData ( "Ingresa el costo por hora del prestamo : ", EJCosto ) ;

    f_cms ( "cls" ) ;
}

void Saravia_PrestamoVehiculo::f_Llenar() {

    f_SetEJCod() ;
    f_SetEJVehiculo() ;
    f_SetEJHora() ;
    f_SetEJCosto() ;

}

void Saravia_PrestamoVehiculo::f_mostrar() {
    EJMsn ;
    EJMsn = "Codigo: " + EJCod ;
    EJMsn += "\n   vehiculo: " + EJVehiculo ;
    EJMsn += "\n   Hora: " + EJHora;
    EJMsn += "\n   Costo: " + to_string ( EJCosto ) ;

    f_showMessage ( EJMsn );
}

Saravia_PrestamoVehiculo::~Saravia_PrestamoVehiculo()
{
    //dtor
}
