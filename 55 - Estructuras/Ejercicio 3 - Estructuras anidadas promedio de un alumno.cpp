#include<iostream>
#include<conio.h>

using namespace std;

struct Promedio
{
	float nota1;
	float nota2;
	float nota3;	
};

struct Alumno
{
	char nombre[20];
	char sexo[10];
	int edad;
	struct Promedio prom; //Anidamos la estructura Promedio en la estructura Alumno
}alumno1;

int main()
{
	float promedio;
	
	std::cout<<"Entra tu nombre: ";
	std::cin.getline(alumno1.nombre,20,'\n');
	
	std::cout<<"Entra tu sexo: ";
	std::cin.getline(alumno1.sexo,10,'\n');
	
	std::cout<<"Entra tu edad: ";
	std::cin>>alumno1.edad;
	
	std::cout<<"\nNotas del Alumno:\n";
	std::cout<<"Nota1: ";
	std::cin>>alumno1.prom.nota1;
	std::cout<<"Nota2: ";
	std::cin>>alumno1.prom.nota2;
	std::cout<<"Nota3: ";
	std::cin>>alumno1.prom.nota3;
	
	promedio = (alumno1.prom.nota1 + alumno1.prom.nota2 + alumno1.prom.nota3) / 3;
	
	std::cout<<"\nDatos del Alumno\n";
	std::cout<<"Nombre: "<<alumno1.nombre<<endl;
	std::cout<<"Sexo: "<<alumno1.sexo<<endl;
	std::cout<<"Edad: "<<alumno1.edad<<endl;
	std::cout<<"Promedio: "<<promedio<<endl;
	
	getch();
	return 0;
}
