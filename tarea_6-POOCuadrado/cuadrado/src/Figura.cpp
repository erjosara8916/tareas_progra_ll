#include "Figura.h"
#include "BasicOperations.h"

Figura::Figura()
{
    //ctor
}

Figura::Figura(double b, double h){
    base = b;
    altura = h;
}

void Figura::set_base(){
    setData("Ingresa la base de la figura: ", base);
}

void Figura::set_base(double b){
    base = b;
}
double Figura::get_base () {
     return base;
}

void Figura::set_altura (double h) {
    altura = h;
}

void Figura::set_altura(){
    setData("Ingresa la altura de la figura: ", altura);
}

double Figura::get_altura () {
    return altura;
}

Figura::~Figura()
{
    //dtor
}
