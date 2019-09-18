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
	
	std::cout<<"Entra un numero: ";
	std::cin>>dato;
	AgregarPila(pila,dato);
	
	std::cout<<"\n";
	
	std::cout<<"Entra otro numero: ";
	std::cin>>dato;
	AgregarPila(pila,dato);
	
	std::cout<<"\n";
	
	std::cout<<"Sacando los elementos de la pila: ";
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
	
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=pila;
	
	pila = nuevo_nodo;
	
	std::cout<<"\nElemento "<<n<<" agregado a PILA correctamente"<<endl;
}

void SacarPila(Nodo *&pila, int &n)
{
		Nodo *aux = pila;
		
		n = aux->dato;
		pila = aux->siguiente;
		
		delete aux;
}
