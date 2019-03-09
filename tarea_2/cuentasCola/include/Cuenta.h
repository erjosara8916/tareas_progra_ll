#ifndef CUENTA_H
#define CUENTA_H

#include <string>

using namespace std;

class Cuenta{
    private:
        string msn; // mensajes a imprimir
        string ticket;  // numero de tiket
        string num_cuent;  // numero de cuenta de ahorrante
        int age; // edad del ahorrante

    public:
        Cuenta () ; // constructor
        void setTiket() ; // definir ticket
        void setCuent() ; // definir numero de cuenta
        void setAge() ; // definir edad
        void showInfo() ; // mostrar informacion del ahorrante

};

#endif // CUENTA_H
