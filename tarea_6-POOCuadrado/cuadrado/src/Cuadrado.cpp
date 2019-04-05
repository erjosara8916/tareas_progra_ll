#include "Cuadrado.h"

#include <iostream>

using namespace std;


Cuadrado::Cuadrado()
{
    set_base(0);
}

double Cuadrado::area(){
	return get_base()* get_base();
}

double Cuadrado::perimetro(){
	return 4*get_base();
}

void Cuadrado::ImprimirR(){
	for(int i=0; i<get_base(); i++){
		cout<<endl;
		for(int j=0; j<get_base(); j++){
			cout<<"* ";
		}
	}
    cout<<endl;
}
Cuadrado::~Cuadrado()
{
    //dtor
}
