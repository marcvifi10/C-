#include<iostream>

using namespace std;

int main()
{
	char letra;
	
	std::cout<<"Entra una letra: ";
	std::cin>>letra;
	
	switch (letra)
	{
		case 'a':
			std::cout<<"Es una vocal minúscula";
		break;
		
		case 'e':
			std::cout<<"Es una vocal minúscula";
		break;
		
		case 'i':
			std::cout<<"Es una vocal minúscula";
		break;
		
		case 'o':
			std::cout<<"Es una vocal minúscula";
		break;
		
		case 'u':
			std::cout<<"Es una vocal minúscula";
		break;
		
		default:
			std::cout<<"No es una vocal minuscula";
		break;
	}
	
	return 0;
}
