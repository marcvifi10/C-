#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Nodo
{
	int dato;
	Nodo *der;
	Nodo *izq;	
};

Nodo *CrearNodo(int);
void InsertarNodo(Nodo *&,int);
void Menu();

Nodo *arbol = NULL;

int main()
{
	Menu();
	
	getch();
	return 0;
}

void Menu()
{
	int dato, opcion;
	
	do
	{
		std::cout<<"\t.MENU:."<<endl;
		std::cout<<"1. Insertar un nuevo nodo"<<endl;
		std::cout<<"2. Salir"<<endl;
		std::cout<<"Opcion: ";
		std::cin>>opcion;
		
		switch(opcion)
		{
			case 1:
				std::cout<<"\nEntra un numero: ";
				std::cin>>dato;
				InsertarNodo(arbol,dato);
				std::cout<<"\n";
				system("pause");
			break;
		}
		system("cls");
	}
	while(opcion != 2);
}

Nodo *CrearNodo(int n)
{
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq = NULL;
	
	return nuevo_nodo;
}

void InsertarNodo(Nodo *&arbol, int n)
{
	if(arbol == NULL)
	{
		Nodo *nuevo_nodo = CrearNodo(n);
		arbol = nuevo_nodo;
	}
	else
	{
		int ValorRaiz = arbol->dato;
		
		if(n < ValorRaiz)
		{
			InsertarNodo(arbol->izq,n);
		}
		else
		{
			InsertarNodo(arbol->der,n);
		}
	}
}

