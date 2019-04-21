#include <iostream>
#include <string>
#include "Arbol.h"
#include "BasicOperations.h"

using namespace std;

Arbol::Arbol()
{
    NComun = "";
    NCient = "";
    familia = "";

    tallo = new Tallo() ;
}

/// metodos para la propiedad NComun
void Arbol::set_NComun(string val){
    NComun = val;
}
string Arbol::get_NComun () {
    return NComun;
}
void Arbol::set_NComun(){
    setData("Ingresa el nombre comun del arbol: ", NComun);
}

///metodos para la propiedad NCient
void Arbol::set_NCient(string val){
    NCient = val;
}
void Arbol::set_NCient(){
    setData("Ingresa el nombre cientifico del arbol: ", NCient);
}
string Arbol::get_NCient () {
    return NCient;
}

/// metodos para la propiedad familia
void Arbol::set_familia(string val){
    familia = val;
}
void Arbol::set_familia(){
    setData("Ingresa la familia a la que pertenece el arbol: ", familia);
}
string Arbol::get_familia () {
    return familia;
}

/// metodos de la propiedad hoja
Hoja Arbol::get_hoja(){
    return hoja;
}

Tallo* Arbol::get_tallo(){
    return tallo;
}

void Arbol::set_Arbol (){
    set_NComun() ;
    set_NCient() ;
    set_familia() ;
    hoja.set_hoja() ;
    tallo->set_longitud() ;
}

void Arbol::msn (){}
Arbol::~Arbol()
{
    //dtor
}
