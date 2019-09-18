#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Nodo
{
	int dato;
	Nodo *siguiente;	
};

void Menu();
void InsertarLista(Nodo *&,int);
void MostrarLista(Nodo *);

Nodo *lista = NULL;

int main()
{	
	
	Menu();
	
	getch();
	return 0;
}

void Menu()
{
	int opcion, dato;
	
	do
	{
		std::cout<<"\t.:MENU:.\n";
		std::cout<<"1. Insertar elementos a la lista\n";
		std::cout<<"2. Mostrar los elementos de la lista\n";
		std::cout<<"3. Salir\n";
		std::cout<<"Opcion: ";
		std::cin>>opcion;
		
		switch(opcion)
		{
			case 1:
				std::cout<<"Entra un numero: ";
				std::cin>>dato;
				InsertarLista(lista,dato);
				std::cout<<"\n";
				system("pause");
			break;
			
			case 2:
				MostrarLista(lista);
				std::cout<<"\n";
				system("pause");
			break;
		}
		system("cls");
	}
	while(opcion != 3);
}

void InsertarLista(Nodo *&lista, int n)
{
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	
	Nodo *aux1 = lista;
	Nodo *aux2;
	
	while((aux1 != NULL) && (aux1->dato < n))
	{
		aux2 = aux1;
		aux1 = aux1->siguiente;
	}
	
	if(lista == aux1)
	{
		lista = nuevo_nodo;
	}
	
	else
	{
		aux2->siguiente = nuevo_nodo;
	}
	
	nuevo_nodo->siguiente = aux1;
	
	std::cout<<"\tElemento "<<n<<" insertado a lista CORRECTAMENTE!!!";
}

void MostrarLista(Nodo *lista)
{
	Nodo *actual = new Nodo();
	
	actual = lista;
	
	while(actual != NULL)
	{
		std::cout<<actual->dato<<" -> ";
		actual = actual->siguiente;
	}
}
