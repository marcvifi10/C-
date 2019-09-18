#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int numero, suma=0;
	
	do
	{
		std::cout<<"Entra un numero: ";
		std::cin>>numero;
		
		if (numero>0)
		{
			suma = suma + numero;
		}
	}
	while(((numero<20) || (numero>30)) && (numero!=0));
	
	std::cout<<"La suma total es: "<<suma<<endl;
	getch();
	
	return 0;
}
