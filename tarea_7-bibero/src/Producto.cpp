#include "BasicOperations.h"
#include "Producto.h"


Producto::Producto()
{
    f = Fabrica() ;
    cantidad = 0;
}

/// metodos de la propiedad arbol
void Producto::set_arbol(int tipoArbol){
    arbol = f.crearArbol(tipoArbol);
    arbol->set_Arbol() ;


}

Arbol* Producto::get_arbol () {
    return arbol;
}

/// metodos de la propiedad precio
void Producto::set_precio(double val){
    precio = val;
}

void Producto::set_precio(){
    setData("Ingresa el precio del arbol: $", precio, true) ;
}

double Producto::get_precio () {
    return precio;
}

void Producto::mostrar(){
    msn = "Nombre: " + arbol->get_NComun() ;
    msn += "\n   Precio: $" + to_string(precio);
    msn += "\n   Cantidad: " +to_string(cantidad);

    showMessage(msn);
}

void Producto::mostrarTodo (){
    msn = "Nombre comun: " + arbol->get_NComun() ;
    msn += "\n   Nombre Cientifico: " + arbol->get_NCient() ;
    msn += "\n   Familia: " + arbol->get_familia() ;
    msn += "\n   Forma de la hoja: " + arbol->get_hoja().get_forma() ;
    msn += "\n   Longitud de la hoja: " + to_string(arbol->get_hoja().get_longitud()) + " m ";
    msn += "\n   Tamaño del tallo: " + to_string(arbol->get_tallo()->get_longitud()) + " m " ;
    msn += "\n   Precio: $" + to_string(precio);
    msn += "\n   Cantidad: " +to_string(cantidad);

    showMessage(msn, true);
}
/// metodos de la propiedad cantidad
void Producto::set_cantidad(int val){
    cantidad = val;
}

void Producto::set_cantidad(){
    setData("Ingresa la cantidad", cantidad);
}

int Producto::get_cantidad () {
    return cantidad;
}
Producto::~Producto()
{
    //dtor
}
