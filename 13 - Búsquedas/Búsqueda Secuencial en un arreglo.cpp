//Busqueda Secuencial

//a[5] = {3,5,2,1,50}; dato = 4;

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int a[] = {3,4,2,1,5};
	int i,dato;
	char band = 'F';
	
	dato = 5;
	
	//Busqueda Secuencial
	i = 0;
	while((band == 'F') && (i<5))
	{
		if(a[i] == dato)
		{
			band = 'V';
		}
		i++;
	}
	
	if(band == 'F')
	{
		std::cout<<"El numero a buscar no existe en el arreglo"<<endl;
	}
	else if(band == 'V')
	{
		std::cout<<"El numero ha sido encontrado en la posicion: "<<i-1<<endl;
	}
	
	
	getch();
	return 0;
}
