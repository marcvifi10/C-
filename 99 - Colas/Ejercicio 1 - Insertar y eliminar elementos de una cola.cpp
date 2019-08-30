#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Nodo
{
	char dato;
	Nodo *siguiente;	
};

void menu();
void InsertarCola(Nodo *&, Nodo*&, char);
bool cola_vacia(Nodo *);
void SuprimirCola(Nodo *&, Nodo *&, char &);

int main()
{
	menu();
	
	getch();
	return 0;
}

void menu()
{
	int opcion;
	char dato;
	
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	
	do
	{
		std::cout<<"\t.:MENU:.\n";
		std::cout<<"1. Insertar un caracter en la cola"<<endl;
		std::cout<<"2. Mostrar todos los elementos de la cola"<<endl;
		std::cout<<"3. Salir"<<endl;
		std::cout<<"Opcion:";
		std::cin>>opcion;
		
		switch(opcion)
		{
			case 1:
				std::cout<<"\nIngrese el caracter para agregar a la cola: ";
				std::cin>>dato;
				InsertarCola(frente,fin,dato);
			break;
			
			case 2:
				std::cout<<"\nMostrando los elementos de la cola: ";
				while(frente != NULL)
				{
					SuprimirCola(frente,fin,dato);
		
					if(frente != NULL)
					{
						std::cout<<dato<<" , ";
					}
					
					else
					{
						std::cout<<dato<<"."<<endl;
					}
				}
				std::cout<<"\n";
				system("pause");
			break;
			
			case 3:
				
			break;
		}
		system("cls");
	}
	while(opcion != 3);
}

void InsertarCola(Nodo *&frente, Nodo *&fin, char n)
{
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(cola_vacia(frente))
	{
		frente = nuevo_nodo;
	}
	else
	{
		fin->siguiente = nuevo_nodo;
	}
	
	fin = nuevo_nodo;
}

bool cola_vacia(Nodo *frente)
{
	if(frente == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void SuprimirCola(Nodo *&frente, Nodo *&fin, char &n)
{
	n = frente->dato;
	Nodo *aux = frente;
	
	if(frente == fin)
	{
		frente = NULL;
		fin = NULL;
	}
	else
	{
		frente = frente->siguiente;
	}
	
	delete aux;
}
