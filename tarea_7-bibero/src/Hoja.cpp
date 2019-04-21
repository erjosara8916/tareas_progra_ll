
#include "Hoja.h"
#include "BasicOperations.h"

Hoja::Hoja()
{
    forma = "";
    longitud = 0;
}

// metodos de la propiedad forma
void Hoja::set_forma(string val){
    forma = val;
}

void Hoja::set_forma(){
    setData("Ingrese la forma de la hoja: ", forma);
}

string Hoja::get_forma () {
    return forma;
}

/// metodos de la propiedad longitud
void Hoja::set_longitud(double val){
    longitud = val;
}

void Hoja::set_longitud(){
    setData("Ingresa la longitud de la hoja ( m ): ", longitud, true);
}

double Hoja::get_longitud () {
    return longitud;
}

void Hoja::set_hoja() {
    set_forma() ;
    set_longitud() ;
}
Hoja::~Hoja()
{
    //dtor
}
