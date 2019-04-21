
#ifndef FABRICA_H
#define FABRICA_H
#include "ArbolOrnamental.h"
#include "ArbolFrutal.h"

class Fabrica
{
    public:
        Fabrica();
        Arbol* crearArbol(int) ;
        virtual ~Fabrica();

    protected:

    private:
};

#endif // FABRICA_H
