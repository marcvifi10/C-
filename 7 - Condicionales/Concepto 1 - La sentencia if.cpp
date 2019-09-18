#include<iostream>

using namespace std;

int main()
{
	int numero, dato = 5;
	
	std::cout<<"Entra un numero cualquiera: "<<endl;
	std::cin>>numero;
	
	//operadores ==, !=, <, >
	if (numero!=dato)
	{
		std::cout<<"El numero no es 5";
	}
	
	else
	{
		std::cout<<"El numero es 5";
	}
	
	return 0;
}
