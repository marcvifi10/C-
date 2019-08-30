#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int n, suma=0;
	
	std::cout<<"Entra el numero de elementos: ";
	std::cin>>n;
	
	for(int i = 1; i<=n; i++)
	{
		suma = suma + i;
	}
	
	std::cout<<"La suma es: "<<suma<<endl;
	
	getch();
	return 0;
}
