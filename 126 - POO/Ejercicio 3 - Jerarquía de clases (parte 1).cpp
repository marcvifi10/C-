#include<iostream>
#include<stdlib.h>

using namespace std;

class Persona
{
	private: //Atributos
		string nombre;
		int edad;
		
	public: //Métodos
		Persona(string,int);	
		void MostrarPersona();	
};

class Empleado : public Persona
{
	private: //Atributos
		float sueldo;
	
	public: //Métodos
		Empleado(string,int,float);
		void MostrarEmpleado();		
};

class Estudiante : public Persona
{
	private: //Atributos
		float nota_final;
	
	public: //Métodos
		Estudiante(string,int,float);
		void MostrarEstudiante();		
};

class Universitario
{
	private: //Atributos
		
	
	public: //Métodos
				
};

//Constructor de la clase Persona(Clase Padre)
Persona::Persona(string _nombre, int _edad)
{
	nombre = _nombre;
	edad = _edad;
}

void Persona::MostrarPersona()
{
	std::cout<<"Nombre: "<<nombre<<endl;
	std::cout<<"Edad: "<<edad<<endl;
}

//Constructor de la clase Empleado(Clase Hija)
Empleado::Empleado(string _nombre, int _edad, float _sueldo) : Persona(_nombre, _edad)
{
	_sueldo = sueldo;
}

void Empleado::MostrarEmpleado()
{
	MostrarPersona();
	std::cout<<"Sueldo: "<<sueldo<<endl;
}

//Constructor de la clase Estudiante(Clase Hija)
Estudiante::Estudiante(string _nombre, int _edad, float _nota_final) : Persona(_nombre, _edad)
{
	_nota_final = nota_final;	
}

void Estudiante::MostrarEstudiante()
{
	MostrarPersona();
	std::cout<<"Nota Final: "<<nota_final<<endl;
}

int main()
{
	
	
	system("pause");
	return 0;
}
