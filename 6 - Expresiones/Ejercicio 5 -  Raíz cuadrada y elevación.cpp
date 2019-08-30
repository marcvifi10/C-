#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	float x, y, resultado=0;
	
	std::cout<<"Entra un valor para x: "<<endl;
	std::cin>>x;
	
	std::cout<<"Entra un valor para y: "<<endl;
	std::cin>>y;
	
	//sqrt = raiz cuadrada
	//pow elevar a un exponente, en este caso a 2
	resultado = (sqrt(x))/(pow(y,2)-1);
	
	std::cout<<endl;
	
	std::cout<<"El resultado es: "<<resultado<<endl;

	return 0;
}
