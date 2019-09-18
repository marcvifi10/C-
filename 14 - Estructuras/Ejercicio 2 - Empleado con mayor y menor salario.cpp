#include<iostream>
#include<conio.h>

using namespace std;

struct Empleado
{
	char nombre[20];
	float salario;
}emp[100];

int main()
{
	int n_empleados, posMayor=0, posMenor=0;
	float mayor=0, menor=999999999;
	
	std::cout<<"Entra el numero de empleados: ";
	std::cin>>n_empleados;
	
	for(int i=0;i<n_empleados;i++)
	{
		fflush(stdin);
		std::cout<<"EMPLEADO "<<i+1<<":"<<endl;
		std::cout<<"Entra su nombre: ";	
		std::cin.getline(emp[i].nombre,20,'\n');
		std::cout<<"Entra su salario: ";
		std::cin>>emp[i].salario;
		
		//Empleado de mayor salario
		if(emp[i].salario > mayor)
		{
			mayor = emp[i].salario;
			posMayor = i;
		}
		
		//Empleado de menor salario
		if(emp[i].salario < menor)
		{
			menor = emp[i].salario;
			posMenor = i;
		}
		
		std::cout<<"\n";
	}
	
	std::cout<<"\nDatos del empleado con mayor salario:\n";
	std::cout<<"Nombre: "<<emp[posMayor].nombre<<endl;
	std::cout<<"Salario: "<<emp[posMayor].salario<<endl;
	
	std::cout<<"\nDatos del empleado con menor salario:\n";
	std::cout<<"Nombre: "<<emp[posMenor].nombre<<endl;
	std::cout<<"Salario: "<<emp[posMenor].salario<<endl;
	
	
	getch();
	return 0;
}
