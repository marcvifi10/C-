#include<iostream>
#include<conio.h>

using namespace std;

int factorial(int);

int main()
{
	int x;
	
	std::cout<<"Entra un numero: ";
	std::cin>>x;
	
	std::cout<<"\nEl factorial del numero es: "<<factorial(x);
	
	getch();
	return 0;
}

int factorial(int n)
{
	if(n == 0)
	{
		n = 1;
	}
	
	else
	{
		n = n * factorial(n-1);
	}
	
	return n;
}
