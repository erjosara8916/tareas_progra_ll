#ifndef Saravia_Examen_H
#define Saravia_Examen_H

#include<string>


using namespace std;

class Saravia_Examen
{
    private:
        string EJMsn;
        string EJDue;
        string EJFecha;
        string EJTipoActividad;
        double EJNota;
        bool EJRevisado;
    public:
        Saravia_Examen();
        string f_GetEJDue();
        string f_GetEJFecha();
        string f_GetEJTipoActividad();
        double f_GetEJNota();
        void f_SetEJDue();
        void f_SetEJFecha();
        void f_SetEJTipoActividad();
        void f_SetEJNota();
        void f_llenar();
        void f_mostrarSaravia_Examen();

        ~Saravia_Examen();





};

#endif // Saravia_Examen_H
