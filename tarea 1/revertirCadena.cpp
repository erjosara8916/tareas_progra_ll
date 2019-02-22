/****************************************************************

    Autor : Erick Josue Saravia Aragon

    N° Carnet : SA18004

    Fecha : 2019-02-21

    Descripcion : Este programa permite revertir una caddena usando punteros

*****************************************************************/

#include<iostream> // para usar "cout" y "cin"

using namespace std;

/// ncontrar ka ongitud de la cadena
int longitud( char *cadena ) {
    char *msn = cadena;
    while(msn[0] != '\0'){
        msn++ ;
    }

    return (int) (msn - cadena) ;
}

void revertir( char *cadena, int &longitud ) {
    for ( int i = longitud - 1 ; i >= 0 ; i-- ) {
        cout << cadena[i] ;
    }
}


int main(){
    char *str ; // cadena de caracteres
    int tamanio ; // cantidad de caracteres que conforman la cadena
        str = "hola Mundo" ;


        cout << "el texto original es: " << str << endl;

        tamanio =  longitud( str ); // calcular el tamaño

        cout << "el texto inverido es: ";
        revertir(str, tamanio); // mostrar cadena invertida
    return 0;

}
