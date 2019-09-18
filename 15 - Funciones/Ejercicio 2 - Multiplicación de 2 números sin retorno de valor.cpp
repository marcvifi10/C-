#include<iostream>
#include<conio.h>

using namespace std;

void PedirDatos();
void multiplicar(float x, float y);

float num1, num2;

int main()
{
	PedirDatos();
	multiplicar(num1,num2);
	
	getch();
	return 0;
}

void PedirDatos()
{
	std::cout<<"Entra un numero: ";
	std::cin>>num1;
	
	std::cout<<"Entra otro numero: ";
	std::cin>>num2;
}

void multiplicar(float x, float y)
{
	float multiplicacion = x * y;
	
	std::cout<<"La multiplicacion es: "<<multiplicacion<<endl;
}
