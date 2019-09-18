#include<iostream>
#include<conio.h>

using namespace std;

void PedirDatos();
void CambiarSigno(int vec[],int);
void MostrarVector(int vec[],int);

int vec[100], tam;

int main()
{
	PedirDatos();
	CambiarSigno(vec,tam);
	MostrarVector(vec,tam);
	
	getch();
	return 0;
}

void PedirDatos()
{
	std::cout<<"Entra el tamano del vector: ";
	std::cin>>tam;
	
	for(int i = 0; i < tam; i++)
	{
		std::cout<<"Entra un numero: ";
		std::cin>>vec[i];
	}
}

void CambiarSigno(int vec[], int tam)
{
	for(int i = 0; i < tam; i++)
	{
		vec[i] = vec[i] * -1;
	}
}

void MostrarVector(int vec[], int tam)
{
	std::cout<<"\nMostrando los elementos del vector con el signo cambiado: "<<endl;
	for(int i = 0; i < tam; i++)
	{
		std::cout<<vec[i]<<" ";
	}
}

