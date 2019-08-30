#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int numeros[10], *dir_numeros;
	
	for(int i = 0; i < 10; i++)
	{
		std::cout<<"Entra un numero ["<<i<<"]: ";
		std::cin>>numeros[i];
	}
	
	std::cout<<"\n";
	
	dir_numeros = numeros; //Posicion de memoria comienza numeros
	
	for(int i = 0; i < 10; i++)
	{
		if(*dir_numeros % 2 == 0)
		{
			std::cout<<"El numero "<<*dir_numeros<<" es par."<<endl;
			std::cout<<"Posicion de memoria: "<<dir_numeros<<endl<<"\n";
		}
		dir_numeros++;
	}
	
	getch();
	return 0;
}
