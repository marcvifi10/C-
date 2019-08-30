#include<iostream>
#include<stdlib.h>

using namespace std;

class Fecha
{
	private: //Atributos
		int dia;
		int mes;
		int ano;
		
	public: //Métodos
		Fecha(int,int,int); //Constructor 1
		Fecha(long); //Constructor 2
		void MostrarFecha();
};

//Constructor 1
Fecha::Fecha(int _dia, int _mes, int _ano)
{
	ano = _ano;
	mes = _mes;
	dia = _dia;
}

//Constructor 2
Fecha::Fecha(long fecha)
{
	ano = int(fecha / 10000); //Extraer el año
	mes = int((fecha - ano * 10000) / 100); //Extraer el mes
	dia = int(fecha - ano * 10000 - mes * 100); //Extrarer el dia
}

void Fecha::MostrarFecha()
{
	std::cout<<"La fecha es: "<<dia<<"/"<<mes<<"/"<<ano<<endl;
}

int main()
{
	Fecha hoy(20,12,2018);
	Fecha ayer(20181219);
	
	hoy.MostrarFecha();
	ayer.MostrarFecha();
	
	system("pause");
	return 0;
}
