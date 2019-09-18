//Ordenamiento por Selección

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int numeros[] = {4,2,3,1,5};
	int i, j, aux, min;
		
	//Algoritmo del Ordenamiento por Selección
	for(i=0;i<5;i++)
	{
		min = i;
		
		for(j=i+1;j<5;j++)
		{
			if(numeros[j] < numeros[min])
			{
				min = j;
			}
		}
		aux = numeros[i];
		numeros[i] = numeros[min];
		numeros[min] = aux;
	}
	
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
