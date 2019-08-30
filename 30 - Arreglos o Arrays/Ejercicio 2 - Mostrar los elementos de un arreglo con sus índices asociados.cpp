#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int numeros[100],n;
	
	std::cout<<"Entra el numero de elementos que va a tener el array: ";
	std::cin>>n;
	
	for(int i=0; i<n; i++)
	{
		std::cout<<"Entra un numero: ";
		std::cin>>numeros[i];//Guardando todos los elementos del vector		
	}
	
	//Ahora. vamos a mostrar los elementos con sus indices asociados
	
	for(int i = 0; i<n; i++)
	{
		std::cout<<i<<" -> "<<numeros[i]<<endl;
	}
	
	getch();
	return 0;
}
