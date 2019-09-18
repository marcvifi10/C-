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
bool Busqueda(Nodo*,int);
void PreOrden(Nodo *);
void InOrden(Nodo *);
void PostOrden(Nodo *);
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
		std::cout<<"3. Buscar un elemento en el arbol"<<endl;
		std::cout<<"4. Recorrer el arbol en PreOrden"<<endl;
		std::cout<<"5. Recorrer el arbol en InOrden"<<endl;
		std::cout<<"6. Recorrer el arbol en PostOrden"<<endl;
		std::cout<<"7. Salir"<<endl;
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
			
			case 3:
				std::cout<<"\nEntra un numero a buscar: ";
				std::cin>>dato;
				
				if(Busqueda(arbol,dato) == true)
				{
					std::cout<<"\nEl numero "<<dato<<" ha sido encontrado en el �rbol."<<endl;
				}
				else
				{
					std::cout<<"\nEl numero "<<dato<<" NO ha sido encontrado en el �rbol."<<endl;
				}
				std::cout<<"\n";
				system("pause");
			break;
			
			case 4:
				std::cout<<"\nRecorrido en PreOrden: ";
				PreOrden(arbol);
				std::cout<<"\n\n";
				system("pause");
			break;
			
			case 5:
				std::cout<<"\nRecorrido en InOrden: ";
				InOrden(arbol);
				std::cout<<"\n\n";
				system("pause");
			break;
			
			case 6:
				std::cout<<"\nRecorrido en PostOrden: ";
				PostOrden(arbol);
				std::cout<<"\n\n";
				system("pause");
			break;
		}
		system("cls");
	}
	while(opcion != 7);
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

bool Busqueda(Nodo *arbol, int n)
{
	if(arbol == NULL)
	{
		return false;
	}
	else if(arbol->dato == n)
	{
		return true;
	}
	else if(n < arbol->dato)
	{
		return Busqueda(arbol->izq,n);
	}
	else
	{
		return Busqueda(arbol->der,n);
	}
}

void PreOrden(Nodo *arbol)
{
	if(arbol == NULL)
	{
		return;
	}
	else
	{
		std::cout<<arbol->dato<<" - ";
		PreOrden(arbol->izq);
		PreOrden(arbol->der);
	}
}

void InOrden(Nodo *arbol)
{
	if(arbol == NULL)
	{
		return;
	}
	else
	{
		InOrden(arbol->izq);
		std::cout<<arbol->dato<<" - ";
		InOrden(arbol->der);
	}
}

void PostOrden(Nodo *arbol)
{
	if(arbol == NULL)
	{
		return;
	}
	else
	{
		PostOrden(arbol->izq);
		PostOrden(arbol->der);
		std::cout<<arbol->dato<<" - ";
	}
}
