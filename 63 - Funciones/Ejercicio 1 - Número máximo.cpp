//Ejemplo encontrar el mayor de 2 numeros

#include<iostream>
#include<conio.h>

using namespace std;

int encontrarMax(int x, int y); //Prototipo de funcion

int main()
{
	int n1,n2;
	int mayor;
	
	std::cout<<"Entra 2 numeros: ";	
	std::cin>>n1>>n2;
	
	mayor = encontrarMax(n1,n2);
	
	std::cout<<"El mayor de los 2 numeros es: "<<mayor<<endl;
	
	getch();
	return 0;
}

int encontrarMax(int x, int y) //Definicion sw Funcion
{
	int numMax;
	
	if(x>y)
	{
		numMax = x;
	}
	else
	{
		numMax = y;
	}
	
	return numMax;
}
