#include<iostream>

using namespace std;

int main()
{
	float practica=0, teorica=0, participacion=0, final=0;
	
	std::cout<<"Entra la nota de practica: "<<endl;
	std::cin>>practica;
	
	std::cout<<"Entra la nota de teorica: "<<endl;
	std::cin>>teorica;
	
	std::cout<<"Entra la nota de participacion: "<<endl;
	std::cin>>participacion;
	
	practica = practica *0.30;
	teorica = teorica * 0.60;
	participacion = participacion * 0.10;
	
	final = practica + teorica + participacion;
	
	std::cout<<endl;
	std::cout<<"La nota final es: "<<final<<endl;
	
	return 0;
}
