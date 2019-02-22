/****************************************************************

    Autor : Erick Josue Saravia Aragon

    N° Carnet : SA18004

    Fecha : 2019-02-21

    Descripcion : este programa utiliza una funcion que evalua dos
                numeros y  cuando el primero es mayor los
                intercambia de posicion

*****************************************************************/

#include<iostream> // para usar la entrada y salida de datos


using namespace std;

void Mayor(int &, int &, bool &) ;

int main() {

    int x ; // primer numero
    int y ; // segundo numero
    bool changed ; // verifica si ha habido c
        x = 35;
        y = 33;

    // mostrar valores iniciales
    cout << "valor inicial de x : " << x << endl ;
    cout << "valor inicial de y : " << y << endl << endl;
    Mayor( x, y, changed) ;  // ejecutar la funcion mayor

    // verificar si hubo algun cambio
    if ( changed ) {
        // informar situacion y mostrar cambios
        cout << "Los datos se intercambiaron " << endl << endl;
        cout << "valor actual de x : " << x << endl ;
        cout << "valor actual de y : " << y << endl ;
    }

}

/// evalua dos numeros y si el primero es mayor los cambia de posicion
void Mayor(int &a, int &b , bool &changed )
{
   int aux; // copia para "a"

  // verificar si el primero es mayor
   if (a > b) {
        aux = a; // realizar copia de "a"
        a = b ; // definir -a- como -b-
        b = aux; // definir -b- como el valor inicial de -a-
        changed = true; // informar cambio
   }

}
