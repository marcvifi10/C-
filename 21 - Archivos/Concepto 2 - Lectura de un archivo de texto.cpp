#include<iostream>
#include<stdlib.h>
#include<string.h>;
#include<fstream>

using namespace std;

void Lectura();

int main()
{
	Lectura();
	
	system("pause");
	return 0;
}

void Lectura()
{
	ifstream archivo;
	string texto;
	
	archivo.open("c://c++/programacion.txt",ios::in); //Abrimos el archivo en modo lectura

	if(archivo.fail())
	{
		std::cout<<"No se pudo abrir el archivo!!!";
		exit(1);
	}
	
	while(!archivo.eof()) //mientras no sea el final del archivo
	{
		getline(archivo,texto);
		std::cout<<texto<<endl;
	}
	
	archivo.close(); //Cerramos el archivo
}
