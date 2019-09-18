#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
	char palabra1[] = "Hola";
	char palabra2[] = "bola";
	
	//Comparar si las dos cadenas son iguales
	if(strcmp(palabra1,palabra2)==0)
	{
		std::cout<<"CADENAS IGUALES";
	}
	
	//Comparar si las dos cadenas son diferentes
	if(strcmp(palabra1,palabra2)!=0)
	{
		std::cout<<"CADENAS DIFERENTES";
	}
	
	getch();
	return 0;
}
