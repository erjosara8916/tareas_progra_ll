#include "BasicOperations.h"

#include<iostream> // entrada y salida basica del teclado
#include<string> // uso de variables tipo string
#include<windows.h> // para ejecutar comandos en el cmd

using namespace std;

void f_showMessage ( string text , bool pause) {
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

void f_SetData ( string txt, int& var, string error  ) {

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

void f_SetData ( string txt, double& var, string error  ) {

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

void f_SetData ( string txt , istream& ent , string& var  )
{
    system("cls") ;
    cout << endl << " -> " << txt;
    ent >> ws;
    getline( ent, var );
    system("cls") ;
}



/// en diversas ocaciones a fallado system(comando), esa es la razon de esta funcion
void f_cms(string comand){
    system(comand.c_str()) ;
}
