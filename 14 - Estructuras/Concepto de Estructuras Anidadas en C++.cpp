//Concepto: Una estructura dentro de otra estructura

//Ejemplo

struct info_direccion
{
	char direccion[30];
	char ciudad[20];
	char provincia[20];
};

struct empleado
{
	char nombre[20];
	struct info_direccion dir_empleado;
	double salario;
};
