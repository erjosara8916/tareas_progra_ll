#include <iostream> // entrada y salida de datos
#include <queue> // plantilla para crear cola
#include <string>  // para usar variables tipo string
#include "Sistema.h" // enlazar el prototipo
#include "Menu.h" // para interactuar con el menu creado
#include "BasicOperations.h" // operaciones basicas



using namespace std;

Sistema::Sistema() {


    r = new Rectangulo() ;
    c = new Cuadrado();
    t = new Triangulo();
    /// definir el menu
   main_menu.setTitle("Sistema de Area y perimetro") ; // Tema
   main_menu.add("Definir Rectangulo") ;
   main_menu.add("Definir Cuadrado") ;
   main_menu.add("Definir Triangulo") ;
   main_menu.add("Mostrar Rectangulo") ;
   main_menu.add("Mostrar Cuadrado");
   main_menu.add("Mostrar Triangulo") ;
   main_menu.add("Salir") ;

   // definir promedios a 0


   /// mostrar el menu  al usuario
   showMenu() ;

}

void Sistema::showMenu(){

    cms("cls");
    main_menu.show(); // mostrar menu

    /// realizar accion en base a lz respuesta de ususario
    switch(main_menu.getSelected()){
        case 1:
            defRectangulo();
            showMenu();
            break;
        case 2:
            defCuadrado() ;
            showMenu();
            break;
        case 3:
            defTriangulo();
            showMenu();
            break;
        case 4:
            mostrarRectangulo();
        	showMenu();
        	break;
        case 5:
            mostrarCuadrado();
            showMenu();
            break;
        case 6:
            mostrarTriangulo();
            showMenu();
            break;
        default:
            cms("cls");
            showMessage("Adios ;)") ;  // despedirse
            break;
    }

}

void Sistema::defRectangulo(){
    cms("cls");
    r->set_base();
    r->set_altura();

}
void Sistema::defCuadrado(){
    cms("cls");
    c->set_base();
}

void Sistema::defTriangulo(){
    cms("cls");

    t->set_altura();
}

void Sistema::mostrarRectangulo(){
    cms("cls") ;

    if(r->get_base() == 0 || r->get_altura() == 0 ) {
        showMessage("El rectagulo aun no ha sido definido");
    } else {
        msn = "Area : " + to_string(r->area());
        msn += "\n Perimetro: " + to_string(r->perimetro()) ;
        showMessage(msn);
        r->ImprimirR();
    }
    cms("pause");
}
void Sistema::mostrarCuadrado(){
    cms("cls") ;

    if(c->get_base() == 0  ) {
        showMessage("El cuadrado aun no ha sido definido");
    } else {
        msn = "Area : " + to_string(c->area());
        msn += "\n Perimetro: " + to_string(c->perimetro()) ;
        showMessage(msn);
        c->ImprimirR();
    }
    cms("pause");

}

void Sistema::mostrarTriangulo(){
    cms("cls") ;

    if(t->get_altura() == 0  ) {
        showMessage("El Triangulo aun no ha sido definido");

    } else {
        msn = "Area : " + to_string(t->area());
        msn += "\n   Perimetro : " + to_string(t->perimetro());
        showMessage(msn);
        t->ImprimirR();
    }
    cms("pause");

}
