#include<iostream>

using namespace std;

int main()
{
	float a, b, c, d, e, f, resultado=0;
	
	std::cout<<"Entra un numero cualquiera: "<<endl;
	std::cin>>a;
		
	std::cout<<"Entra otro numero cualquiera: "<<endl;
	std::cin>>b;
		
	std::cout<<"Entra otro numero cualquiera: "<<endl;
	std::cin>>c;
		
	std::cout<<"Entra otro numero cualquiera: "<<endl;
	std::cin>>d;
		
	std::cout<<"Entra otro numero cualquiera: "<<endl;
	std::cin>>e;
		
	std::cout<<"Entra otro numero cualquiera: "<<endl;
	std::cin>>f;
	
	resultado = (a+(b/c)) / (d+(e/f));
	
	std::cout.precision(2);
	std::cout<<"El resultado es: "<<resultado<<endl;
	
	return 0;
}
