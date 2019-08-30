#include<iostream>
#include<conio.h>

using namespace std;

struct Etapas
{
	int horas;
	int minutos;
	int segundos;
}etapa[100];

int main()
{
	int n_etapas, Horas_Totales=0, Minutos_Totales=0, Segundos_Totales=0;
	
	std::cout<<"Entra el numero de etapas: ";
	std::cin>>n_etapas;
	
	for(int i=0; i<n_etapas; i++)
	{
		std::cout<<"Horas: ";
		std::cin>>etapa[i].horas;
		
		std::cout<<"Minutos: ";
		std::cin>>etapa[i].minutos;
		
		std::cout<<"Segundos: ";
		std::cin>>etapa[i].segundos;
		
		Horas_Totales = Horas_Totales + etapa[i].horas;
		Minutos_Totales = Minutos_Totales + etapa[i].minutos;
		if(Minutos_Totales>60)
		{
			Minutos_Totales = Minutos_Totales - 60;
			Horas_Totales++;
		}
		Segundos_Totales = Segundos_Totales + etapa[i].segundos;
		if(Segundos_Totales>60)
		{
			Segundos_Totales = Segundos_Totales - 60;
			Minutos_Totales++;
		}
		
		std::cout<<"\n";
	}
	
	std::cout<<"\nTIEMPO TOTAL DE LAS ETAPAS\n";
	std::cout<<"Horas: "<<Horas_Totales<<endl;
	std::cout<<"Minutos: "<<Minutos_Totales<<endl;
	std::cout<<"Segundos: "<<Segundos_Totales<<endl;	
	
	getch();
	return 0;
}
