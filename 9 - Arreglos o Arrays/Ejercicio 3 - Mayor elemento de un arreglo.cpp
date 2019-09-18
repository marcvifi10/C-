#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int numeros[100], n, mayor=0;
	
	std::cout<<"Entra el numero de elementos que tendra el array: ";
	std::cin>>n;
	
	for(int i = 0; i<n; i++)
	{
		std::cout<<i+1<<". Digite un numero: ";
		std::cin>>numeros[i];
		
		if (numeros[i] > mayor)
		{
			mayor = numeros[i];
		}
	}
	
	std::cout<<"El numero más grande del vector es: "<<mayor<<endl;
		
	
	getch();
	return 0;
}
