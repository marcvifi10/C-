#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	int num;
	
	do
	{
		std::cout<<"Entra un numero: ";
		std::cin>>num;
	}
	while((num<1)||(num>10));
	
	for(int i=1; i<=10; i++)
	{
		std::cout<<num<<" * "<<i<<" = "<<num*i<<endl;
	}
	
	system("pause");
	
	return 0;
}
