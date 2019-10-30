#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>

using namespace std;
class Persona { 
//Métodos de la clase Persona
	public:
//Constructores
	Persona();
	Persona(const char[],const char[],int,const char[]);
//Métodos de asignación
	void set_apellido(const char[]);
	void set_nombre(const char[]);
	void set_cedula( int&);
	void set_telefono(const char[]);
	void set_datos();
//Métodos de observación	
	char* get_apellido();
	char* get_nombre();
	int get_cedula();
	char* get_telefono();	
	void mostrar();
//Destructor
	~Persona();
//Atributos de la clase Persona	
	private:
	char Nombre[15];
	char Apellido[15];
	int Cedula;
	char Telefono[15];

};
#endif
