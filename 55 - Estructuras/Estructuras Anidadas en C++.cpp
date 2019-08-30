//Estructuras anidadas

#include<iostream>
#include<conio.h>

struct info_direccion
{
	char direccion[30];
	char ciudad[20];
	char provincia[20];
};

struct empleado
{
	char nombre[20];
	struct info_direccion dir_empleado;
	double salario;
}empleados[2];

int main()
{
	for(int i=0; i<2; i++)
	{
		fflush(stdin); //Vaciar el bluffer y permitir digitar los valores
		std::cout<<"Entra tu nombre: ";
		std::cin.getline(empleados[i].nombre,20,'\n');
		
		std::cout<<"Entra tu direccion: ";
		std::cin.getline(empleados[i].dir_empleado.direccion,30,'\n');
	
		std::cout<<"Ciudad: ";
		std::cin.getline(empleados[i].dir_empleado.ciudad,20,'\n');
	
		std::cout<<"Provincia: ";
		std::cin.getline(empleados[i].dir_empleado.provincia,20,'\n');
	
		std::cout<<"Salario: ";
		std::cin>>empleados[i].salario;
		
		std::cout<<"\n";
	}
	
	//Imprimiendo los datos
	for(int i=0;i<2;i++)
	{
		std::cout<<"EMPLEADO "<<i+1;
		std::cout<<"\n";
		std::cout<<"Nombre: "<<empleados[i].nombre;
		std::cout<<"\n";
		std::cout<<"Direccion: "<<empleados[i].dir_empleado.direccion;
		std::cout<<"\n";
		std::cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad;
		std::cout<<"\n";
		std::cout<<"Provincia: "<<empleados[i].dir_empleado.provincia;	
		std::cout<<"\n";
		std::cout<<"Salario: "<<empleados[i].salario;
		std::cout<<"\n";
		std::cout<<"\n";
	}
	
	getch();
	return 0;
}
