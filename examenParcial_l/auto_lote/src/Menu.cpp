#include "Menu.h"
#include "BasicOperations.h"
#include <stack>
#include <string>
#include <iostream>

using namespace std;

Menu::Menu(){}

/// definir el titulo del menu
void Menu::f_SetTitle(string tit) {
    title = tit;
}


void Menu::f_add(string name ) {
    options.push( name ) ; // agregar a la pila
}

/**
  Descripcion: Muestra el menu en pantalla
*/

void Menu::f_show() {
    system("cls");
    f_showMessage(title) ;
    int pos; // posicion a mostrar
    int length; // numero de opciones del menu

    length = options.size() ; // calcular

    // mostrar cada opcion
    for (pos = 1; pos <= length; pos++){

        string *nodo = &options.top() ; // ubicacion del ultimo elemento del menu
        nodo -= (length - pos) ; // mover la ubicacion hasta la posicion de seada

        cout << " " << pos << ". " << *nodo << endl ; // mostrar la opcion
    }

    f_SetData("Escoge una opcion: ", selected ) ;

    if (selected < 1 || selected > length) {
        f_show() ;
    }
}

int Menu::f_GetSelected() {
    return selected;
}

