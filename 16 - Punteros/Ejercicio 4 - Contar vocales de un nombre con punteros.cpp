#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

void PedirDatos();
int ContandoVocales(char *);

char nombreUsuario[30];

int main()
{
	PedirDatos();
	std::cout<<"\nEl numero de vocales del nombre es: "<<ContandoVocales(nombreUsuario);
	
	getch();
	return 0;
}

void PedirDatos()
{
	std::cout<<"Entra tu nombre de usuario: ";
	std::cin.getline(nombreUsuario,30,'\n');
	
	strupr(nombreUsuario);
}

int ContandoVocales(char *nombre)
{
	int contador = 0;
	
	//*nombre = guarda la primera posición de nombre
	
	while(*nombre) //minetras nombre no sea nulo
	{
		switch(*nombre)
		{
			case 'A':
				contador++;
			break;
			
			case 'E':
				contador++;
			break;
			
			case 'I':
				contador++;
			break;
			
			case 'O':
				contador++;
			break;
			
			case 'U':
				contador++;
			break;
		}
		
		nombre++;
	}
	
	return contador;
}
