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

int main()
{
	Nodo *pila = NULL;
	int n1,n2;
	
	std::cout<<"Entra un numero: ";
	std::cin>>n1;
	AgregarPila(pila,n1);
	
	std::cout<<"\n";
	
	std::cout<<"Entra otro numero: ";
	std::cin>>n2;
	AgregarPila(pila,n2);
	
	std::cout<<"\n";
	
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
