#include "BasicOperations.h"

#include<iostream> // entrada y salida basica del teclado
#include<string> // uso de variables tipo string
#include<windows.h> // para ejecutar comandos en el cmd

using namespace std;

void showMessage ( string text , bool pause) {
    if(pause) {
       system("cls") ;
    }

    string message ;

    message = "*****************************************\n\n   ";
    message += text + "\n\n" ;
    message += "*****************************************\n";
    cout << message << endl ;

    if ( pause ) {
        system( "pause" ) ;
        system("cls") ;
    }
}

void setData ( string txt, int& var, bool cls  ) {
    if (cls){
        system("cls");
    }
    cout << endl << " -> " << txt ;
    cin >> var ;

    while ( cin.fail() ) { // mientras que el dato sea erroneo

        cin.clear() ;  /// borra el contenido del buffer de entrada

        /// ignora 1000 caracteres o hasta encontrar un salto de lines
        cin.ignore( 1000 , '\n' ) ;


        /// volver a pedir el dato
        cout << endl << " -> " << txt;
        cin >> var ;

    }
}

void setData ( string txt, double& var, bool cls  ) {
    if (cls){
        system("cls");
    }
    cout << endl << " -> " << txt ;
    cin >> var ;

    while ( cin.fail() ) { // mientras que el dato sea erroneo

        cin.clear() ;  /// borra el contenido del buffer de entrada

        /// ignora 1000 caracteres o hasta encontrar un salto de lines
        cin.ignore( 1000 , '\n' ) ;


        /// volver a pedir el dato
        cout << endl << " -> " << txt;
        cin >> var ;

    }
}

void setData ( string txt, string& var, istream& ent)
{
    system("cls") ;
    cout << endl << " -> " << txt;
    ent >> ws;
    getline( ent, var );
    system("cls") ;
}

/// en diversas ocaciones a fallado system(comando), esa es la razon de esta funcion
void cms(string comand){
    system(comand.c_str()) ;
}
