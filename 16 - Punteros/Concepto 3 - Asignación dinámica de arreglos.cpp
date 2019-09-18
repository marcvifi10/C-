/*

new: Reserva el número de bytes solicitado por la declaración
delete: Libera un bloque de bytes reservado con anterioridad 

*/
#include<iostream>
#include<conio.h>
#include<stdlib.h> // Funciona new y delete

using namespace std;

void PedirNotas();
void MostrarNotas();

int numCalif, *calif;

int main()
{
	PedirNotas();
	MostrarNotas();
	
	delete[] calif; //Liberando el espacio en bytes utilizados anteriormente
	
	getch();
	return 0;
}

void PedirNotas()
{
	std::cout<<"Entra el numero de notas: ";
	std::cin>>numCalif;
	
	calif = new int[numCalif]; //Crear el array
	
	for(int i = 0; i < numCalif; i++)
	{
		std::cout<<"Entra una nota: ";
		std::cin>>calif[i];
	}
}

void MostrarNotas()
{
	std::cout<<"\n\nMostrando notas del Usuario:\n";
	
	for(int i = 0; i < numCalif; i++)
	{
		std::cout<<"-Nota "<<i+1<<": "<<calif[i]<<endl;
	}
	
}
