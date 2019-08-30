#include<iostream>
#include<stdlib.h>

using namespace std;

class Tiempo
{
	private:
		int horas;
		int minutos;
		int segundos;
	
	public:	
		Tiempo(int,int,int); //Constructor 1
		Tiempo(int); //Constructor 2
		void MostrarTiempo();
};

//Constructor 1
Tiempo::Tiempo(int _horas, int _minutos, int _segundos)
{
	horas = _horas;
	minutos = _minutos;
	segundos = _segundos;
}

//Constructor 2
Tiempo::Tiempo(int TiempoSegundos)
{
	horas = TiempoSegundos / 3600; //Extraer las horas
	TiempoSegundos = TiempoSegundos % 3600; 
	minutos = TiempoSegundos / 60; //Extraer los minutos
	segundos = TiempoSegundos % 60; //Extraer los segundos
}

void Tiempo::MostrarTiempo()
{
	std::cout<<"La hora es: "<<horas<<":"<<minutos<<":"<<segundos<<endl;
}

int main()
{
	Tiempo hora_actual(16,23,30);
	Tiempo hace_una_hora(55410);
	
	hora_actual.MostrarTiempo();
	hace_una_hora.MostrarTiempo();
	
	system("pause");
	return 0;
}
