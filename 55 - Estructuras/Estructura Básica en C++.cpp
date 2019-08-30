//Estructura Básica en C++

#include<iostream>
#include<conio.h>

using namespace std;

//Rellenar datos puestos
struct Persona
{
	char nombre[20];
	int edad;	
}
persona1 = {"Marc",21},
persona2 = {"Alex",18};

//Entrar datos
struct Jugador
{
	char nombre[20];
	int edad;	
}jugador1;

int main()
{
	std::cout<<"Nombre1: "<<persona1.nombre<<endl;
	std::cout<<"Edad1: "<<persona1.edad<<endl;
	
	std::cout<<"\nNombre2: "<<persona2.nombre<<endl;
	std::cout<<"Edad2: "<<persona2.edad<<endl;
	
	std::cout<<"\nNombre jugador: ";
	std::cin.getline(jugador1.nombre,20,'\n');
	std::cout<<"Edad: ";
	std::cin>>jugador1.edad;
	
	std::cout<<"\nNombre del jugador: "<<jugador1.nombre<<endl;
	std::cout<<"Edad del jugador: "<<jugador1.edad<<endl;
	
	getch();
	return 0;
}



