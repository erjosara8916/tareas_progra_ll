#include <iostream> // entrada y salida de datos
#include <stack> // plantilla para crear cola
#include <string>  // para usar variables tipo string
#include "Sistema.h" // enlazar el prototipo
#include "Menu.h" // para interactuar con el menu creado
#include "BasicOperations.h" // operaciones basicas

using namespace std;

Sistema::Sistema() {

    /// definir el menu
    EJMainMenu.f_SetTitle ( "Sistema para prestamo" ) ;
    EJMainMenu.f_add ( "Agregar Vehiculo Prestado" ) ;
    EJMainMenu.f_add ( "Eliminar" ) ;
    EJMainMenu.f_add ( "Listar" ) ;
    EJMainMenu.f_add ( "Buscar" ) ;
    EJMainMenu.f_add ( "Total de prestamos y promedio de ingresos" ) ;
    EJMainMenu.f_add ( "Salir" ) ;
    //EJAux_Prestamo ;

    /// mostrar el menu  al usuario
    f_showMenu() ;

}

void Sistema::f_showMenu() {

    f_cms ( "cls" );
    EJMainMenu.f_show(); // mostrar menu

    /// realizar accion en base a lz respuesta de ususario
    switch ( EJMainMenu.f_GetSelected() ) {
    case 1:
        f_newExam();

        f_showMenu();
        break;

    case 2:
        f_cms ( "cls" );
        f_delFirst();
        break;

    case 3:
        f_showExams();
        break;

    case 4:
        f_searchExam();
        break;

    case 5:
        f_showInfo();
        break;

    default:
        f_cms ( "cls" );
        f_showMessage ( "Adios ;)" ) ; // despedirse
        break;
    }

}

void Sistema::f_newExam() {

    f_cms ( "cls" ) ;

    // dedinir los datos del nuevo ahorrante
    EJAux_Prestamo.f_Llenar();

    bool exist;
    exist = false;


    Saravia_PrestamoVehiculo *prest = &EJPrestamos.top();  // crear referencia a la primera posicion

    /// recorrer los Saravia_PrestamoVehiculoes

    for ( int i = 1; i <= EJPrestamos.size(); i++ ) {

        // verificar repeticiones
        bool EJCod = EJAux_Prestamo.f_GetEJCod() == prest->f_GetEJCod() ;

        // verificar si el dato esta repetido
        if ( EJCod ) {
            exist = true;
        }

        prest--; // avanzar al siguiente
    }

    if ( exist ) {
        f_showMessage ( "El Prestamo que quieres registrar ya se encuentra registrado :(", true );
    } else {
        EJPrestamos.push ( EJAux_Prestamo );
        f_showMessage ( "El prestamo a sido registrado de forma exitosa :)", true );
    }

    // anexar el nuevo ahorrante


    // regresar al menu
}

void Sistema::f_showExams() {
    f_cms ( "cls" ) ;

    /// Verificar si hay Saravia_PrestamoVehiculoes registrados
    if ( EJPrestamos.size() > 0 ) {  // si hay

        Saravia_PrestamoVehiculo *prest = &EJPrestamos.top();  // crear referencia a la primera posicion

        /// recorrer los Saravia_PrestamoVehiculoes
        for ( int i = 1; i <= EJPrestamos.size(); i++ ) {
            prest->f_mostrar(); // mostrar la informacion del ahorrante
            prest--; // avanzar al siguiente
        }

    } else {  // No hay
        f_showMessage ( "No se encuentran prestamo registrados" ) ;
    }

    f_cms ( "pause" ) ;
    f_showMenu(); // regresar al menu
}

/// eliminar el primer elemento
void Sistema::f_delFirst() {
    EJPrestamos.pop(); // borrar el primer ahorrante encolado

    /// notificar borrado
    f_showMessage ( "El primer elemento a sido eliminado", true );
    f_showMenu(); // regresar al menu
}

void Sistema::f_searchExam() {
    f_cms ( "cls" ) ;

    /// Verificar si hay Saravia_PrestamoVehiculoes registrados
    if ( EJPrestamos.size() > 0 ) {  // si hay

        bool exist;
        exist = false;
        f_SetData ( "Ingresa el codigo del vehiculo que deseas buscar: ", cin, EJMsn );

        Saravia_PrestamoVehiculo *prest = &EJPrestamos.top();  // crear referencia a la primera posicion

        /// recorrer los Saravia_PrestamoVehiculoes
        for ( int i = 1; i <= EJPrestamos.size(); i++ ) {
            if ( EJMsn == prest->f_GetEJCod() ) {
                prest->f_mostrar(); // mostrar la informacion del ahorrante
                exist = true;
            }

            prest--; // avanzar al siguiente
        }

        if ( !exist ) {
            f_showMessage ( "El Vehiculo que as buscado no se encuentra registrado" );
        }


    } else {  // No hay
        f_showMessage ( "No se encuentra vehiculos registrados registrados" ) ;
    }

    f_cms ( "pause" ) ;
    f_showMenu(); // regresar al menu
}


void Sistema::f_calcInfo() {

    Saravia_PrestamoVehiculo *EJPrest = &EJPrestamos.top();  // crear referencia a la primera posicion
    EJProm = 0;

    /// recorrer los Saravia_PrestamoVehiculoes
    for ( int i = 1; i <= EJPrestamos.size(); i++ ) {
        EJProm += EJPrest->f_GetEJCosto();

        EJPrest--; // avanzar al siguiente
    }

    EJProm = EJProm / EJPrestamos.size();
}

void Sistema::f_showInfo() {
    if ( EJPrestamos.size() > 0 ) {
        f_calcInfo();
         EJMsn = "Total de prestamos: " + to_string ( EJPrestamos.size() );
        EJMsn += "\nPromedio: " + to_string ( EJProm );

        f_showMessage ( EJMsn, true );
    } else {
        f_showMessage ( "No hay prestamos de vehiculos registrados Registrados", true );
    }

    f_showMenu(); // regresar al menu
} // mostrar la informacion de la pila
