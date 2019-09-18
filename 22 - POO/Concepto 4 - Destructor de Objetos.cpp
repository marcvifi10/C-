#include<iostream>
#include<stdlib.h>

using namespace std;

class Perro
{
	private:
		string nombre;
		string raza;
		
	public:
		Perro(string,string); //Constructor
		~Perro(); //Destructor
		void MostrarDatos();
		void Jugar();
};

//Constructor
Perro::Perro(string _nombre, string _raza)
{
	nombre = _nombre;
	raza = _raza;
}

//Destructor
Perro::~Perro(){ //No hace falta poner nada dentro
}

void Perro::MostrarDatos()
{
	std::cout<<"Nombre: "<<nombre<<endl;
	std::cout<<"Raza: "<<raza<<endl;
}

void Perro::Jugar()
{
	std::cout<<"El perro "<<nombre<<" esta jugando"<<endl;
}

int main()
{
	Perro perro1("Ayka","Pastor Aleman");
	
	perro1.MostrarDatos();
	perro1.Jugar();
	perro1.~Perro(); //Destruyendo el objeto
	
	std::cout<<"\n";
	
	system("pause");
	return 0;
}
