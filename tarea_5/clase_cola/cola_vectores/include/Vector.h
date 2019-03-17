#ifndef VECTOR_H
#define VECTOR_H
#include <string>

using namespace std;

class Vector
{
	private:
	    /// coordenadas
		int x;
		int y;
		int z;

		string msn; // mensaje a mostrar en consola
	public:
		Vector();
		void set_x();
		void set_y();
		void set_z();
		int get_x();
		int get_y();
		int get_z();
		void show();

};

#endif
