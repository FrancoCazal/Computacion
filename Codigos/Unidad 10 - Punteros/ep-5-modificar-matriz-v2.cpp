#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

/*Crear un programa que requiera las dimensiones de una matriz MxN, la cargue con
números aleatorios del 0 al 99, imprima la matriz y luego la mande a una función,
donde los elementos de la matriz que son pares serán divididos entre 2 y los impares
serán multiplicados por 2. Para imprimir la matriz y hacer la función utilice punteros.*/

int imprimirVector (int A[][], int M, int N)
{
	int i,j;
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int M,N,i,j;
	cin>>M>>N;
	int A[M][N];
	srand(time(NULL));
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			A[i][j]=rand()%100;
		}
	}
	
	imprimirVector(A[M][N],M,N);
}