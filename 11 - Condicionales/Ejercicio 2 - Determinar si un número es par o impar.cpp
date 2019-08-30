#include<iostream>

using namespace std;

int main()
{
	int n;
	
	std::cout<<"Entra un numero: "<<endl;
	std::cin>>n;
	
	if (n % 2 == 0)
	{
		std::cout<<"El numero es par.";
	}
	
	else if (n % 2 != 0)
	{
		std::cout<<"El numero es impar";
	}
	
	return 0;
}
