#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <string>
#include "Arbol.h"
#include "Fabrica.h"

using namespace std;

class Producto
{
    public:
        Producto();

        /// metodos de la propiedad arbol
        Arbol* get_arbol ();
        void set_arbol(int);

        /// metodos de la propiedad precio
        double get_precio ();
        void set_precio();
        void set_precio(double);

        /// metodos de la propiedad cantidad
        int get_cantidad ();
        void set_cantidad();
        void set_cantidad(int);

        void mostrar() ;
        void mostrarTodo() ;


        virtual ~Producto();

    private:
        Fabrica f ;
        Arbol* arbol ;
        double precio ;
        string msn;
        int cantidad ;


};

#endif // PRODUCTO_H
