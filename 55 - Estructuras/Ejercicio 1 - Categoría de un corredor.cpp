#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

struct Corredor
{
	char nombre[20];
	int edad;
	char sexo[10];
	char club[20];
}c1;

int main()
{
	char categoria[20];
	
	std::cout<<"Nombre: ";
	std::cin.getline(c1.nombre,20,'\n');
	
	std::cout<<"Edad: ";
	std::cin>>c1.edad;
	
	fflush(stdin);
	
	std::cout<<"Sexo: ";
	std::cin.getline(c1.sexo,10,'\n');
	
	std::cout<<"Club: ";
	std::cin.getline(c1.club,20,'\n');
	
	if(c1.edad<=18)
	{
		strcpy(categoria,"Juvenil");
	}
	else if(c1.edad<=40)
	{
		strcpy(categoria,"Senior");
	}
	else
	{
		strcpy(categoria,"Veterano");
	}
	
	std::cout<<"\n\nDatos del corredor: "<<endl;
	std::cout<<"Nombre: "<<c1.nombre<<endl;
	std::cout<<"Edad: "<<c1.edad<<endl;
	std::cout<<"Sexo: "<<c1.sexo<<endl;
	std::cout<<"Club: "<<c1.club<<endl;
	std::cout<<"Categoria: "<<categoria<<endl;
	
	getch();
	return 0;
}

