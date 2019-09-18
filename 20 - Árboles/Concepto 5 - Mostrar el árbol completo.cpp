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
void MostrarArbol(Nodo *,int);
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
	int dato, opcion, contador=0;
	
	do
	{
		std::cout<<"\t.MENU:."<<endl;
		std::cout<<"1. Insertar un nuevo nodo"<<endl;
		std::cout<<"2. Mostrar el arbol completo"<<endl;
		std::cout<<"3. Salir"<<endl;
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
			
			case 2:
				std::cout<<"\nMostrando el arbol completo:\n\n";
				MostrarArbol(arbol,contador);
				std::cout<<"\n";
				system("pause");
			break;
		}
		system("cls");
	}
	while(opcion != 3);
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

void MostrarArbol(Nodo *arbol, int contador)
{
	if(arbol == NULL)
	{
		return;
	}
	else
	{
		MostrarArbol(arbol->der,contador+1);
		
		for(int i=0; i<contador; i++)
		{
			std::cout<<"	";
		}
		
		std::cout<<arbol->dato<<endl;
		MostrarArbol(arbol->izq,contador+1);
	}
}

