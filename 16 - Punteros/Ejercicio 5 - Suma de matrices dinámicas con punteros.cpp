#include<iostream>
#include<conio.h>
#include<stdlib.h> //new y delete

using namespace std;

void PedirDatos();
void SumarMatrices(int **,int **,int,int);
void MostrarMatriz(int **,int,int);

int **puntero_matriz1, **puntero_matriz2, num_filas, num_columnas;

int main()
{
	PedirDatos();
	SumarMatrices(puntero_matriz1,puntero_matriz2,num_filas,num_columnas);
	MostrarMatriz(puntero_matriz1,num_filas,num_columnas);
	
	//liberar la memoria utilizada en matriz2
	for(int i = 0; i < num_filas; i++)
	{
		delete[] puntero_matriz2[i];
	}
	
	delete[] puntero_matriz2;
	
	//liberar la memoria utilizada en matriz1
	for(int i = 0; i < num_filas; i++)
	{
		delete[] puntero_matriz1[i];
	}
	
	delete[] puntero_matriz1;
	
	getch();
	return 0;
}

void PedirDatos()
{
	std::cout<<"Entra el numero de filas: ";
	std::cin>>num_filas;
	
	std::cout<<"Entra el numero de columnas: ";
	std::cin>>num_columnas;
	
	//Reservando memoria para la primera matriz
	puntero_matriz1 = new int*[num_filas]; //Reservar memoria pra las filas de la matriz
	for(int i = 0; i < num_filas; i++)
	{
		puntero_matriz1[i] = new int[num_columnas]; //Reservar memoria para las columnas de la matriz
	}
	
	std::cout<<"\nEntra los numero de la primera matriz: \n";
	for(int i = 0; i < num_filas; i++)
	{
		for(int j = 0; j< num_columnas; j++)
		{
			std::cout<<"Entra un numero ["<<i<<"]["<<j<<"]: ";
			std::cin>>*(*(puntero_matriz1+i)+j); //puntero_matriz1[i][j]
		}
	}
	
	//Reservando memoria para la segunda matriz
	puntero_matriz2 = new int*[num_filas]; //Reservar memoria pra las filas de la matriz
	for(int i = 0; i < num_filas; i++)
	{
		puntero_matriz2[i] = new int[num_columnas]; //Reservar memoria para las columnas de la matriz
	}
	
	std::cout<<"\nEntra los numero de la segunda matriz: \n";
	for(int i = 0; i < num_filas; i++)
	{
		for(int j = 0; j< num_columnas; j++)
		{
			std::cout<<"Entra un numero ["<<i<<"]["<<j<<"]: ";
			std::cin>>*(*(puntero_matriz2+i)+j); //puntero_matriz2[i][j]
		}
	}
}

void SumarMatrices(int **puntero_matriz1, int **puntero_matriz2, int num_filas, int num_columnas)
{
	for(int i = 0; i < num_filas; i++)
	{
		for(int j = 0; j < num_columnas; j++)
		{
			*(*(puntero_matriz1+i)+j) = *(*(puntero_matriz1+i)+j) + *(*(puntero_matriz2+i)+j);
		}
	}
}

void MostrarMatriz(int **puntero_matriz1, int num_filas, int num_columnas)
{
	std::cout<<"\nLa suma de las dos matrices es: "<<endl;
	
	for(int i = 0; i < num_filas; i++)
	{
		for(int j = 0; j < num_columnas; j++)
		{
			std::cout<<*(*(puntero_matriz1+i)+j)<<" ";
		}
		std::cout<<"\n";
	}
}
