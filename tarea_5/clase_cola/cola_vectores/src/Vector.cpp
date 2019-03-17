#include "Vector.h"
#include <iostream> // entrada y salida de datos
#include <queue> // plantilla para crear cola
#include <string>  // para usar variables tipo string
#include "BasicOperations.h" // Operaciones basicas

using namespace std;

Vector::Vector() { }

// solicitar coordenada x mayor que 0
void Vector::set_x(){

    do {
        setData("Ingresa el valor de la coordenada x : ", x) ;
    } while ( x < 1 ) ;
    cms("cls") ;
}

// solicitar coordenada y mayor que 0
void Vector::set_y(){

    do {
        setData("Ingresa el valor de la coordenada y : ", y) ;
    } while ( x < 1 ) ;
    cms("cls") ;
}

// solicitar coordenada z mayor que 0
void Vector::set_z(){
    do {
        setData("Ingresa el valor de la coordenada z : ", z) ;
    } while ( z < 1 ) ;
    cms("cls") ;
}

// obtener el valor de la coordenada x
int Vector::get_x(){
	return x;
}

// obtener el valor de la coordenada y
int Vector::get_y(){
	return y;
}

// obtener el valor de la coordenada z
int Vector::get_z(){
	return z;
}

// mostrar el vector
void Vector::show(){
    msn = "x: " +  to_string(x) ;
    msn += "\n   y: " + to_string(y) ;
    msn += "\n   z: " + to_string(z) ;
    showMessage(msn);
}
