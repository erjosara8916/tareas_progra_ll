#include "Cola.h"
#include <iostream>

using namespace std;

Cola::Cola()
{
	raiz = NULL;
	fondo = NULL;
}

Cola::~Cola()
{
	Nodo *reco = raiz;
	Nodo *bor;
	while (reco != NULL)
	{
		bor = reco;
		reco = reco -> sig;
		delete bor;
	}
}

void Cola::insertar(Vector v)
{
	Nodo *nuevo;
	nuevo = new Nodo();
	nuevo -> vtr = v;
	nuevo -> sig = NULL;
	if (vacia())
	{
		raiz = nuevo;
		fondo = nuevo;
	}
	else
	{
		fondo -> sig = nuevo;
		fondo = nuevo;
	}
}

Vector Cola::extraer()
{
    Vector v;
	if(!vacia())
	{
        v = raiz -> vtr;
		Nodo *bor = raiz;
		if (raiz == fondo){
			raiz = NULL;
			fondo = NULL;
		}
		else{
			raiz = raiz -> sig;
		}
		delete  bor;
		return v;
	}
	else
	{
		return v;
	}
}

void Cola::imprimir()
{
	Nodo *reco = raiz;
	cout<<"Listado de todos los elementos de la cola.\n";
	while(reco != NULL)
	{
		reco -> vtr.show();
		reco = reco -> sig;
	}
}

void Cola::promedio(double &x, double &y, double &z)
{
    int lenght;
    lenght = size();
    Nodo *reco = raiz;

	while(reco != NULL)
	{
        x += reco -> vtr.get_x();
        y += reco -> vtr.get_y();
        z += reco -> vtr.get_z();

		reco -> vtr.show();
		reco = reco -> sig;
	}

	x /= lenght;
	y /= lenght;
	z /= lenght;

}

bool Cola::vacia()
{
	if (raiz == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int Cola::size()
{
    int lenght;
    lenght = 0;
    Nodo *reco = raiz;

	while(reco != NULL)
	{
        lenght++;
		reco = reco -> sig;
	}

	return lenght;
}

/*
int main()
{
	Cola *cola1 = new Cola();
	cola1 -> insertar(5);
	cola1 -> insertar(10);
	cola1 -> insertar(50);
	cola1 -> imprimir();
	cout<<"Extraemos uno de la cola: "<<cola1 -> extraer();
	cola1 -> imprimir();
	delete cola1;
	cin.get();

	getch();
	return 0;
}
*/
