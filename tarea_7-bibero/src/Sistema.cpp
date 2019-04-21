#include <iostream> // entrada y salida de datos
#include <queue> // plantilla para crear cola
#include <string>  // para usar variables tipo string
#include "Sistema.h" // enlazar el prototipo
#include "Menu.h" // para interactuar con el menu creado
#include "BasicOperations.h" // operaciones basicas

using namespace std;

Sistema::Sistema() {



   /// definir el menu  principal
   main_menu.setTitle("Bibero \"Buena Cosecha, Gran Abundancia\" ") ; // Tema
   main_menu.add("Agregar tipo de arbol") ;
   main_menu.add("Mostrar Bodega") ;
   main_menu.add("Buscar Arbol (Detalles, Abastecer, vender, eliminar)") ;
   main_menu.add("Salir") ;


   // definir menu de tipos de arboles

    tipoArbol_menu.setTitle("Que tipo de arbol agregaras?");
    tipoArbol_menu.add("Ornamental");
    tipoArbol_menu.add("Frutal");

   /// definir menu de opciones tras realizar una busqueda
    buscar_menu.setTitle("Que quieres hacer con este arbol?");
    buscar_menu.add("Ver detalles");
    buscar_menu.add("Abastecer");
    buscar_menu.add("Vender");
    buscar_menu.add("Eliminar de inventario");

   /// mostrar el menu  al usuario
   showMenu() ;

}

void Sistema::showMenu(){

    system("cls");
    main_menu.show(); // mostrar menu

    /// realizar accion en base a lz respuesta de ususario
    switch(main_menu.getSelected()){
        case 1:
            addArbol() ;
            showMenu();
            break;
        case 2:
            mostrarArboles() ;
            showMenu() ;
        case 3: //realizar busqueda de producto
            buscar();
            showMenu() ;
            break;
        default:
            system("cls");
            showMessage("Adios ;)") ;  // despedirse
            break;
    }

}

void Sistema::addArbol (){
    system("cls");
    tipoArbol_menu.show(); // mostrar el menu de tipos de arboles


    aux_product->set_arbol(tipoArbol_menu.getSelected());  // crear el arbol
    aux_product->set_precio(); // definir el precio del arbol

    if (registrado(aux_product->get_arbol()->get_NComun())) {
        showMessage("Ya hay un registro de ese producto ", true);
    } else {
        bodega.push(*aux_product); // agregar el arbol al inventario
        showMessage("El producto fue registrado", true);
    }



}

void Sistema::mostrarArboles(){
   system("cls");

    if ( bodega.size() > 0 ) {
        // recorrer los arboles registrados
        for(int i = 0; i < bodega.size(); i++) {
            Producto* p = &bodega.top() ;
            p = p - i;
            p->mostrar() ;

        }
    } else {
        showMessage("No hay Productos registrados :(");
    }
    system("pause");
}

int Sistema::registrado(string nombre) {
    int existencia;
    existencia = 0;  // no existe

    // recorrer los arboles registrados
    for(int i = 0; i < bodega.size(); i++) {
        Producto* p = &bodega.top() ;
        p -= i; // moverse hasta la siguiente posicion

        Arbol* a = p->get_arbol() ;

        if (nombre == a->get_NComun()) {
            // identificar la posicion en que se encuentra
            // se le suma 1 ya que se utilizara en una condicion
            // si la posicion es cero provocaria un error de logica
            existencia = i + 1;
        }
    }
    showMessage(to_string(existencia));
    return existencia;
}


/// realizar una busqueda
void Sistema::buscar() {
    if (bodega.size() > 0) {
        int posicion ;
        setData("Escribe el nombre del arbol que estas buscando: ", msn);
        posicion = registrado(msn) ;
        if(posicion){
            buscar_menu.show();
            switch (buscar_menu.getSelected()){
                case 1: // mostrar informacion del producto
                    detallesProducto(posicion);
                    break;
                case 2: // abastecer producto
                    abastecerProducto(posicion);
                    break;
                case 3: // vender producto
                    venderProducto(posicion);
                    break;
                case 4: // eliminar producto de inventario
                    eliminarProducto(posicion);
                    break;
            }
        } else {
            showMessage("Producto no encontrado", true) ;
        }
    }  else {
        showMessage("No hay Productos registrados :(", true) ;
    }
}

/// ver detalles de producto
void Sistema::detallesProducto(int n){
   system("cls");
   n--;

   Producto* p = &bodega.top();
   p -= n;
   p->mostrarTodo() ;
}

/// abastecer un producto
void Sistema::abastecerProducto(int n){
    system("cls");
    n--; // obtener la posicion real del dato
    Producto* p = &bodega.top();
    p -= n;

    do {
        setData("Ingresa la cantidad que deseas abastecer: ", answerUser, true);
    } while(answerUser < 1) ;

    answerUser += p->get_cantidad() ; // calcular la nueva cantidad ( con el abasteciomiento )

    p->set_cantidad(answerUser);

    showMessage("Abastecimiento realizado exitosamente", true);
}

void Sistema::venderProducto (int n){
    system("cls");
    n--; // obtener la posicion real del dato
    Producto* p = &bodega.top();
    p -= n;


    setData("Ingresa la cantidad que deseas vender: ", answerUser, true);
    while(answerUser < 1 || answerUser > p->get_cantidad()) {
        showMessage("La cantidad no puede sobrepasar a " + to_string(p->get_cantidad()) + " unidades",true );
        setData("Ingresa la cantidad que deseas vender: ", answerUser, true);
    }

    answerUser = p->get_cantidad() - answerUser ; // calcular la nueva cantidad ( restar la venta )

    p->set_cantidad(answerUser); // colocar la nueva cantidad

    showMessage("Venta realizada exitosamente", true);
}

// eliminar un tipo de Arbol
void Sistema::eliminarProducto(int pos) {

    stack<Producto> aux_Productos; // respaldo de elementos

    int ac = 0; /// contador para restar las ubicaciones

    int length = bodega.size(); /// longitud de la pila

    /// crear el respaldo de los elementos que se desea mantener
    for(int i = 0; i < pos - 1 ; i++ ){
        Producto *aux = &bodega.top() ;
        aux -= i;
        aux_Productos.push(*aux) ;
    }

    // eliminar todos los elementos hasta llegar al deseado
    for(int i = 0; i <= aux_Productos.size() ; i++ ){
        bodega.pop();
    }

    // volver a colocar los valores en bodega
    int ac2 = 0;
    int length2 = aux_Productos.size() ;
    for(int i = length2 ; i >= 1 ; i-- ){
        Producto *aux = &aux_Productos.top() ;

        aux -= ac2 ;
        Producto num = *aux;
        bodega.push(num) ;
        ac2++;

    }
}

