#tipo nombre[nfilas][ncolumnas];
#Rango: 0 - (n-1)

#Declarar matrices
int numeros[2][3];
char letras[3][2];

#Agregar elementos a la matriz
int numeros[2][3] = {1,2,3 , 4,5,6};

std::cout<<numeros[1][2]; //Mostrara 6
std::cout<<numeros[0][1]; //Mostrara 2

#Otra manera de agregar elementos a la matriz
int numeros[2][3] = {{1,2,3} , {4,5,6}};

#Otra manera de agregar elementos a la matriz
int numeros[2][3] = {1,2,3
					 4,5,6};
