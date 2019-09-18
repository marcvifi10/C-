//Cadenas de Carcateres

#include<iostream>
#include<conio.h>
//Libreria etandard de cadenas de caracteres
#include<string.h>

using namespace std;

int main()
{
	char palabra[] = "Marc";
	char palabra2[] = {'M','a','r','c'};
	char nombre[30];
	
	std::cout<<palabra<<endl;
	std::cout<<palabra2<<endl;
	
	std::cout<<"Entra tu nombre: ";
	//Para guardar las cadenas utilizamos el cin.getline(variable,num_elementos,epacio_de_linia)
	std::cin.getline(nombre,20,'\n');
	
	std::cout<<nombre<<endl;
	
	getch();
	return 0;
}
