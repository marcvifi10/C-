#include<iostream>

using namespace std;

int main()
{
	int x,y,aux;
	
	std::cout<<"Entra un numero para x: "<<endl;
	std::cin>>x;
	
	std::cout<<"Entra un numero para y: "<<endl;
	std::cin>>y;
	
	aux = x;
	
	x = y;
	
	y = aux;
	
	std::cout<<"El nuevo valor de x es: "<<x<<endl;
	std::cout<<"El nuevo valor de y es: "<<y<<endl;
	
	return 0;	
}
