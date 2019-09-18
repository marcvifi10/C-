#include<iostream>
#include<stdlib.h>

using namespace std;

class Punto
{
	private: //Atributos
		int x;
		int y;
	
	public: //Métodos
		Punto(); //Constructor
		void SetPunto(int,int);
		int GetPuntoX();
		int GetPuntoY();
};

Punto::Punto()
{
	
}

//Establecemos valores a los atributos
void Punto::SetPunto(int _x, int _y)
{
	x = _x;
	y = _y;
}

int Punto::GetPuntoX()
{
	return x;
}

int Punto::GetPuntoY()
{
	return y;
}

int main()
{
	Punto punto1;
	
	punto1.SetPunto(15,10);
	
	std::cout<<punto1.GetPuntoX()<<endl;
	std::cout<<punto1.GetPuntoY()<<endl;
	
	system("pause");
	return 0;
}
