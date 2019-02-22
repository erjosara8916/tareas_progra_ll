/****************************************************************

    Autor : Erick Josue Saravia Aragon

    N° Carnet : SA18004

    Fecha : 2019-02-21

    Descripcion : este programa utiliza una funcion que calcula
                el area de un cuadrado de y un cubo, sabiendo uno de
                sus lados

*****************************************************************/

#include<iostream> // para usar la entrada y salida de datos


using namespace std;

void area_cuad(int &, int & ) ;
void area_cub(int &, int &) ;

int main() {

    int x ; // lado - se utiliza el mismo lado para el cubo y el cuadrado
    int area1; // area de cuadrado
    int area2; // area del cubo
        x = 12;


    // mostrar valor inicial
    cout << "el lado del cuadrado es  : " << x << endl << endl ;

    area_cuad( x, area1) ;  // ejecutar la funcion area_cuad
    area_cub(x, area2) ; // ejecutar la funcion area_cub
    // mostrar area  del cuadrado
    cout << "el area del cuadrado es =  " << area1 << endl;

    // mostrar area del cubo
    cout << "el area del cubo es =  " << area2 << endl;



}

/// encuetra el area de un cubo
void area_cuad(int &a,  int &area)
{
    area = a * a;
}

/// encuentra el area de un cubo. se asume que el area de un cubo
/// es igual a la suma de las areas de sus 6 caras
void area_cub(int &a, int &area)
{
    area =  (a * a) * 6; // encontrar area
}
