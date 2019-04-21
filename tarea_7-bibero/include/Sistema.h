#ifndef SISTEMA_H
#define SISTEMA_H

#include <iostream> // entrada y salida de datos
#include <string>  // para usar variables tipo string
#include "Menu.h" // para crear menus
#include "Producto.h"
#include <stack>


using namespace std;

class Sistema{
    private:

        stack<Producto> bodega;
        Arbol* aux_arbol;
        Producto* aux_product = new Producto();
        Menu tipoArbol_menu; // tipos de arboles a registrar
        Menu buscar_menu; // menu tras buscar un arbol
        Menu main_menu; // menu del sistema
        void addArbol() ; // agregar un nuevo tipo de arbol
        void mostrarArboles() ; // mostrar Arboles
        void eliminarProducto(int) ; // eliminar un tipo de arbol
        int registrado(string) ; // verificar si un producto esta registrado
        void buscar() ;
        void abastecerProducto(int);
        void venderProducto(int) ;
        void detallesProducto(int) ;



    public:
        Sistema() ; // constructor
        string msn;
        int answerUser;
        void showMenu(); // mostrar el menu al usuario
};

#endif // SISTEMA_H
