#include<iostream>
#include<stdlib.h>

using namespace std;

class Persona
{
	private:
		string nombre;
		int edad;
		
	public:
		Persona(string,int);
		virtual void Mostrar();
};

class Alumno : public Persona
{
	private:
		float nota_final;
		
	public:
		Alumno(string,int,float);
		void Mostrar();
};

class Profesor : public Persona
{
	private:
		string materia;
	
	public:
		Profesor(string,int,string);
		void Mostrar();
};

Persona::Persona(string _nombre, int _edad)
{
	nombre = _nombre;
	edad = _edad;
}

void Persona::Mostrar()
{
	std::cout<<"Nombre: "<<nombre<<endl;
	std::cout<<"Edad: "<<edad<<endl;
}

Alumno::Alumno(string _nombre, int _edad, float _nota_final) : Persona(_nombre,_edad)
{
	nota_final = _nota_final;
}

void Alumno::Mostrar()
{
	Persona::Mostrar();
	std::cout<<"Nota Final: "<<nota_final<<endl;
}

Profesor::Profesor(string _nombre, int _edad, string _materia) : Persona(_nombre,_edad)
{
	materia = _materia;
}

void Profesor::Mostrar()
{
	Persona::Mostrar();
	std::cout<<"Materia: "<<materia<<endl;
}

int main()
{
	Persona *vector[3];
	
	vector[0] = new Alumno("Marc",22,10);
	vector[1] = new Alumno("Maria",20,9);
	vector[2] = new Profesor("Jose",66,"Algoritmos");
	
	vector[0]->Mostrar();
	std::cout<<"\n";
	vector[1]->Mostrar();
	std::cout<<"\n";
	vector[2]->Mostrar();
	
	system("pause");
	return 0;
}
