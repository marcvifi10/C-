#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
	char nombre[] = "Marc";
	char nombre2[20];
	
	strcpy(nombre2,nombre); 
	
	std::cout<<nombre2<<endl;
	
	
	getch();
	return 0;
}
