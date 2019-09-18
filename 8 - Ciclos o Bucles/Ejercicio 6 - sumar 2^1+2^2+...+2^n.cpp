#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
	int n, suma=0, elevacion=0;
	
	std::cout<<"Entra el numero de elementos que quieras sumar: ";
	std::cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		elevacion = pow(2,i);
		suma = suma + elevacion;
	}
	
	std::cout<<"La suma total es "<<suma<<endl;
	
	getch();
	return 0;
}
