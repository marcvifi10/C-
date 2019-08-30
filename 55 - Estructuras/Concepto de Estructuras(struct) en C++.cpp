//TEORIA

//Sintaxis
struct <nombreEstrutura>
{
	<tipoDeDato> <nombreDato>;
	<tipoDeDato> <nombreDato>;
	<tipoDeDato> <nombreDato>;
	<tipoDeDato> <nombreDato>;
	<tipoDeDato> <nombreDato>;
}

//Ejemplo
struct colleccion_CD
{
	char titulo[30];
	char artista[25];
	int numCanciones;
	float precio;
	char fecha_compra[20];
};

//Declarando variables struct

//Forma 1
struct colleccion_CD
{
	char titulo[30];
	char artista[25];
	int numCanciones;
	float precio;
	char fecha_compra[20];
};

int main()
{
	struct coleccion_CD CD1,CD2,CD3;//Cada CD contiene todos los campos de la coleccion_CD
}

//Forma 2
struct colleccion_CD
{
	char titulo[30];
	char artista[25];
	int numCanciones;
	float precio;
	char fecha_compra[20];
}CD1,CD2,CD3;


