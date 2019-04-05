#ifndef CUADRADO_H
#define CUADRADO_H

#include <iostream>
#include "Figura.h"
using namespace std;

class Cuadrado: public Figura
{
    public:
        Cuadrado();
        double area();
		double perimetro();
        void ImprimirR();
        virtual ~Cuadrado();

};

#endif // CUADRADO_H
