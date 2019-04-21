#include <iostream>
#include <string>


#include "Fabrica.h"
using namespace std;

Fabrica::Fabrica()
{
    //ctor
}

Arbol* Fabrica::crearArbol(int a) {
    switch(a) {
    case 1:
        return new ArbolFrutal() ;
        break;
    case 2:
        return new ArbolOrnamental();
        break;
    }

    cout << "todo bien" ;
}
Fabrica::~Fabrica()
{
    //dtor
}
