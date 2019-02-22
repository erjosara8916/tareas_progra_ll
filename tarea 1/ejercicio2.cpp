#include <stdio.h>
#include <conio.h>

void Intercambio(int, int);
void Intercambio(int *, int *);
//void Intercambio( int &, int &);

int main() {
    int x = 22, y = 33;
        printf("x = %d\t y = %d\n", x, y);
        Intercambio(x,y);               // llamada por valor
        printf("x = %d\t y = %d\n", x, y);
        Intercambio( x, y);
    // llamada por referencia
        printf("x = %d\t y = %d\n", x, y);
        Intercambio(&x, &y);         // llamada por puntero
        printf("x = %d\t y = %d\n", x, y);
   getch();
}

void Intercambio( int a, int b)
{
   int aux;
   aux = a;
   a = b;
   b = aux;
}
void Intercambio(int *a, int *b)
{
   int aux;
   aux = *a;
   *a = *b;
   *b = aux;
}
void Intercambio(  int &a, int &b)
{
   int aux; // esto no tiene ninguna utilidad ya que su valor es cambiado inmediatamente
   aux = a;
   a = b;
   b = aux;
}
