#ifndef PACIENTE_H
#define PACIENTE_H

#include<string>

using namespace std;

class Paciente
{
	private:
	    string msn;
		int corela; // numero correlativo
		string nombre;
		string apellido;
		int edad;
		string sexo;
		double peso;
		string enf; // enfermedad cronica

	public:
		Paciente();
		void set_corela(int);
		void set_nombre();
		void set_apellido();
		void set_edad();
		void set_sexo();
		void set_peso();
		void set_enf();
		void show_info();
		void set_all(int);
};

#endif
