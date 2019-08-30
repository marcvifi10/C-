#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Nodo
{
	int dato;
	Nodo *der;
	Nodo *izq;
	Nodo *padre;	
};

Nodo *CrearNodo(int,Nodo *);

void InsertarNodo(Nodo *&,int,Nodo *);
void MostrarArbol(Nodo *,int);
bool Busqueda(Nodo*,int);
void PreOrden(Nodo *);
void InOrden(Nodo *);
void PostOrden(Nodo *);
void Eliminar(Nodo *,int);
void EliminarNodo(Nodo *);
Nodo *Minimo(Nodo *);
void Reemplazar(Nodo *,Nodo *);
void DestruirNodo(Nodo *);
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
				InsertarNodo(arbol,dato,NULL);
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
					std::cout<<"\nEl numero "<<dato<<" ha sido encontrado en el árbol."<<endl;
				}
				else
				{
					std::cout<<"\nEl numero "<<dato<<" NO ha sido encontrado en el árbol."<<endl;
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

Nodo *CrearNodo(int n, Nodo *padre)
{
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq = NULL;
	nuevo_nodo->padre = padre;
	
	return nuevo_nodo;
}

void InsertarNodo(Nodo *&arbol, int n, Nodo *padre)
{
	if(arbol == NULL)
	{
		Nodo *nuevo_nodo = CrearNodo(n,padre);
		arbol = nuevo_nodo;
	}
	else
	{
		int ValorRaiz = arbol->dato;
		
		if(n < ValorRaiz)
		{
			InsertarNodo(arbol->izq,n,arbol);
		}
		else
		{
			InsertarNodo(arbol->der,n,arbol);
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

//Eliminar un nodo del arbol
void Eliminar(Nodo *arbol, int n)
{
	if(arbol == NULL)
	{
		return; 
	}
	else if(n < arbol->dato)
	{
		Eliminar(arbol->izq,n);
	}
	else if(n > arbol->dato,n)
	{
		Eliminar(arbol->der,n);
	}
	else
	{
		EliminarNodo(arbol);
	}
}

//Función para determinar el nodo izq posible
Nodo *Minimo(Nodo *arbol)
{
	if(arbol == NULL)
	{
		return NULL;
	}
	
	if(arbol->izq) //Si tiene hijo izquierdo
	{
		return Minimo(arbol->izq); //Buscamos la parte más izquierda posible
	}
	else //Si no tiene hijo izquierdo
	{
		return arbol; //retornamos el mismo nodo
	}
}

//Función para reemplazar dos Nodos
void Reemplazar(Nodo *arbol, Nodo *NuevoNodo)
{
	if(arbol->padre)
	{
		//arbol->padre hay que asignarle su nuevo hijo
		if(arbol->dato == arbol->padre->izq->dato)
		{
			arbol->padre->izq = NuevoNodo;
		}
		else if(arbol->dato == arbol->padre->der->dato)
		{
			arbol->padre->der = NuevoNodo;
		}
	}
	if(NuevoNodo)
	{
		//Procedemos a asignarle su nuevo padre
		NuevoNodo->padre = arbol->padre;
	}
}

//Función para destruir un Nodo
void DestruirNodo(Nodo *nodo)
{
	nodo->izq = NULL;
	nodo->der = NULL;
	
	delete nodo;
}

//Función para eliminar el nodo encontrado
void EliminarNodo(Nodo *NodoEliminar)
{
	if(NodoEliminar->izq && NodoEliminar->der)//Si el Nodo tiene hijo izquierdo y hijo derecho
	{
		Nodo *menor = Minimo(NodoEliminar->der);
		NodoEliminar->dato = menor->dato;
		EliminarNodo(menor);
	}
	else if(NodoEliminar->izq) //Si el Nodo tiene hijo izq
	{
		Reemplazar(NodoEliminar,NodoEliminar->izq);
		DestruirNodo(NodoEliminar);
	}
	else if(NodoEliminar->der)
	{
		Reemplazar(NodoEliminar,NodoEliminar->der);
		DestruirNodo(NodoEliminar);
	}
}
