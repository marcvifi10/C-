//Determinar si una matriz es simétrica
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int numeros[100][100], filas, columnas;
	char band='F';
	
	std::cout<<"Entra el numero de filas: ";
	std::cin>>filas;
	
	std::cout<<"Entra el numero de columnas: ";
	std::cin>>columnas;
	
	for(int i=0; i<filas; i++)
	{
		for(int j=0; j<columnas; j++)
		{
			std::cout<<"Entra un numero ["<<i<<"]["<<j<<"]: ";
			std::cin>>numeros[i][j];
		}
	}
	
	if(filas==columnas)
	{
		for(int i=0; i<filas; i++)
		{
			for(int j=0; j<columnas; j++)
			{
				if(numeros[i][j] == numeros[j][i])
				{
					band = 'V';
				}
			}
		}
	}
	
	if(band == 'V')
	{
		std::cout<<"La matriz es simetrica!!!";
	}
	else
	{
		std::cout<<"La matriz NO es simetrica!!!";
	}
	
	getch();
	return 0;
}
