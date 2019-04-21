
#ifndef ARBOL_H
#define ARBOL_H

#include <iostream>
#include <string>
#include "Hoja.h"
#include "Tallo.h"

using namespace std;

class Arbol
{
    public:
        Arbol();

        /// metodos para la propiedad NComun
        string get_NComun ();
        void set_NComun(string);
        void set_NComun();

        /// metodos para la propiedad  NCient
        string get_NCient ();
        void set_NCient();
        void set_NCient(string);
        void set_Arbol() ;

        /// metodos para la propiedad familia
        string get_familia ();
        void set_familia();
        void set_familia(string);

        /// metodos de la propiedad hoja
        Hoja get_hoja ();

        /// metodos de la propiedad tallo
        Tallo* get_tallo ();

        virtual void msn(); // es virtual para que sea sobreescrito por las clases hijas
        virtual ~Arbol();

    private:
        string NComun ;
        string NCient ;
        string familia ;
        Hoja hoja ;
        Tallo* tallo ;




};

#endif // ARBOL_H
