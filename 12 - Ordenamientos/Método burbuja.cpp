//Método burbuja

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int numeros[] = {4,5,1,3,2};
	int i,j,aux;
	
	//Algoritmo del metodo burbuja
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(numeros[j] > numeros[j+1])
			{
				aux = numeros[j];
				numeros[j] = numeros[j+1];
				numeros[j+1] = aux;
			}
		}
	}
	
	//Imprimir en pantalla
	std::cout<<"Orden Ascendente: ";
	
	for(i=0;i<5;i++)
	{
		std::cout<<numeros[i]<<" ";
	}
	
	std::cout<<"\nOrden Descendente: ";
	
	for(i=4;i>=0;i--)
	{
		std::cout<<numeros[i]<<" ";
	}
	
	getch();
	return 0;
}
