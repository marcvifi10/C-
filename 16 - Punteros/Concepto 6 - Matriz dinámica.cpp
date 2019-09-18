#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void PedirDatos();
void MostrarMatriz(int **,int,int);

int **puntero_matriz, nfilas, ncolumnas;

int main()
{
	PedirDatos();
	MostrarMatriz(puntero_matriz,nfilas,ncolumnas);
	
	//Liberar la memoria que hemos utilizado en la matriz
	for(int i = 0; i < nfilas; i++)
	{
		delete[] puntero_matriz[i];
	}
	
	delete[] puntero_matriz;
	
	getch();
	return 0;
}

void PedirDatos()
{
	std::cout<<"Entra el numero de filas: ";
	std::cin>>nfilas;
	
	std::cout<<"\nEntra el numero de columnas: ";
	std::cin>>ncolumnas;
	
	//Resevar memoria para la matriz dinamica
	puntero_matriz = new int*[nfilas]; //Reservando memoria para las filas
	
	for(int i = 0; i < nfilas; i++)
	{
		puntero_matriz[i] = new int[ncolumnas]; //Reservando memoria para las columnas
	}
	
	std::cout<<"\nEntrando elementos de la matriz: \n";
	
	for(int i = 0; i < nfilas; i++)
	{
		for(int j = 0; j < ncolumnas; j++)
		{
			std::cout<<"Entra un numero ["<<i<<"]["<<j<<"]: ";
			std::cin>>*(*(puntero_matriz+i)+j);
		}
	}
	
}

void MostrarMatriz(int **puntero_matriz, int nfilas, int ncolumnas)
{
	std::cout<<"\n\nImprimendo matriz:\n";
	
	for(int i = 0; i < nfilas; i++)
	{
		for(int j = 0; j < ncolumnas; j++)
		{
			std::cout<<*(*(puntero_matriz+i)+j)<<" ";
		}
		std::cout<<"\n";
	}
}
