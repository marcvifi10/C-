#include<iostream>

using namespace std;

int main()
{
	float a, b, resultado=0;
	
	std::cout<<"Entra un numero cualquiera: "<<endl;
	std::cin>>a;
	
	std::cout<<"Entra otro numero cualquiera: "<<endl;
	std::cin>>b;
	
	resultado = (a/b) + 1;
	
	std::cout.precision(2);
	std::cout<<"El resultado es: "<<resultado<<endl;
	
	return 0;
}

