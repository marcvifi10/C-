#include<iostream>
#include<stdlib.h>

using namespace std;

class Persona
{
	private: //Atributos
		string nombre;
		int edad;
	
	public: //Métodos
		Persona(string,int); //Constructor
		void MostrarPersona();
};

//Heredamos todo de la clase Persona
class Alumno : public Persona
{
	private: //Atributos
		string CodigoAlumno;
		float NotaFinal;
	
	public: //Métodos
		//Constructor de la clase Alumno
		Alumno(string,int,string,float); //Primero van los atributos de la clase padre y luego los de la clase hija
		void MostrarAlumno();
};

//Constructor de la clase Persona(Clase Padre)
Persona::Persona(string _nombre, int _edad)
{
	nombre = _nombre;
	edad = _edad;
}

//Constructor de la clase Alumno(Clase Hija)
Alumno::Alumno(string _nombre, int _edad, string _CodigoAlumno, float _NotaFinal) : Persona(_nombre,_edad)
{
	CodigoAlumno = _CodigoAlumno;
	NotaFinal = _NotaFinal;
}

void Persona::MostrarPersona()
{
	std::cout<<"Nombre: "<<nombre<<endl;
	std::cout<<"Edad: "<<edad<<endl;
}

void Alumno::MostrarAlumno()
{
	MostrarPersona();
	std::cout<<"Codigo del Alumno: "<<CodigoAlumno<<endl;
	std::cout<<"Nota Final: "<<NotaFinal<<endl;
}

int main()
{
	Alumno alumno1("Marc",22,"12121212",10.00);
	
	alumno1.MostrarAlumno();
	
	system("pause");
	return 0;
}
