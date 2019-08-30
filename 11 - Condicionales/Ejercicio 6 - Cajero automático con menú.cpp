#include<iostream>

using namespace std;

int main()
{
	int saldo_inicial=1000, opcion;
	float extra, saldo = 0, retirar;
	
	std::cout<<"\tBienvenido a su cajero automatico"<<endl;
	std::cout<<"1. Ingresar dinero a su cuenta."<<endl;
	std::cout<<"2. Retirar dinero de su cuenta."<<endl;
	std::cout<<"3. Salir."<<endl;
	std::cout<<"Opcion: ";
	std::cin>>opcion;
	
	switch (opcion)
	{
		case 1:
			std::cout<<"Que cantidad desea ingresar: ";
			std::cin>>extra;
			saldo = saldo_inicial + extra;
			
			std::cout<<"Dinero en su cuenta: "<<saldo;
		break;
		
		case 2:
			std::cout<<"Que cantidad desea retirar: ";
			std::cin>>retirar;
			
			if (retirar > saldo_inicial)
			{
				std::cout<<"No tiene esa cantidad de dinero";
			}
			else
			{
				saldo = saldo_inicial - retirar;
				std::cout<<"Dinero en su cuenta: "<<saldo;
			}
		break;
		
		case 3:
			
		break;
	}
	
	return 0;
}
