#ifndef TALLO_H
#define TALLO_H


class Tallo
{
    public:
        Tallo();
        /// metodos de la propiedad longitud
        double get_longitud ();
        void set_longitud();
        void set_longitud(double);


        virtual ~Tallo();

    private:
        double longitud ;

};

#endif // TALLO_H
