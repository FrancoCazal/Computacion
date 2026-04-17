/*
 * Enunciado: Ejemplo de catedra sobre estructuras: definir la estructura Alumno, cargar un arreglo de N alumnos con sus datos y luego imprimirlos.
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

Alumno ingresarDatos()
{
	Alumno al;
	cout<<"Ingresar nombre del alumno: "<<endl;
	cin.getline(al.nombre,30);
	cout<<"Ingresar edad del alumno: "<<endl;
	cin>>al.edad;
	cout<<"Ingresar semestre en el cual se encuentra el alumno: "<<endl;
	cin>>al.semestre;
	cout<<"Ingrese el promedio del alumno: "<<endl;
	cin>>al.promedio;
	cin.ignore();
	return al;
}

void imprimirDatos(Alumno al)
{
	cout<<"\nEl nombre del alumno es: "<<al.nombre<<endl;
	cout<<"La edad del alumno es: "<<al.edad<<endl;
	cout<<"El semestre del alumno es: "<<al.semestre<<endl;
	cout<<"El promedio del alumno es: "<<al.promedio<<endl;
}

int main(){
	int N,i;
	cin>>N;
	Alumno alumnos[N];
	cin.ignore();
	for(i=0;i<N;i++)
	{
		alumnos[i]=ingresarDatos();
	}
	
	for(i=0;i<N;i++)
	{
		imprimirDatos(alumnos[i]);
	}
	
	return 0;
}