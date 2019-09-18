#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
	int n, x=0, y=1, z=1;
	
	std::cout<<"Entra el numero de elementos que quieres sumar: ";
	std::cin>>n;
	
	std::cout<<"1 ";
	for(int i=1;i<n;i++)
	{
		z = x + y;
		std::cout<<z<<" ";
		x = y;
		y = z;
	}
	
	getch();
	return 0;
}
