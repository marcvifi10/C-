#include<iostream>
#include<stdlib.h>

using namespace std;

class Animal
{
	private:
		int edad;
	
	public:
		Animal(int);
		virtual void Comer();	
};

class Humano : public Animal
{
	private:
		string nombre;
	
	public:
		Humano(int,string);
		void Comer();
};

class Perro : public Animal
{
	private:
		string nombre;
		string raza;
		
	public:
		Perro(int,string,string);
		void Comer();
};

Animal::Animal(int _edad)
{
	edad = _edad;
}

void Animal::Comer()
{
	std::cout<<"Yo como";
}

Humano::Humano(int _edad, string _nombre) : Animal(_edad)
{
	nombre = _nombre;
}

void Humano::Comer()
{
	Animal::Comer();
	std::cout<<" en una mesa, sentado en su silla."<<endl; 	
}

Perro::Perro(int _edad, string _nombre, string _raza) : Animal(_edad)
{
	nombre = _nombre;
	raza = _raza;
}

void Perro::Comer()
{
	Animal::Comer();
	std::cout<<" en el suelo, con su plato."<<endl;
}

int main()
{
	Animal *animales[2];
	
	animales[0] = new Perro(5,"Ayka","Pastor aleman");
	animales[1] = new Humano(22,"Marc");
	
	animales[0]->Comer();
	animales[1]->Comer();
	
	system("pause");
	return 0;
}
