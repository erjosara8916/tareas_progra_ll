#include "Menu.h"
#include "BasicOperations.h"
#include <stack>
#include <string>
#include <iostream>

using namespace std;

Menu::Menu(){}

/// definir el titulo del menu
void Menu::setTitle(string tit) {
    title = tit;
}


void Menu::add(string name ) {
    options.push( name ) ; // agregar a la pila
}

/**
  Descripcion: Muestra el menu en pantalla
*/

void Menu::show() {
    cms("cls") ;
    showMessage(title) ;
    int pos; // posicion a mostrar
    int length; // numero de opciones del menu

    length = options.size() ; // calcular

    // mostrar cada opcion
    for (pos = 1; pos <= length; pos++){

        string *nodo = &options.top() ; // ubicacion del ultimo elemento del menu
        nodo -= (length - pos) ; // mover la ubicacion hasta la posicion de seada

        cout << " " << pos << ". " << *nodo << endl ; // mostrar la opcion
    }

    setData("Escoge una opcion: ", selected ) ;

    if (selected < 1 || selected > length) {
        show() ;
    }
}

int Menu::getSelected() {
    return selected;
}
