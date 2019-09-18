#include<iostream>
#include<stdlib.h>

using namespace std;

//Creamos una clase llamada Persona
class Persona
{
	//Creamos los atributos privados
	private:
		int edad;
		string nombre;
	
	//Creamos los m�todos p�blicos para que todos los puedan ejecutar
	public:
		Persona(int,string); //Constructor con par�metros
		void Leer();
		void Correr();
};

//Inicializamos el constructor
Persona::Persona(int _edad, string _nombre)
{
	edad = _edad;
	nombre = _nombre;
}

void Persona::Leer()
{
	std::cout<<"Soy "<<nombre<<" y estoy leyendo un libro y tengo "<<edad<<" a�os."<<endl;
}

void Persona::Correr()
{
	std::cout<<"Soy "<<nombre<<" y estoy corriendo y tengo "<<edad<<" a�os."<<endl;
}

int main()
{
	Persona p1 = Persona(20,"Marc");
	Persona p2(19,"Maria");
	
	p1.Leer();
	p2.Correr();
	
	system("pause");
	return 0;
}
