
#include "Rectangulo.h"
#include "BasicOperations.h"
#include <iostream>

using namespace std;

Rectangulo::Rectangulo()
{
    set_base(0);
    set_altura(0);

}


double Rectangulo::area(){
	return get_base()* get_altura();
}

double Rectangulo::perimetro(){
	return 2*get_base()+2*get_altura();
}

void Rectangulo::ImprimirR(){
	for(int i=0; i<get_altura(); i++){
		cout<<endl;
		for(int j=0; j<get_base(); j++){
			cout<<"* ";
		}
	}

	cout<<endl;
}
Rectangulo::~Rectangulo()
{
    //dtor
}
