#include "Persona.h"
#include <iostream>

//Programa principal que hace algunas pruebas a la clase persona

using namespace std;

int main() {
//Crea un vector persona
Persona p[5];
for(int i=0;i<5;i++) {
	p[i].set_datos();
}
for(int i=0;i<5;i++) {
	p[i].mostrar();
}
//Crea una persona
Persona p1;
const char* a="Diaz";
p1.set_apellido(a);
const char* n="Mary";
p1.set_nombre(n);
int nc=4567890;
p1.set_cedula(nc);
const char* t="04145646465";
p1.set_telefono(t);
p1.mostrar();
return 0;
}
