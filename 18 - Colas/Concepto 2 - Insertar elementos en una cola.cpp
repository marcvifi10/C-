#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Nodo
{
	int dato;
	Nodo *siguiente;
};

void InsertarCola(Nodo *&, Nodo *&, int);
bool Cola_Vacia(Nodo *);

int main()
{
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	
	int dato;
	
	std::cout<<"Entra un numero: ";
	std::cin>>dato;
	
	InsertarCola(frente,fin,dato);
	
	std::cout<<"Entra un numero: ";
	std::cin>>dato;
	
	InsertarCola(frente,fin,dato);
	
	std::cout<<"Entra un numero: ";
	std::cin>>dato;
	
	InsertarCola(frente,fin,dato);
	
	getch();
	return 0;
}

//Función para insertar elementos en una cola
void InsertarCola(Nodo *&frente, Nodo *&fin, int n)
{
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=NULL;
	
	if(Cola_Vacia(frente))
	{
		frente = nuevo_nodo;
	}
	else
	{
		fin->siguiente = nuevo_nodo;
	}
	
	fin = nuevo_nodo;
	
	std::cout<<"\tElemento "<<n<<" insertado a cola correctamente.\n";
}

//Función para determinar si la cola esta vacia o no
bool Cola_Vacia(Nodo *frente)
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
