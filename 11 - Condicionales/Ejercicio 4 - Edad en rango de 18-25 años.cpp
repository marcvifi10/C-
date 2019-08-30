#include<iostream>

using namespace std;

int main()
{
	int edad;
	
	std::cout<<"Entra una edad cualquiera: ";
	std::cin>>edad;
	
	if ((edad>=18)&&(edad<=25))
	{
		std::cout<<"La edad esta dentro del rango 18-25";
	}
	
	else
	{
		std::cout<<"La edad no esta dentro del rango 18-25";
	}
	
	return 0;
}
