#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

int main()
{
	char cad[] = "123";
	char cad2[] = "123.456";
	int numero;
	float numero2;
	
	//Numeros Enteros
	numero = atoi(cad);
	
	std::cout<<numero<<endl;
	
	//Numeros Decimales
	numero2 = atof(cad2);
	
	std::cout<<numero2<<endl;
	
	getch();
	return 0;
}
