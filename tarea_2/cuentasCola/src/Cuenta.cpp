#include <iostream> // entrada y salida de datos
#include <queue> // plantilla para crear cola
#include <string>  // para usar variables tipo string
#include "Cuenta.h" // enlazar el prototipo
#include "BasicOperations.h" // Operaciones basicas

using namespace std;

Cuenta::Cuenta(){}

void Cuenta::setTiket(){
    // solicitar numero de ticket
    do {
        setData("Ingresa el numero de ticket (4 digitos) : ", cin, ticket) ;
    } while ( ticket.size() != 4 ) ;
    system("cls") ;
}

void Cuenta::setCuent(){
    // solicitar numero de cuenta
    do {
        setData("Ingresa el numero de cuenta (9 digitos) : ", cin, num_cuent) ;
    } while ( num_cuent.size() != 9 ) ;

    system("cls") ;
}

void Cuenta::setAge(){
    // solicitar edad
    do {
        setData("Ingresa la edad del ahorrante ( mayor de 18, menor de 100 ) : ", age) ;
    } while ( age < 18 || age > 100 ) ;

    system("cls") ;
}

/// mostrar la informacion del ahorrante
void Cuenta::showInfo() {
    msn ;
    msn = "Ticket: " + ticket ;
    msn += "\n   Cuenta: " + num_cuent ;
    msn += "\n   Edad: " + to_string(age) ;

    showMessage(msn);
}
