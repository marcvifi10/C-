#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<time.h> //Libreria para crear numeor aleatorio

using namespace std;

int main()
{
	int numero, dato, aleatorio, intentos=0;
	
	
	srand(time(NULL)); //Crea el numero aleatorio
	dato = 1 + rand ()%(100); //Crea el numero aleatorio
	
	do
	{
		std::cout<<"Entra un numero: ";
		std::cin>>numero;
		
		if (numero > dato)
		{
			std::cout<<"El numero es menor."<<endl;
		}
		
		if (numero < dato)
		{
			std::cout<<"El numero es mayor."<<endl;
		}
		
		intentos++;
	}
	while(numero != dato);
	
	std::cout<<"FELICIDADES LO HAS ACERTADO!!!"<<endl;
	std::cout<<"Has necesitado "<<intentos<<" intentos."<<endl;
	
	getch();
	return 0;
}
