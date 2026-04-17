/*
 * Enunciado: Ejemplo de catedra sobre estructuras: definir la estructura Alumno, modificar el nombre por referencia, copiar todos sus campos a otra variable e imprimir los datos resultantes.
 */

#include<iostream>
using namespace std;

struct Alumno
{
	char nombre[30];
	int edad;
	int semestre;
	float promedio;
}al3,al4;

void modificarNombre(Alumno &al)
{
	char cad[30];
	cin.getline(cad,30);
	strcpy(al.nombre,cad);
}

int main() {
	Alumno al1 = {"Franco Cazal",19,2,4};
	
	modificarNombre(al1);
	
	Alumno al2=al1; //copia todos los campos de al1 a al2
	
	cout<<"El nombre del alumno es: "<<al2.nombre<<endl;
	
	cout<<"La edad del alumno es: "<<al2.edad;
	
	return 0;
}