#include<iostream>
#include<conio.h>

using namespace std;

void PedirDatos();
void ComprobarSimetria(int matriz[][100],int,int);

int matriz[100][100], nfilas, ncolumnas;

int main()
{
	PedirDatos();
	ComprobarSimetria(matriz,nfilas,ncolumnas);
	
	getch();
	return 0;
}

void PedirDatos()
{
	std::cout<<"Entra el numero de filas: ";
	std::cin>>nfilas;
	
	std::cout<<"Entra el numero de columnas: ";
	std::cin>>ncolumnas;
	
	for(int i=0; i<nfilas; i++)
	{
		for(int j=0; j<ncolumnas; j++)
		{
			std::cout<<"Entra un numero ["<<i<<"]["<<j<<"]: ";
			std::cin>>matriz[i][j];
		}
	}
}

void ComprobarSimetria(int matriz[][100],int nfilas, int ncolumnas)
{
	int cont=0; 
	
	if(ncolumnas == nfilas)
	{
		for(int i=0; i<nfilas; i++)
		{
			for(int j=0; j<ncolumnas; j++)
			{
				if(matriz[i][j] == matriz[j][i])
				{
					cont++;
				}
			}
		}
	}
	
	if(cont == nfilas*ncolumnas)
	{
		std::cout<<"La matriz es simetrica";
	}
	else
	{
		std::cout<<"La matriz NO es simetrica";
	}
}
