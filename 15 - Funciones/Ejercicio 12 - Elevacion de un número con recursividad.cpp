#include<iostream>
#include<conio.h>

using namespace std;

int potencia(int,int);

int main()
{
	int base, exponente;
	
	std::cout<<"Entra la base: ";
	std::cin>>base;
	
	std::cout<<"\nEntra el exponente: ";
	std::cin>>exponente;
	
	std::cout<<"\nEl resultado es: "<<potencia(base,exponente);
	
	getch();
	return 0;
}

int potencia(int x, int y)
{
	int pot;
	
	if(y==1)
	{
		pot = x;
	}
	else
	{
		pot = x * potencia(x,y-1);
	}
}
