#include<iostream>
#include<conio.h>

using namespace std;

struct Complejo
{
	float real, imaginaria;
}z1,z2;

void PedirDatos();
Complejo Suma(Complejo,Complejo);
void Muestra(Complejo);

int main()
{
	PedirDatos();
	
	Complejo x = Suma(z1,z2);
	
	Muestra(x);
	
	getch();
	return 0;
}

void PedirDatos()
{
	std::cout<<"Entra los datos para el primer numero complejo: "<<endl;
	std::cout<<"Parte Real: ";
	std::cin>>z1.real;
	std::cout<<"Parte Imaginaria: ";
	std::cin>>z1.imaginaria;
	
	std::cout<<"\nEntra los datos para el segundo numero complejo: "<<endl;
	std::cout<<"Parte Real: ";
	std::cin>>z2.real;
	std::cout<<"Parte Imaginaria: ";
	std::cin>>z2.imaginaria;
}

Complejo Suma(Complejo z1, Complejo z2)
{
	z1.real = z1.real + z2.real;
	z1.imaginaria = z1.imaginaria + z2.imaginaria;
	
	return z1;
}

void Muestra(Complejo x)
{
	std::cout<<"\nResultado de la suma: "<<x.real<<" , "<<x.imaginaria;
}
