/****************************************************************

    Autor : Erick Josue Saravia Aragon

    N° Carnet : SA18004

    Fecha : 2019-02-21

    Descripcion : este programa utiliza una funcion que evalua dos
                numeros y el que resulte ser menor se cambiara a cero

*****************************************************************/

#include<iostream> // para usar la entrada y salida de datos


using namespace std;

void MenorAcero(int &, int &) ;

int main() {

    cout << "De estos numeros el menos sera cambiado a cero./ \n\n" ;
    int x ; // primer numero
    int y ; // segundo numero
        x = 35;
        y = 33;

    // mostrar valores iniciales
    cout << " x : " << x << endl ;
    cout << " y : " << y << endl << endl;
    MenorAcero( x, y) ;  // ejecutar la funcion MenorAcero


    // informar situacion y mostrar cambios
    cout << "Los numeros han quedado de la siguiente manera: " << endl << endl;
    cout << "x : " << x << endl ;
    cout << "y : " << y << endl ;


}

/// evalua dos numeros y si el primero es MenorAcero los cambia de posicion
void MenorAcero(int &a, int &b)
{
   /**
    el criterio para fijar un numero a cero es que sea menor
    sin embargo si ambos son iguales ambos quedaran en su estado original
   */
  // verificar si el primero es MenorAcero
   if (a < b) {
        a = 0; // fijar a cero
   } else if(b < a) {
        b = 0; // fijar a cero
   }

}
