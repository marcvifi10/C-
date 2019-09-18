/*

&n = La dirección de memoria de n
*n = La variable cuya dirección esta almaceada en n

*/

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int num,*dir_num;
	
	num = 20;
	dir_num = &num;
	
	//Forma clasica(sin punteros)
	std::cout<<"Numero: "<<num<<endl;
	std::cout<<"Dirección de memoria: "<<&num<<endl;
	
	//Con punteros
	std::cout<<"\nNumero: "<<*dir_num<<endl;
	std::cout<<"Dirección de memoria: "<<dir_num<<endl;
	
	getch();
	return 0;
}
