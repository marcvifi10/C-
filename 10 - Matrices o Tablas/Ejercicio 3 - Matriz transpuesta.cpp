//Matriz traspuesta
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int numeros[3][3];
	
	//Rellenar la matriz
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			std::cout<<"Entra un numero ["<<i<<"]["<<j<<"]: ";
			std::cin>>numeros[i][j];
		}
	}
	
	std::cout<<"Esta es la matriz original: \n";
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			std::cout<<numeros[i][j];
		}
		std::cout<<"\n";
	}
	
	std::cout<<"\nMatriz Transpuesta \n";
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			std::cout<<numeros[j][i];
		}
		std::cout<<"\n";
	}
	
	getch();
	return 0;
}
