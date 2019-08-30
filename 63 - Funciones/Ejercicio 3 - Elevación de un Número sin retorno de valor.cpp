#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos();
void funpot(int x, int y);

int numero, exponente;

int main()
{
	pedirDatos();
	funpot(numero,exponente);
	
	getch();
	return 0;
}

void pedirDatos()
{
	std::cout<<"Entra un numero: ";
	std::cin>>numero;
	
	std::cout<<"Entra el exponente de elevacion: ";
	std::cin>>exponente;
}

void funpot(int x, int y)
{
	long resultado=1;
	
	for(int i = 1; i<=y; i++)
	{
		resultado = resultado * x;
	}
	
	std::cout<<"El resultado es: "<<resultado;
}
