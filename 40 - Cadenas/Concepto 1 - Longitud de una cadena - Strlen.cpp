#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
	char palabra[] = "hola";
	int longitud = 0;
	
	longitud = strlen(palabra);
	
	std::cout<<"El numero de caracteres de la cadena es: "<<longitud<<endl;
	
	
	getch();
	return 0;
}
