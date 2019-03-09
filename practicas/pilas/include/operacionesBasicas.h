#ifndef OPERACIONESBASICAS_H
#define OPERACIONESBASICAS_H

#include<string>

using namespace std;

/**
    Descripcion: mostrar un mensaje llamativo en consola
    parametros:
        string: texto que a mostrar en el mensaje
        bool: definir si la ejecucion el programa sera pausado
               al mostrar el mensaje

*/
void showMessage ( string , bool = false ) ;

/**
    Descripcion: definir el valor de una variable en base a la entrada
        por consola
    Parametros:
        string: texto que indica que tipo de dato se espera sea ingresado
        int: variable entera donde sera guardado el dato
*/
void setData(string, int&, string = " LOS DATOS SON INVALIDOS" ) ;
void setData(string, istream& , string&) ;

/**
    Descripcion: Ejecuta un comando en el cms
    Parametros:
        string: cadena de texto que contiene el comando a ejecutar
*/
void cms(string) ;


#endif // OPERACIONESBASICAS_H
