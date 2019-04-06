#ifndef MENU_H
#define MENU_H

#include <string>
#include <stack>  // para poder usar pilas

using namespace std;

class Menu
{
    public:
        Menu() ;
        void f_setTitle(string) ; // definir el titulo
        void f_add(string) ; // agregar opcion al menu
        void f_show() ; // mostrar el menu
        int getSelected() ; // obtener opcion seleccionada

    private:
        stack<string> options; // opciones del menu
        string title ;  // titulo del menu
        int selected ;  // opcion seleccionada del menu
};

#endif // MENU_H
