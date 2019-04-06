#include <iostream> // entrada y salida de datos
#include <stack> // plantilla para crear cola
#include <string>  // para usar variables tipo string
#include "Sistema.h" // enlazar el prototipo
#include "Menu.h" // para interactuar con el menu creado
#include "BasicOperations.h" // operaciones basicas

using namespace std;

Sistema::Sistema() {

    /// definir el menu
   EJMainMenu.f_setTitle("Sistema para Examenes") ;
   EJMainMenu.f_add("Agregar Examen") ;
   EJMainMenu.f_add("Eliminar Examen") ;
   EJMainMenu.f_add("Listar Examen") ;
   EJMainMenu.f_add("Buscar Examen") ;
   EJMainMenu.f_add("Ver promedio, nota maxima y minima") ;
   EJMainMenu.f_add("Salir") ;
   //EJAux_Examen ;

   /// mostrar el menu  al usuario
   f_showMenu() ;

}

void Sistema::f_showMenu(){

    f_cms("cls");
    EJMainMenu.f_show(); // mostrar menu

    /// realizar accion en base a lz respuesta de ususario
    switch(EJMainMenu.getSelected()){
        case 1:
            f_newExam();

            f_showMenu();
            break;
        case 2:
            f_cms("cls");
            f_delFirst();
            break;
        case 3:
            f_showExams();
            break;
        case 4:
            f_searchExam();
            break;
        case 5:
            f_showInfo();
            break;
        default:
            f_cms("cls");
            f_showMessage("Adios ;)") ;  // despedirse
            break;
    }

}

void Sistema::f_newExam(){

    f_cms("cls") ;

    // dedinir los datos del nuevo ahorrante
    EJAux_Examen.f_llenar();

    bool exist;
    exist = false;


    Saravia_Examen *exam = &EJSaravia_Examenes.top();  // crear referencia a la primera posicion

    /// recorrer los Saravia_Examenes

    for(int i = 1; i <= EJSaravia_Examenes.size(); i++) {

        // verificar repeticiones
        bool EJDue = EJAux_Examen.f_getEJDue() == exam->f_getEJDue() ;
        bool EJFecha = EJAux_Examen.f_getEJFecha() == exam->f_getEJFecha() ;
        bool EJTipoActividad = EJAux_Examen.f_getEJTipoActividad() == exam->f_getEJTipoActividad() ;
        bool EJNota = EJAux_Examen.f_getEJNota() == exam->f_getEJNota() ;

        // verificar si el dato esta repetido
        if(EJDue && EJFecha && EJTipoActividad && EJNota){
            exist = true;
        }
        exam--; // avanzar al siguiente
    }

    if(exist){
        f_showMessage("El Examen que quieres registrar ya se encuentra registrado :(", true);
    } else {
        EJSaravia_Examenes.push(EJAux_Examen);
        f_showMessage("El examen a sido registrado de forma exitosa :)", true);
    }
    // anexar el nuevo ahorrante


     // regresar al menu
}

void Sistema::f_showExams(){
    f_cms("cls") ;

    /// Verificar si hay Saravia_Examenes registrados
    if (EJSaravia_Examenes.size() > 0 ) {   // si hay

        Saravia_Examen *exam = &EJSaravia_Examenes.top();  // crear referencia a la primera posicion

        /// recorrer los Saravia_Examenes
        for(int i = 1; i <= EJSaravia_Examenes.size(); i++) {
            exam->f_mostrarSaravia_Examen(); // mostrar la informacion del ahorrante
            exam--; // avanzar al siguiente
        }

    }else {  // No hay
        f_showMessage("No se encuentran Saravia_Examenes registrados") ;
    }

    f_cms("pause") ;
    f_showMenu(); // regresar al menu
}

/// eliminar el primer elemento
void Sistema::f_delFirst(){
    EJSaravia_Examenes.pop(); // borrar el primer ahorrante encolado

    /// notificar borrado
    f_showMessage("El primer elemento a sido eliminado", true );
    f_showMenu(); // regresar al menu
}

void Sistema::f_searchExam(){
    f_cms("cls") ;

    /// Verificar si hay Saravia_Examenes registrados
    if (EJSaravia_Examenes.size() > 0 ) {   // si hay

        bool exist;
        exist = false;
        f_setData("Ingresa el due del estudiante cuyo parcial deseas buscar: ", cin, EJMsn);

        Saravia_Examen *exam = &EJSaravia_Examenes.top();  // crear referencia a la primera posicion

        /// recorrer los Saravia_Examenes
        for(int i = 1; i <= EJSaravia_Examenes.size(); i++) {
            if(EJMsn == exam->f_getEJDue()){
                exam->f_mostrarSaravia_Examen(); // mostrar la informacion del ahorrante
                exist = true;
            }
            exam--; // avanzar al siguiente
        }

        if(!exist){
            f_showMessage("El Examen que as buscado no se encuentra registrado");
        }


    }else {  // No hay
        f_showMessage("No se encuentran Saravia_Examenes registrados") ;
    }

    f_cms("pause") ;
    f_showMenu(); // regresar al menu
}


void Sistema::f_calcInfo(){
    Saravia_Examen *EJexam = &EJSaravia_Examenes.top();  // crear referencia a la primera posicion
    EJProm = 0;
    EJMax = EJexam->f_getEJNota();
    EJMin = EJexam->f_getEJNota();
    /// recorrer los Saravia_Examenes
    for(int i = 1; i <= EJSaravia_Examenes.size(); i++) {
        EJProm += EJexam->f_getEJNota();
        if(EJexam->f_getEJNota() > EJMax ) {
            EJMax = EJexam->f_getEJNota();
        }
        if(EJexam->f_getEJNota() < EJMin ) {
            EJMin = EJexam->f_getEJNota();
        }
        EJexam--; // avanzar al siguiente
    }

    EJProm = EJProm / EJSaravia_Examenes.size();
}

void Sistema::f_showInfo(){
    if (EJSaravia_Examenes.size() > 0 ) {
        f_calcInfo();
        EJMsn = "Promedio: " + to_string(EJProm);
        EJMsn += "\n  Nota maxima: " + to_string(EJMax);
        EJMsn += "\n  Nota Minima: " + to_string(EJMin);

        f_showMessage(EJMsn, true);
    } else {
        f_showMessage("No hay Saravia_Examenes Registrados", true);
    }

    f_showMenu(); // regresar al menu
} // mostrar la informacion de la pila
