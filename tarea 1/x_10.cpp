/****************************************************************

    Autor : Erick Josue Saravia Aragon

    N° Carnet : SA18004

    Fecha : 2019-02-21

    Descripcion : este programa utiliza una funcion que multiplica
                un numero que se le pase por parametro por 10

*****************************************************************/

#include<iostream> // para usar la entrada y salida de datos


using namespace std;

void x_10(int &) ;

int main() {

    int x ; // numero
        x = 12;

    // mostrar valor inicial
    cout << "valor inicial de x : " << x << endl ;

    x_10( x) ;  // ejecutar la funcion x_10

    // mostrar valore editado
    cout << "valor actual de x * 10 es =  " << x << endl ;


}

/// recibe un numero y lo multiplica por 10
void x_10(int &a)
{
    a *= 10;
}
