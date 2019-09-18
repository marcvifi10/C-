#include<iostream>
#include<conio.h>

using namespace std;

void tiempo(int,int&,int&,int&);

int main()
{
	int TotalSegundos, horas, minutos, segundos;
	
	std::cout<<"Entra un numero de segundos: ";
	std::cin>>TotalSegundos;
	
	tiempo(TotalSegundos,horas,minutos,segundos);
	
	std::cout<<"\nTiempo equivalente a la cantidad de segundos digitados: "<<endl;
	std::cout<<"Horas: "<<horas<<endl;
	std::cout<<"Minutos: "<<minutos<<endl;
	std::cout<<"Segundos: "<<segundos<<endl;
	
	getch();
	return 0;
}

void tiempo(int TotalSegundos, int& horas,int& minutos,int& segundos)
{
	horas = TotalSegundos / 3600;
	TotalSegundos = TotalSegundos % 3600;
	minutos = TotalSegundos / 60;
	segundos = TotalSegundos % 60;
}
