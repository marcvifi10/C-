#include<iostream>
#include<conio.h>

using namespace std;

struct Persona
{
	char nombre[30];
	int edad;
}persona, *puntero_persona = &persona;

void PedirDatos();
void MostrarDatos(Persona *);

int main()
{
	PedirDatos();
	MostrarDatos(puntero_persona);
	
	getch();
	return 0;
}

void PedirDatos()
{
	std::cout<<"Entra tu nombre: ";
	std::cin.getline(puntero_persona->nombre,30,'\n');
	
	std::cout<<"Entra tu edad: ";
	std::cin>>puntero_persona->edad;
}

void MostrarDatos(Persona *puntero_persona)
{
	std::cout<<"\nSu nombre es: "<<puntero_persona->nombre<<endl;
	std::cout<<"Su edad es: "<<puntero_persona->edad<<endl;
}
