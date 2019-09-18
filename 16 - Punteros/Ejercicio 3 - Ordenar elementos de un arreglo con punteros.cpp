#include<iostream>
#include<conio.h>
#include<stdlib.h> //new y delete

using namespace std;

void PedirDatos();
void OrdenarArray(int *,int);
void MostrarArray(int *,int);

int nElementos, *elemento;

int main()
{
	PedirDatos();
	OrdenarArray(elemento,nElementos);
	MostrarArray(elemento,nElementos);
	
	delete[] elemento ; //Liberar la memoria utilizada para el arreglo o array
	
	getch();
	return 0;
}

void PedirDatos()
{
	std::cout<<"Entra el numero de elementos del array: ";
	std::cin>>nElementos;
	
	elemento = new int[nElementos]; //Creando el arreglo
	
	for(int i = 0; i< nElementos; i++)
	{
		std::cout<<"Entra un numero ["<<i<<"]: ";
		std::cin>>*(elemento+i); //elemento[i]
	}
	
}

void OrdenarArray(int *elemento,int nElementos)
{
	int aux;
	
	for(int i = 0; i < nElementos; i++)
	{
		for(int j = 0; j < nElementos - 1; j++)
		{
			if(*(elemento+j) > *(elemento+j+1)) 
			{
				aux = *(elemento + j);
				*(elemento + j) = *(elemento+j+1);
				*(elemento + j + 1) = aux;
			}
		}
	}
}

void MostrarArray(int *elemento,int nElementos)
{
	std::cout<<"\n\nMostrando array ordenado: "<<endl;
	
	for(int i = 0; i < nElementos; i++)
	{
		std::cout<<*(elemento+i)<<" ";
	}
}
