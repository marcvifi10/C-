#include<iostream>
#include<stdlib.h>
#include<fstream> //Libreria para almacednar los datos en un fichero

using namespace std;

void Escribir();
void Escribir2();

int main()
{
	Escribir();
	Escribir2();
	
	system("pause");
	return 0;
}

void Escribir()
{
	ofstream archivo; //tipo_de_dato nombre_de_la_variable
	
	archivo.open("c://c++/concepto1.txt",ios::out); //Abriendo el archivo en su ubicación i si no existe lo crea
	
	if(archivo.fail())
	{
		std::cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	archivo<<"Hola que tal22222"<<endl; //Copiamos el siguiente texto en el archivo "prueba.txt"
	archivo<<"Agregando más texto en el archivo"<<endl; //Añadimos una línia en el archivo
	
	archivo.close(); //Cerramos el archivo	
}

void Escribir2()
{
	ofstream archivo2;
	string NombreArchivo, frase;
	
	std::cout<<"Entra el nombre del archivo: ";
	getline(cin,NombreArchivo);
	
	archivo2.open(NombreArchivo.c_str(),ios::out); //Abriendo el archivo
	
	if(archivo2.fail())
	{
		std::cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	std::cout<<"\nEscribe el texto del archivo: ";
	getline(cin,frase); //Lo guardamos dentro de la variable
	
	archivo2<<frase; //Guardamos en el archivo la frase entrada
	
	archivo2.close(); //Cerramos el archivo	
}
