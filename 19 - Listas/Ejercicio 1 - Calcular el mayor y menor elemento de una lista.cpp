#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

struct Nodo
{
	int dato;
	Nodo *siguiente;
};

void InsertarLista(Nodo *&,int);
void MostrarLista(Nodo *);
void CalcularMayorMenor(Nodo *);

int main()
{
	Nodo *lista = NULL;
	int dato;
	char respuesta;
	
	do
	{
		std:cout<<"Entra un numero: ";
		std::cin>>dato;
		InsertarLista(lista,dato); //Agregando un nuevo elemento a la lista
		
		std::cout<<"Desea agregar otro nodo(s/n)?";
		std::cin>>respuesta;
	}
	while((respuesta == 's') || (respuesta == 'S'));
	
	std::cout<<"\nElementos de la lista: \n";
	MostrarLista(lista);
	
	CalcularMayorMenor(lista);
	
	getch();
	return 0;
}

//Agregar elementos al final de la lista
void InsertarLista(Nodo *&lista, int n)
{
	Nodo *nuevo_nodo = new Nodo();
	Nodo *aux;
	
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(lista == NULL) //si la lista esta vacia
	{
		lista = nuevo_nodo; //agregamos el primer elemento a la lista
	}
	else
	{
		aux = lista; //auxiliar apunta al inicio de la lista
		
		while(aux->siguiente != NULL) //recorrer la lista
		{
			aux = aux->siguiente; //avanzamos posiciones en la lista
		}
		aux->siguiente = nuevo_nodo; //agrego el nuevo nodo a la lista
	}
	
	std::cout<<"\tElemento "<<n<<" agregado a lista correctamente\n";
	
}

//Mostrar todos los elementos de la lista
void MostrarLista(Nodo *lista)
{
	while(lista != NULL) //mientras no sea el final de la lista
	{
		std::cout<<lista->dato<<" -> ";
		lista = lista->siguiente; //avanzamos una posicion en la lista
	}
}

//Calcular el mayor y el menor elemento de la lista
void CalcularMayorMenor(Nodo *lista)
{
	int mayor = 0, menor = 999999;
	
	while(lista != NULL) //recorremos la lista
	{
		if((lista->dato) > mayor) //calculando el mayor elemento
		{
			mayor = lista->dato;
		}
		if((lista->dato) < menor) //calculando el menor elemento
		{
			menor = lista->dato;
		}
		lista = lista->siguiente; //avanzamos una posicion en lista	
	}
	
	std::cout<<"\nEl mayor elemento es: "<<mayor<<endl;
	std::cout<<"El menor elemento es: "<<menor<<endl;
}
