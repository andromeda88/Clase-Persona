#include"Persona.h"
#include <iostream>
#include <cstring>

using namespace std;
//Constructor por omision
Persona::Persona() {
	strcpy(Apellido,"Vacío");
	strcpy(Nombre,"Vacío");
	Cedula=0;
	strcpy(Telefono," ");
}
//Constructor por parametros
Persona::Persona(const char apellido[],const char nombre[],int cedula,const char telefono[]) {
	strcpy(Apellido,apellido);
	strcpy(Nombre,nombre);
	Cedula=cedula;
	strcpy(Telefono,telefono);
}
//Metodos de asignacion
void Persona::set_apellido(const char apellido[]){
	strcpy(Apellido,apellido);
}

void Persona::set_nombre(const char nombre[]){
	strcpy(Nombre,nombre);
}

void Persona::set_cedula(int& cedula){
	Cedula=cedula;
}

void Persona::set_telefono(const char telefono[]){
	strcpy(Telefono,telefono);
}

void Persona::set_datos() {
	cout<<"Introduzca su apellido"<<endl;
	cin>>Apellido;
	cout<<"Introduzca su nombre"<<endl;
	cin>>Nombre;
	cout<<"Introduzca su número de cédula"<<endl;
	cin>>Cedula;
	cout<<"Introduzca su número de teléfono"<<endl;
	cin>>Telefono;
}
//Metodos observadores
char* Persona::get_apellido() {
	return Apellido;
}

char* Persona::get_nombre() {
	return Nombre;
}

int Persona::get_cedula() {
	return Cedula;
}

char* Persona::get_telefono() {
	return Telefono;
}

void Persona::mostrar() {
	cout<<"Apellido: "<<Apellido<<endl;
	cout<<"Nombre: "<<Nombre<<endl;
	cout<<"Cédula: "<<Cedula<<endl;
	cout<<"Teléfono: "<<Telefono<<endl;
}
//Destructor
Persona::~Persona() {  }
