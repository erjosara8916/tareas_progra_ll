#ifndef Saravia_PrestamoVehiculo_H
#define Saravia_PrestamoVehiculo_H

#include<string>

using namespace std;

class Saravia_PrestamoVehiculo
{
    public:
        Saravia_PrestamoVehiculo();
        virtual ~Saravia_PrestamoVehiculo();

        string f_GetEJCod() ;
        void f_SetEJCod() ;
        string f_GetEJVehiculo() ;
        void f_SetEJVehiculo() ;
        string f_GetEJHora() ;
        void f_SetEJHora() ;
        double f_GetEJCosto() ;
        void f_SetEJCosto() ;
        void f_Llenar();
        void f_mostrar() ;


    private:
        string EJMsn;
        string EJCod;
        string EJVehiculo;
        string EJHora;
        double EJCosto;
};

#endif // Saravia_PrestamoVehiculo_H
