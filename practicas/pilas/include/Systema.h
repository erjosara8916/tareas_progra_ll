#ifndef SYSTEMA_H
#define SYSTEMA_H

#include <iostream>
#include<cstdlib> // operaciones basicas
#include<stack> // plantilla para pilas
#include<string> // para usar datos tipo "string"
#include "operacionesBasicas.h"

#include"Menu.h"

using namespace std;

/**
    definira las caracteristicas del sistema actual
*/
struct system {
    string msn;  // mensajes a mostrar en pantalla
    struct menu main_menu; // menu principal
    stack<student> students; // estudiantes registrados
    int answerUser;

    /**
        Descripcion: Inicia variables y muestra la primer vista del
            sistema
    */
void start( ) {
        msn = " Aqui va la descripcion de mi programa " ;
        showMessage(msn, true) ;

        // crear el menu
        main_menu.title = "Menu Principal" ;
        main_menu.add("Agregar alumno") ;
        main_menu.add("Ver Alumnos") ;
        main_menu.add("Eliminar alumno") ;
        main_menu.add("Salir") ;

        showMenu() ;
}

    void showMenu () {
        main_menu.show() ;

        switch (main_menu.selected) {
        case 1:
            newStudent() ;
            showMenu() ;
            break;
        case 2:
            showStudents() ;
            showMenu() ;
            break;
        case 3:
            deleteStudent() ;
            showMenu() ;
            break;
        }
    }

    void newStudent () {
        struct student aux_student ;
        setData("Carnet del estudiante: ", cin, aux_student.card) ;
        setData("Nombres del estudiante: ", cin, aux_student.name) ;
        setData("Apellidos del estudiante: ", cin, aux_student.lastName) ;
        setData("Edad del estudiante: ", aux_student.age) ;

        students.push(aux_student) ;

    }

    void showStudents() {
        cms("cls") ;
        int pos; // posicion a mostrar
        int length; // numero de opciones del menu

        length = students.size() ; // calcular
        for (pos = 1; pos <= length; pos++){

            student *nodo = &students.top(); // ubicacion del ultimo elemento del menu
            nodo -= (length - pos) ; // mover la ubicacion hasta la posicion de seada
            cout << " .: numero: " + to_string(pos) ;
            nodo->show(); // mostrar la opcion
        }
        cms("pause") ;

    }

    void deleteStudent() {
        showMessage("Alumnos registrados", true) ;
        showStudents() ; // mostrar los alunmos registrados

        // solicitar alumno a eliminar
        do {
            setData("Escribe el numero de un alumno (1  - " + to_string(students.size()) + ") : "  , answerUser) ;
        } while ( answerUser < 1 || answerUser > students.size() ) ;

        stack<student> aux_students;

        int ac = 0; /// contador para restar las ubicaciones

        int length = students.size(); /// longitud de la pila

        ///
        for(int i = length; i >= answerUser ; i-- ){
            student *aux = &students.top() ;

            aux -= ac ;
            student stud = *aux;
            aux_students.push(stud) ;
            ac++;
        }

        for(int i = 1; i <= aux_students.size() ; i++ ){
            students.pop();
        }

        // volver a colocar los valores en numbers
        int ac2 = 1;
        int length2 = aux_students.size() -1;
        for(int i = length2 ; i >= 1 ; i-- ){
            student *aux = &aux_students.top() ;

            aux -= ac2 ;
            student num = *aux;
            students.push(num) ;
            ac2++;

        }

    }

};

#endif // SYSTEMA_H
