//Paso de parametros tipo matriz

//Elevar al cuadrado todos los elementos de una matriz

#include<iostream>
#include<conio.h>

using namespace std;

void MostrarMatriz(int matriz[][3],int,int); //Es obligatorio poner el numero de columnas
void CalcularCuadrado(int matriz[][3],int,int);
void MostrarMatrizElevada(int matriz[][3],int,int);

int main()
{
	const int nfilas = 2;
	const int ncolumnas = 3;
	int matriz[nfilas][ncolumnas] = {{1,2,3},{4,5,6}};
	
	MostrarMatriz(matriz,nfilas,ncolumnas);
	CalcularCuadrado(matriz,nfilas,ncolumnas);
	MostrarMatrizElevada(matriz,nfilas,ncolumnas);
	
	getch();
	return 0;
}

void MostrarMatriz(int matriz[][3],int nfilas, int ncolumnas)
{
	std::cout<<"Mostrando matriz original: "<<endl;
	for(int i = 0; i<nfilas;i++)
	{
		for(int j=0; j<ncolumnas;j++)
		{
			std::cout<<matriz[i][j]<<" ";
		}
		std::cout<<"\n";
	}
}

void CalcularCuadrado(int matriz[][3],int nfilas, int ncolumnas)
{
	for(int i = 0; i<nfilas;i++)
	{
		for(int j=0; j<ncolumnas;j++)
		{
			matriz[i][j] = matriz[i][j] * matriz[i][j];
		}
		std::cout<<"\n";
	}
}

void MostrarMatrizElevada(int matriz[][3],int nfilas, int ncolumnas)
{
	std::cout<<"Mostrando matriz elevada: "<<endl;
	for(int i = 0; i<nfilas;i++)
	{
		for(int j=0; j<ncolumnas;j++)
		{
			std::cout<<matriz[i][j]<<" ";
		}
		std::cout<<"\n";
	}
}
