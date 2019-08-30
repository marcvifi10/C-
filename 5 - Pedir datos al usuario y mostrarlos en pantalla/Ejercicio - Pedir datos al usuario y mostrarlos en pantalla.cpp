#include<iostream>

using namespace std;

int main()
{
	int edad;
	char sexo[10];
	float altura;
	
	std::cout<<"Entra tu edad: "<<endl;
	std::cin>>edad;
	
	std::cout<<"Entra tu sexo: "<<endl;
	std::cin>>sexo;
	
	std::cout<<"Entra tu altura: "<<endl;
	std::cin>>altura;
	
	std::cout<<" "<<endl;
	std::cout<<"Edad: "<<edad<<endl;
	std::cout<<"Sexo: "<<sexo<<endl;
	std::cout<<"Altura: "<<altura<<endl;
	
	return 0;
}
