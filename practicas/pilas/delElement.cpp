/****************************************************************

    Autor : Erick Josue Saravia Aragon

    N° Carnet : SA18004

    Fecha : 2019-03-03

    Descripcion : este codigo borra un elemento cualquiera de una pila

*****************************************************************/

#include<iostream> // para usar "cout" y "cin"
#include<stack>
#include<windows.h>

using namespace std;

int main(){

    stack<int> numbers; // crear pila

    /// llenar la pila
    for(int i = 1; i < 11; i++ ){
        numbers.push(i);
    }

    /// mostrar el contenido de pila original
    cout << "\n\n .:original:. \n\n";
    for(int i = 1; i <= numbers.size() ; i++ ){
        int *aux = &numbers.top() ;
        aux -= numbers.size() - i;

        cout << *aux << endl ;
    }
    system("pause") ;
    system("cls") ;

    int pos ; // posicion a borrar en la pila
    pos = 1; // definir la posicion a borrar

    /// almacenar los elementos borrados que deseo recuperar
    stack<int> aux_numbers;

    int ac = 0; /// contador para restar las ubicaciones

    int length = numbers.size(); /// longitud de la pila

    ///
    for(int i = length; i >= pos ; i-- ){
        int *aux = &numbers.top() ;

        aux -= ac ;
        int num = *aux;
        aux_numbers.push(num) ;
        ac++;
    }
    cout << "elementos en aux: " << aux_numbers.size() << endl ;

    for(int i = 1; i <= aux_numbers.size() ; i++ ){
        numbers.pop();
    }

    cout << "eliminar elemento: " << pos << endl ;
    cout << "elementos en numbers: " << numbers.size() << endl ;


    system("pause") ;
    system("cls") ;

    // volver a colocar los valores en numbers
    int ac2 = 1;
    int length2 = aux_numbers.size() - 1;
    for(int i = length2 ; i >= 1 ; i-- ){
        int *aux = &aux_numbers.top() ;

        aux -= ac2 ;
        int num = *aux;
        numbers.push(num) ;
        ac2++;

    }

    cout << "\n\n .:borrado:. \n\n";

    for(int i = 1; i <= numbers.size() ; i++ ){
        int *aux = &numbers.top() ;
        aux -= numbers.size() - i;

        cout << *aux << endl ;
    }




    return 0;

}
