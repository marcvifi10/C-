#include<iostream>
#include<conio.h>

using namespace std;

void intercambio(float *, float *);

int main()
{
	float num1 = 20.8, num2 = 6.78;
	
	std::cout<<"Primer numero: "<<num1<<endl;
	std::cout<<"Segundo numero: "<<num2<<endl;
	
	intercambio(&num1,&num2);
	
	std::cout<<"\n\nDespues del intercambio: \n\n";
	std::cout<<"El nuevo valor de num1: "<<num1<<endl;
	std::cout<<"El nuevo valor de num2: "<<num2<<endl;
	
	getch();
	return 0;
}

void intercambio(float *dirNum1, float *dirNum2)
{
	float aux;
	
	//Intercambio de los valores de las variables
	aux = *dirNum1;
	*dirNum1 = *dirNum2;
	*dirNum2 = aux;
}
