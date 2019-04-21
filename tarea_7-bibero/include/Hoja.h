
#ifndef HOJA_H
#define HOJA_H

#include <iostream>
#include <string>

using namespace std;

class Hoja
{
    public:
        Hoja();

        // metodos de la propiedad forma
        string get_forma ();
        void set_forma();
        void set_forma(string);

         /// metodos de la propiedad longitud
        double get_longitud ();
        void set_longitud();
        void set_longitud(double);

        void set_hoja() ;
        virtual ~Hoja();

    protected:

    private:
        string forma ;
        double longitud ;



};

#endif // HOJA_H
