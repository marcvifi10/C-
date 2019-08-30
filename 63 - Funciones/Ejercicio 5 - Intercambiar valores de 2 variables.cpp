#include<iostream>
#include<conio.h>

using namespace std;

void intercambiar(int&, int&);

int main()
{
	int num1=10, num2=15;
	
	std::cout<<"El valor de num1 es: "<<num1<<endl;
	std::cout<<"El valor de num2 es: "<<num2<<endl;
	
	intercambiar(num1,num2);
	
	std::cout<<"\nEl nuevo valor de num1 es: "<<num1<<endl;
	std::cout<<"El nuevo valor de num2 es: "<<num2<<endl;
	
	getch();
	return 0;
}

void intercambiar(int& num1, int& num2)
{
	int aux;
	
	aux = num1;
	num1 = num2;
	num2 = aux;
}
