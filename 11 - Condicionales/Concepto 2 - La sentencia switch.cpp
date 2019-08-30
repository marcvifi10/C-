#include<iostream>

using namespace std;

int main()
{
	int numero;
	
	std::cout<<"Entra un numero cualquiera: "<<endl;
	std::cin>>numero;
	
	switch(numero)
	{
		case 1:
			std::cout<<"El numero es igual a 1";
		break;
		
		case 2:
			std::cout<<"El numero es igual a 2";
		break;
		
		case 3:
			std::cout<<"El numero es igual a 3";
		break;
		
		case 4:
			std::cout<<"El numero es igual a 4";
		break;
		
		case 5:
			std::cout<<"El numero es igual a 5";
		break;
		
		default:
			std::cout<<"El numero no esta en el rango 1-5";
		break;
	}
	
	return 0;
}

