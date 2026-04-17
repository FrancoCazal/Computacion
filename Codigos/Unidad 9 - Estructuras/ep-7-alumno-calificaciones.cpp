#include<iostream>
#include<time.h>
#include<cstdlib>
using namespace std;
/*Se desea cargar, por teclado, el codigo, nombre y apellido de 5 alumnos y generar
aleatoriamente sus puntajes (entre 1 y 30) de 3 asignaturas (Calculo, Geometria, Fisica) en un
array de struct. Imprimir el codigo, nombre y apellido, asignaturas con puntaje y el promedio del
alumno. Imprimir ademas el promedio de cada asignatura.*/

struct Alumno
{
	int ci;
	char nombre[30];
	float ptosCal;
	float ptosGeo;
	float ptosFis;
	float promedio;
};

Alumno cargarDatos()
{
	Alumno al;
	cout<<"Ingrese CI del alumno: "<<endl;
	cin>>al.ci;
	cin.ignore();
	cout<<"Ingrese nombre del alumno: "<<endl;
	cin.getline(al.nombre,30);
	return al;
}

void generarPuntos(Alumno *al)
{
	al->ptosCal=(1+rand()%30000)/1000.0;
	al->ptosGeo=1+rand()%30;
	al->ptosFis=1+rand()%30;
}

void imprimirDatos(Alumno al)
{
	cout<<"\nEl CI del alumno es: "<<al.ci<<endl;
	cout<<"El nombre del alumno es: "<<al.nombre<<endl;
	cout<<"El puntaje del alumno en Calculo es: "<<al.ptosCal<<endl;
	cout<<"El puntaje del alumno en Geometria es: "<<al.ptosGeo<<endl;
	cout<<"El puntaje del alumno en Fisica es: "<<al.ptosFis<<endl;
	cout<<"El promedio de puntos del alumno es: "<<al.promedio<<endl;
}

/*
void ordenarAlumnos(int N)
{
	int i,elem;
	for(i=1;i<N;i++)
	{
		elem=al[i];
		j=i-1;
		for(j=i+1;j)
	}
}*/

void calcularPromedio(Alumno *al)
{
	al->promedio=(al->ptosCal+al->ptosFis+al->ptosGeo)/3;
}

int main()
{
	int i,N=3;
	Alumno alumnos[N],aux;
	
	srand(time(NULL));
	
	for(i=0;i<N;i++)
	{
		alumnos[i]=cargarDatos();
	}
	
	for(i=0;i<N;i++)
	{
		generarPuntos(&alumnos[i]);
	}
	
	for(i=0;i<N;i++)
	{
		calcularPromedio(&alumnos[i]);
	}
	
//	ordenarAlumnos(N);
	
	for(i=0;i<N;i++)
	{
		imprimirDatos(alumnos[i]);
	}
	return 0;
}
