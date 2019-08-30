#include<iostream>
#include<stdlib.h>

using namespace std;

class Rectangulo
{
	private: //Atributos
		float largo;
		float ancho;
		
	public: //Métodos
		Rectangulo(float,float); //Constructor
		void Perimetro();
		void Area();
};

Rectangulo::Rectangulo(float _largo, float _ancho)
{
	largo = _largo;
	ancho = _ancho;
}

void Rectangulo::Perimetro()
{
	float perimetro;
	
	perimetro = (2 * largo) + (2 * ancho);
	
	std::cout<<"El perimetro es: "<<perimetro<<"."<<endl;
}

void Rectangulo::Area()
{
	float area;
	
	area = largo * ancho;
	
	std::cout<<"El area es: "<<area<<"."<<endl;
}

int main()
{
	float largo;
	float ancho;
	
	std::cout<<"Entra el largo del rectangulo: ";
	std::cin>>largo;
	
	std::cout<<"Entra el ancho del rectangulo: ";
	std::cin>>ancho;
	
	Rectangulo r1(largo,ancho);
	
	std::cout<<"\n";
	
	r1.Perimetro();
	r1.Area();
	
	system("pause");
	return 0;
}
