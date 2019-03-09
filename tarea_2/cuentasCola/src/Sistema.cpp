#include <iostream> // entrada y salida de datos
#include <queue> // plantilla para crear cola
#include <string>  // para usar variables tipo string
#include "Sistema.h" // enlazar el prototipo
#include "Menu.h" // para interactuar con el menu creado
#include "BasicOperations.h" // operaciones basicas

using namespace std;

Sistema::Sistema() {

    /// definir el menu
   main_menu.setTitle("Sistema ahorrantes") ;
   main_menu.add("Agregar ahorrante") ;
   main_menu.add("Mostrar Ahorrante") ;
   main_menu.add("Eliminar Ahorrante") ;
   main_menu.add("Salir") ;
   //aux_cuenta ;

   /// mostrar el menu  al usuario
   showMenu() ;

}

void Sistema::showMenu(){

    system("cls");
    main_menu.show(); // mostrar menu

    /// realizar accion en base a lz respuesta de ususario
    switch(main_menu.getSelected()){
        case 1:
            newCuent();
            break;
        case 2:
            system("cls");
            showCuents();
            break;
        case 3:
            delFirst();
            break;
        default:
            system("cls");
            showMessage("Adios ;)") ;  // despedirse
            break;
    }

}

void Sistema::newCuent(){

    system("cls") ;

    // dedinir los datos del nuevo ahorrante
    aux_cuenta.setTiket();
    aux_cuenta.setCuent();
    aux_cuenta.setAge();

    // anexar el nuevo ahorrante
    usuarios.push(aux_cuenta);

    showMenu(); // regresar al menu
}

void Sistema::showCuents(){
    system("cls") ;

    /// Verificar si hay ahorrantes registrados
    if (usuarios.size() > 0 ) {   // si hay

        Cuenta *user = &usuarios.front();  // crear referencia a la primera posicion

        /// recorrer los usuarios
        for(int i = 1; i <= usuarios.size(); i++) {
            user->showInfo(); // mostrar la informacion del ahorrante
            user++; // avanzar al siguiente
        }

    }else {  // No hay
        showMessage("No se encuentran ahorrantes registrados") ;
    }

    system("pause") ;
    showMenu(); // regresar al menu
}

/// eliminar el primer elemento
void Sistema::delFirst(){
    usuarios.pop(); // borrar el primer ahorrante encolado

    /// notificar borrado
    showMessage("El primer elemento a sido eliminado", true );
    showMenu(); // regresar al menu
}
