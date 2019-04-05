#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "Figura.h"

class Triangulo: public Figura
{
    public:
        Triangulo();
        double area();
        double perimetro();
        void ImprimirR();
        virtual ~Triangulo();


};

#endif // TRIANGULO_H
