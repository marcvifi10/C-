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
		float salario;
	
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

class Universitario : public Estudiante
{
	private: //Atributos
		string carrera;
	
	public: //Métodos
		Universitario(string,int,float,string);
		void MostrarUniversitario();
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
Empleado::Empleado(string _nombre, int _edad, float _salario) : Persona(_nombre,_edad)
{
	salario = _salario;
}

void Empleado::MostrarEmpleado()
{
	MostrarPersona();
	std::cout<<"Salario: "<<salario<<endl;
}

//Constructor de la clase Estudiante(Clase Hija)
Estudiante::Estudiante(string _nombre, int _edad, float _nota_final) : Persona(_nombre,_edad)
{
	nota_final = _nota_final;	
}

void Estudiante::MostrarEstudiante()
{
	MostrarPersona();
	std::cout<<"Nota Final: "<<nota_final<<endl;
}

//Constructor de la classe Universitario(Clase Hija)
Universitario::Universitario(string _nombre, int _edad, float _nota_final, string _carrera) : Estudiante(_nombre,_edad,_nota_final)
{
	carrera = _carrera;
}

void Universitario::MostrarUniversitario()
{
	MostrarEstudiante();
	std::cout<<"Carrera: "<<carrera<<endl;
}

int main()
{
	Empleado empleado1("Marc",22,2222);
	std::cout<<"-Empleado-"<<endl;
	empleado1.MostrarEmpleado();
	std::cout<<"\n";
	
	Estudiante estudiante1("Marc",22,100.00);
	std::cout<<"-Estudiante-"<<endl;
	estudiante1.MostrarEstudiante();
	std::cout<<"\n";
	
	Universitario universitario1("Marc",22,15.6,"Informatica");
	std::cout<<"-Universitario-"<<endl;
	universitario1.MostrarUniversitario();
	std::cout<<"\n";
	
	system("pause");
	return 0;
}
