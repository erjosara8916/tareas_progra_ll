#ifndef COLA_H
#define COLA_H

#include "Vector.h"

class Cola
{
	private:
		class Nodo
		{
			public:
				Vector vtr; /// vector
				Nodo *sig; /// apunta a la sigiente posicion
		};
	Nodo *raiz;
	Nodo *fondo;

	public:
		Cola();
		~Cola();
		void insertar(Vector);
		Vector extraer();
		void promedio(double&, double&, double&) ;
		void imprimir();
		bool vacia();
		int size() ;

};
#endif // COLA_H
