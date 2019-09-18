#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int n, factorial=1;
	
	std::cout<<"Entra el numero de elementos que quieres multiplicar: ";
	std::cin>>n;
	
	for(int i=1; i<=n; i++)
	{
		factorial = factorial * i;
	}
	
	std::cout<<"El factorial es: "<<factorial<<endl;

	getch();
	return 0;
}
