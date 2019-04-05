#ifndef FIGURA_H
#define FIGURA_H


class Figura
{
    public:
        Figura();
        Figura(double, double);
        double get_base ();
        void set_base();
        void set_base(double);
        double get_altura ();
        void set_altura();
        void set_altura(double);

        virtual double area()=0;
        virtual double perimetro()=0;
        virtual ~Figura();

    private:
        double base ;
        double altura ;


};

#endif // FIGURA_H
