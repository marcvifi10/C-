#include<iostream>
#include<conio.h>

using namespace std;

void PedirDatos();

int calcularSuma(int vec[],int);

int vec[100],tam;

int main()
{
	PedirDatos();
	
	std::cout<<"\nLa suma de los elementos del vector es: "<<calcularSuma(vec,tam)<<endl;

	getch();
	return 0;
}

void PedirDatos()
{
	std::cout<<"Entra el numero de elementos del vector: ";
	std::cin>>tam;
	
	for(int i=0; i<tam; i++)
	{
		std::cout<<"Entra un numero: ";
		std::cin>>vec[i];
	}
}

int calcularSuma(int vec[], int tam)
{
	int suma = 0;
	
	for(int i = 0; i < tam; i++)
	{
		suma = suma + vec[i];
	}
	
	return suma;
}
