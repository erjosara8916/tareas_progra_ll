#include "Paciente.h"
#include <iostream> // entrada y salida de datos
#include <queue> // plantilla para crear cola
#include <string>  // para usar variables tipo string
#include "BasicOperations.h" // Operaciones basicas

Paciente::Paciente(){ }

// colocar correlativo

void Paciente::set_corela(int prev){
	corela = prev + 1;
}

// definir nombre
void Paciente::set_nombre(){
	setData("Escribe el nombre del paciente: ", cin, nombre) ;
	cms("cls") ;
}

// definir apellido
void Paciente::set_apellido(){
	setData("Escribe el apellido del paciente: ", cin, apellido) ;
	cms("cls") ;
}

// definir edad
void Paciente::set_edad(){
	setData("Escribe el edad del paciente: ", edad) ;
	cms("cls") ;
}

// definir sexo
void Paciente::set_sexo(){
	setData("Escribe el sexo del paciente: ", cin, sexo) ;
	cms("cls") ;
}

// definir peso
void Paciente::set_peso(){
	setData("Escribe el peso del paciente: ", peso) ;
	cms("cls") ;
}

// definir la enfermedad
void Paciente::set_enf(){
	setData("Escribe la enfermedad del paciente: ", cin, enf) ;
	cms("cls") ;
}

// llenar todo
void Paciente::set_all(int prev){
	set_corela(prev);
	set_nombre();
	set_apellido();
	set_edad();
	set_sexo();
	set_peso();
	set_enf();
}

/// mostrar la informacion del paciente
void Paciente::show_info(){

    /// crear el mensaje a mostrar al usuario
	msn = "Correlativo: " + to_string(corela) ;
	msn += "\n   Nombre: " + nombre ;
    msn += "\n   Apellido: " + apellido ;
    msn += "\n   Edad: " + edad ;
    msn += "\n   Sexo: " + sexo ;
    msn += "\n   Peso: " + to_string(peso) ;
    msn += "\n   Enfermedad Cronica: " + enf ;

	showMessage(msn) ;
}

