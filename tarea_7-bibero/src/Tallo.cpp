
#include "Tallo.h"
#include "BasicOperations.h"

Tallo::Tallo()
{
    longitud = 0;
}

/// metodos de la propiedad longitud
void Tallo::set_longitud(double val){
    longitud = val;
}

void Tallo::set_longitud(){
    setData("Ingresa la longitud de el tallo ( m ): ", longitud, true);
}

double Tallo::get_longitud () {
    return longitud;
}


Tallo::~Tallo()
{
    //dtor
}
