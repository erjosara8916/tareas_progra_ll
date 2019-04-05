#ifndef RECTANGULO_H
#define RECTANGULO_H

#include <iostream>
#include "Figura.h"
#include "Color.h"

using namespace std;

class Rectangulo:public Figura, public Color
{
    public:
        Rectangulo();
        double area();
		double perimetro();
        void ImprimirR();
        virtual ~Rectangulo();


};

#endif // RECTANGULO_H
