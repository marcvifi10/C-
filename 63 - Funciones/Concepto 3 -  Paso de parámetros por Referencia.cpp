//Paso de Parametros por Referencia

#include<iostream>
#include<conio.h>

using namespace std;

void valNuevo(int&,int&);

int main()
{
	int num1, num2;
	
	std::cout<<"Entra dos numeros: ";
	std::cin>>num1>>num2;
	
	valNuevo(num1,num2);
	
	std::cout<<"El nuevo valor del primer numero es: "<<num1<<endl;
	std::cout<<"El nuevo valor del segundo numero es: "<<num2<<endl;
	
	getch();
	return 0;
}

void valNuevo(int& xnum, int& ynum)
{
	std::cout<<"El valor del primer numero es: "<<xnum<<endl;
	std::cout<<"El valor del segundo numero es: "<<ynum<<endl;

	xnum = 69;
	ynum = 74;
}
