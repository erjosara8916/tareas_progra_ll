#ifndef CUADRADO_H
#define CUADRADO_H


#include "Figura.h"


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
