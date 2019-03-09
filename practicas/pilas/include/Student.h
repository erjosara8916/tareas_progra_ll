#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include<string>

using namespace std;
/**
    define los datos de un estudiante
*/

struct student {
    string card ;
    string name ;
    string lastName ;
    int age ;
    string msn;

    void show() {

       msn = "\n .: Carnet: " + card;
       msn += "\n .: Nombre: " + name;
       msn += "\n .: Apellido: " + lastName;
       msn += "\n .: Edad: " + to_string(age)+ " \n" ;

       cout << msn << endl;
   }

};

#endif // STUDENT_H
