//Paso de parametros de tipo estructura

#include<iostream>
#include<conio.h>

using namespace std;

struct Persona
{
	char nombre[30];
	int edad;
}p1;

void PedirDatos();
void MostrarDatos(Persona);

int main()
{
	PedirDatos();
	MostrarDatos(p1);
	
	getch();
	return 0;
}

void PedirDatos()
{
	std::cout<<"Entra el nombre: ";
	std::cin.getline(p1.nombre,30,'\n');
	
	std::cout<<"Entra la edad: ";
	std::cin>>p1.edad;
}

void MostrarDatos(Persona p)
{
	std::cout<<"\n\nNombre: "<<p.nombre<<endl;
	std::cout<<"Edad: "<<p.edad<<endl;
}
