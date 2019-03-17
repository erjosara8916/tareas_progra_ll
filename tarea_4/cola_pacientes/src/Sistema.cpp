#include <iostream> // entrada y salida de datos
#include <queue> // plantilla para crear cola
#include <string>  // para usar variables tipo string
#include "Sistema.h" // enlazar el prototipo
#include "Menu.h" // para interactuar con el menu creado
#include "BasicOperations.h" // operaciones basicas

using namespace std;

Sistema::Sistema() {

    /// definir el menu
   main_menu.setTitle("Sistema Cola de Pacientes") ; // Tema
   main_menu.add("Agregar Paciente") ;
   main_menu.add("Mostrar Pacientes") ;
   main_menu.add("Eliminar primer Paciente") ;
   main_menu.add("Salir") ;

   // definir correlativo anterior como 0

	prev = 0 ;

   /// mostrar el menu  al usuario
   showMenu() ;

}

void Sistema::showMenu(){

    system("cls");
    main_menu.show(); // mostrar menu

    /// realizar accion en base a lz respuesta de ususario
    switch(main_menu.getSelected()){
        case 1:
            newSick();
            break;
        case 2:
            system("cls");
            showSicks();
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

void Sistema::newSick(){

    system("cls") ;

	// defiunir el nuevo vector
	aux_paciente.set_all(prev);
	pacientes.push(aux_paciente); // agregar el vector creado
    prev++;
    showMenu(); // regresar al menu
}

void Sistema::showSicks(){
    system("cls") ;

 	/// Verificar si hay vectores guardados
    if (pacientes.size() > 0 ) {   // si hay

        Paciente *p = &pacientes.front();  // crear referencia a la primera posicion

        /// recorrer los usuarios
        for(int i = 1; i <= pacientes.size(); i++) {
            p->show_info(); // mostrar la informacion del paciente
            p++; // avanzar al siguiente
        }
        cms("pause")  ;
    }else {  // No hay
        showMessage("No hay pacientes registrados", true) ;
    }


    showMenu(); // regresar al menu
}

/// eliminar el primer elemento
void Sistema::delFirst(){
    if (pacientes.size() > 0 ) {   // si hay

        pacientes.pop(); // borrar el primer paciente encolado

        /// notificar borrado
        showMessage("El primer paciente a sido retirado", true );

    }else {  // No hay
        showMessage("No hay pacientes registrados", true) ;
    }

    showMenu(); // regresar al menu
}
