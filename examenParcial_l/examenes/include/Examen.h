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
        string f_getEJDue();
        string f_getEJFecha();
        string f_getEJTipoActividad();
        double f_getEJNota();
        void f_setEJDue();
        void f_setEJFecha();
        void f_setEJTipoActividad();
        void f_setEJNota();
        void f_llenar();
        void f_mostrarSaravia_Examen();

        ~Saravia_Examen();

        string GetEJDue() { return EJDue; }
        void SetEJDue(string val) { EJDue = val; }




};

#endif // Saravia_Examen_H
