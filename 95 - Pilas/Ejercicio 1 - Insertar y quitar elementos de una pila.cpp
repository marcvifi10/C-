#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Nodo
{
	int dato;
	Nodo *siguiente;	
};

void AgregarPila(Nodo *&,int);
void SacarPila(Nodo *&,int &);

int main()
{
	Nodo *pila = NULL;
	int dato;
	char respuesta;
	
	do
	{
		std::cout<<"Entra un numero: ";
		std::cin>>dato;
		
		AgregarPila(pila,dato);
		
		std::cout<<"\nDeseas agregar otro elemento a PILA(s/n)? ";
		std::cin>>respuesta;
	}
	while((respuesta == 'S') || (respuesta == 's'));
	
	std::cout<<"\nSacando todos los elementos de Pila: ";
	while(pila != NULL)
	{
		SacarPila(pila,dato);
		
		if(pila != NULL)
		{
			std::cout<<dato<<", ";
		}
		else
		{
			std::cout<<dato<<".";
		}
	}
	
	getch();
	return 0;
}

void AgregarPila(Nodo *&pila, int n)
{
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	
	pila = nuevo_nodo;
	
	std::cout<<"\tElemento "<<n<<" ha sido agregado a la PILA correctamente";
}

void SacarPila(Nodo *&pila, int &n)
{
	Nodo *aux = pila;
	
	n = aux->dato;
	pila = aux->siguiente;
	
	delete aux;
}
