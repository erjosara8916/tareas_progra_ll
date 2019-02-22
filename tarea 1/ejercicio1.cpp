/****************************************************************

    Autor : Erick Josue Saravia Aragon

    N° Carnet : SA18004

    Fecha : 2019-02-21

    Descripcion : El Programa testea el cambio del valor de las
                  variables que son pasadas a las funciones por
                  valor o referencia

*****************************************************************/

#include<iostream> // para usar "cout" y "cin"

using namespace std;

// funcion que recibe un parametro por valor
void DemoLocal( int valor )
{
    cout <<  "Dentro de DemoLocal, valor = " << valor << endl;

    valor = 75; // cambiar el valor de variable "valor"

    cout << "Dentro de DemoLocal, valor = " << valor << endl;
}


int main(){

    int n = 10;
    cout << "Antes de llamar a DemoLocal, n = " << n << endl;
    DemoLocal(n);
    cout << "Después de llamar a DemoLocal, n = " << n << endl;

    cin.get();
    return 0;

}
