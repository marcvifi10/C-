//Rellenando una matriz

#include<iostream>;
#include<conio.h>;

using namespace std;

int main()
{
	int numeros[100][100], filas, columnas;
	
	std::cout<<"Entra el numero de filas que quieres que tenga la matriz: ";
	std::cin>>filas;
	
	std::cout<<"Entra el numero de columnas que quieres que tenga la matriz: ";
	std::cin>>columnas;
	
	//Almacenando elemntos en la matriz
	for(int i=0; i<filas; i++)
	{
		for(int j=0; j<columnas; j++)
		{
			std::cout<<"Entra un numero ["<<i<<"]["<<j<<"]: ";
			std::cin>>numeros[i][j];
		}
	}
	
	//Mostrando la matriz
	for(int i=0; i<filas; i++)
	{
		for(int j=0; j<columnas; j++)
		{
			std::cout<<numeros[i][j];
		}
		//Hacemos un salto de linea
		std::cout<<"\n";
	}
	
	getch();
	return 0;
}
