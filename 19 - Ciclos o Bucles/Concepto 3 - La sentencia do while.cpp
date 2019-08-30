#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	int i;
	
	i = 10;
	
	do
	{
		std::cout<<i<<endl;
		i--;
	}
	while(i>=10);
	
	system("pause");
	
	return 0;
}
