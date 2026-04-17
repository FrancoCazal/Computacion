/*
 * Enunciado: Ejemplo de catedra sobre arreglos unidimensionales: leer N elementos, pasar el arreglo a funciones para sumar 5 a cada elemento y luego imprimirlo.
 */

#include<iostream>
using namespace std;

void sumar5 (int A[], int N)
{
	int i;
	for(i=0;i<N;i++){
		A[i]+=5;
	}
}

void imprimir (int A[], int N)
{
	int i;
	for(i=0;i<N;i++){
		cout<<A[i]<<" ";
	}
}

int main()
{
	int N,i;
	cin>>N;
	int B[N];
	for (i=0;i<N;i++){
		cin>>B[i];
	}
	sumar5(B,N);
	imprimir(B,N);
	return 0;
}

/*Obs: cuando mandas un arreglo a una funcion, modifica el arreglo globalmente, unlike
cuando envias una variable, modifica la variable localmente. Eso ocurre porque se envia la direccion del arreglo.*/