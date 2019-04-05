#include "Triangulo.h"
#include<iostream>

#include <math.h>

using namespace std;
Triangulo::Triangulo()
{

    set_altura(0);
}

double Triangulo::area(){
    return (get_altura()*get_altura())/2;
}

double Triangulo::perimetro(){
    return get_altura() + get_altura() + sqrt( 2 * pow(get_altura(), 2))  ; // usando pitagoras
}

void Triangulo::ImprimirR(){
    for(int i=1;i<=get_altura();i++){

		for(int n=1;i>=n;n++)
			 cout<<"*";

			cout<<"\n";

		//printf("\n");


	}
}


Triangulo::~Triangulo()
{
    //dtor
}
