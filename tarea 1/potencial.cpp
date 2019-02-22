/****************************************************************

    Autor : Erick Josue Saravia Aragon

    N° Carnet : SA18004

    Fecha : 2019-02-21

    Descripcion : este programa utiliza una funcion que multiplica
                un numero que se le pase por parametro por 10

*****************************************************************/

#include<iostream> // para usar la entrada y salida de datos
#include<math.h> // para usar funciones matematicas

using namespace std;

void potencial(double &, int &) ;

int main() {

    double x ; // numero
    int pot; //  potencia
        x = 12;
        pot = 3;

    // mostrar valor inicial
    cout << "valor inicial de x : " << x << endl ;

    potencial( x, pot) ;  // ejecutar la funcion potencial

    // mostrar valor elevado a la potencia
    cout << "valor actual de x ^ " << pot <<" es =  " << x << endl ;


}

/// recibe un numero y lo eleva a la potencia indicada
void potencial(double &a, int &n)
{
    // eleva el valor de la variable a la potencia y lo guarda en la misma
    a = pow(a, n) ;
}
