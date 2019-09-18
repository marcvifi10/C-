#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int numero, *dir_numero;
	
	std::cout<<"Entra un numero: ";
	std::cin>>numero;
	
	dir_numero = &numero; //Guarduando la posición de memória
	
	if(*dir_numero % 2 == 0)
	{
		std::cout<<"\nEl numero "<<*dir_numero<<" es par!!!"<<endl;
		std::cout<<"Posicion de memoria: "<<dir_numero<<endl;
	}
	else
	{
		std::cout<<"\nEl numero "<<*dir_numero<<" es impar!!!"<<endl;
		std::cout<<"Posicion de memoria: "<<dir_numero<<endl;	
	}	
	
	getch();
	return 0;
}
