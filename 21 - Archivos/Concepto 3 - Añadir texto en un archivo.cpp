#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;

void Anadir();
void Anadir2();

int main()
{
	Anadir();
	Anadir2();
	
	system("pause");
	return 0;
}

void Anadir()
{
	ofstream archivo;
	
	archivo.open("c://c++/programacion.txt",ios::app); //Abrimos el archivo en modo añadir 

	if(archivo.fail())
	{
		std::cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	archivo<<"\nTexto añadido!!!";
	
	archivo.close(); //Cerramos el archivo
}

void Anadir2()
{
	ofstream archivo;
	string texto;
	
	archivo.open("c://c++/programacion.txt",ios::app); //Abrimos el archivo en modo añadir 

	if(archivo.fail())
	{
		std::cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	std::cout<<"Entra el texto que quieres anadir: ";
	getline(cin,texto);
	
	archivo<<"\n"<<texto<<endl;
	
	archivo.close(); //Cerramos el archivo
}

