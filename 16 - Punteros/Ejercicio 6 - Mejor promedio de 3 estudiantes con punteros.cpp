#include<iostream>
#include<conio.h>

using namespace std;

struct Alumno
{
	char nombre[30];
	int edad;
	float promedio;
}alumno[3], *puntero_alumno = alumno;

void PedirDatos();
void CalcularMejorPromedio(Alumno *);

int main()
{
	PedirDatos();
	CalcularMejorPromedio(puntero_alumno);
	
	getch();
	return 0;
}

void PedirDatos()
{
	for(int i = 0; i < 3; i++)
	{
		fflush(stdin);
		std::cout<<"Entra el nombre del alumno: ";
		std::cin.getline((puntero_alumno+i)->nombre,30,'\n');
		
		std::cout<<"Entra la edad del alumno: ";
		std::cin>>(puntero_alumno+i)->edad;
		
		std::cout<<"Entra el promedio del alumno: ";
		std::cin>>(puntero_alumno+i)->promedio;
		
		std::cout<<"\n";
	}
}

void CalcularMejorPromedio(Alumno *puntero_alumno)
{
	float mayor = 0.0;
	int pos = 0;
	
	for(int i = 0; i < 3; i++)
	{
		if((puntero_alumno+i)->promedio > mayor) //puntero_alumno[i].promedio
		{
			mayor = (puntero_alumno)->promedio; //Comprobar el mayor promedio
			pos = i; //Guardar la posicion del mayor promedio
		}
	}
	
	//Imprimir los datos del alumno con mayor promedio
	std::cout<<"\nEl alumno con mejot promedio es: \n";
	std::cout<<"Nombre: "<<(puntero_alumno+pos)->nombre<<endl;
	std::cout<<"Edad: "<<(puntero_alumno+pos)->edad<<endl;
	std::cout<<"Promedio: "<<(puntero_alumno+pos)->promedio<<endl;
	std::cout<<"\n";
}

