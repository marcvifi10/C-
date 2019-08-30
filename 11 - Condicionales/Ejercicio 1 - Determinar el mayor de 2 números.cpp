#include<iostream>

using namespace std;

int main()
{
	int n1, n2;
	
	std::cout<<"Entra un primer numero: ";
	std::cin>>n1;
	
	std::cout<<"Entra un segundo numero: ";
	std::cin>>n2;
	
	if (n1>n2)
	{
		std::cout<<"El primer numero es mayor que el segundo.";
		
	}
	
	else if (n1<n2)
	{
		std::cout<<"El segundo numero es mayor que el primero.";
		
	}
	
	else if (n1==n2)
	{
		std::cout<<"Los dos numeros son iguales";
	}
	
	else
	{
		std::cout<<"ERROR!!!";
	}
}
