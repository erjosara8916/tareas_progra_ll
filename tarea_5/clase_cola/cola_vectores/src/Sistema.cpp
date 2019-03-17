#include <iostream> // entrada y salida de datos
#include <queue> // plantilla para crear cola
#include <string>  // para usar variables tipo string
#include "Sistema.h" // enlazar el prototipo
#include "Menu.h" // para interactuar con el menu creado
#include "BasicOperations.h" // operaciones basicas

using namespace std;

Sistema::Sistema() {


    /// definir el menu
   main_menu.setTitle("Sistema Cola de Vectores") ; // Tema
   main_menu.add("Agregar Vector") ;
   main_menu.add("Mostrar Vectores") ;
   main_menu.add("Eliminar primer Vector") ;
   main_menu.add("Mostrar Promedio de vectores");
   main_menu.add("Ver memoria ocupada por vectores") ;
   main_menu.add("Salir") ;

   // definir promedios a 0

	prom_x = 0;
    prom_y = 0;
    prom_z = 0;

   /// mostrar el menu  al usuario
   showMenu() ;

}

void Sistema::showMenu(){

    system("cls");
    main_menu.show(); // mostrar menu

    /// realizar accion en base a lz respuesta de ususario
    switch(main_menu.getSelected()){
        case 1:
            newVector();
            break;
        case 2:
            system("cls");
            showVectores();
            break;
        case 3:
            delFirst();
            break;
        case 4:
        	showProm(); // mostrar el promedio
        	showMenu();
        	break;
        case 5:
            showWeight();
            showMenu() ;
            break;
        default:
            system("cls");
            showMessage("Adios ;)") ;  // despedirse
            break;
    }

}

void Sistema::newVector(){

    system("cls") ;

	// defiunir el nuevo vector
	aux_vector.set_x();
	aux_vector.set_y();
	aux_vector.set_z();


	vectores->insertar(aux_vector); // agregar el vector creado

    showMenu(); // regresar al menu
}

void Sistema::showVectores(){
    system("cls") ;

    vectores->imprimir() ;
    system("pause") ;

    showMenu(); // regresar al menu
}

/// eliminar el primer elemento
void Sistema::delFirst(){

    vectores->extraer() ;


    showMenu(); // regresar al menu
}
/*

void Sistema::calcProm(){


    Vector *v = &vectores.front();  // crear referencia a la primera posicion

    /// recorrer los vectores y sumar coordenadas
    for(int i = 1; i <= vectores.size(); i++) {
        prom_x += v->get_x(); // obtener el valor de x de este vector
        prom_y += v->get_y(); // obtener el valor de y de este vector
        prom_z += v->get_z(); // obtener el valor de z de este vector
        v++; // avanzar al siguiente
    }

    // dividir sumatorias entre el numero de datos sumados
    prom_x /= vectores.size();
    prom_y /= vectores.size();
    prom_z /= vectores.size();

}
*/
/// mostrar el promedio
void Sistema::showProm(){

	cms("cls");

	// verificar si hay vectores guardados
	if (!vectores->vacia()) {   // si hay

        vectores->promedio(prom_x, prom_y, prom_z); // calcular el promedio

        // crear el mensaje a motrar
        msn = "Promedio coordenada x: " + to_string(prom_x) ;
        msn += "\n   Promedio coordenada y: " + to_string(prom_y) ;
        msn += "\n   Promedio coordenada z: " + to_string(prom_z) ;
        showMessage(msn, true);

    }else {  // No hay
       showMessage("No hay vectores guardados", true) ;
    }
}

/// mostrar el espacion ocupado en la memria por todos los vectores en la cola
void Sistema::showWeight() {
    msn = "Memoria ocupada por los vectores: " ;

/// multiplicar el tamaño del ultimo vector ( la clase ) con la cantidad de estos que an sido creados
    msn +=  to_string((sizeof(Cola) + sizeof(Vector) ) * vectores->size() ) ;
    showMessage(msn, true);
}


