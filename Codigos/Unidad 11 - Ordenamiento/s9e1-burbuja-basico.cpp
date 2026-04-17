/*
 * Enunciado: Leer un vector de N enteros, mostrarlo por pantalla, ordenarlo por el metodo de la burbuja e imprimir el vector ordenado.
 */

#include <iostream>
using namespace::std;
 
void Imprime(int A[], int N)
{
	for (int j=0;j<N;j++)
	{
		cout << "\t" << A[j];
	}
	cout <<endl;
}


void Recibe(int A[], int N)
{         
	for (int i=0;i<N;i++)
	{      
		cin >> A[i];
	}
}

void Burbuja(int A[], int N)
{
	int i,j;
	for (i=0;i<N-1;i++)
	{
		for (j=0;j<N;j++)
		{
			int elem=A[i];
			if (A[j]>A[j+1])
			{
				elem=A[j+1];
				A[j+1]=A[j];
				A[j]=elem;
			}
		}
	}
}

int main()
{
	int N;
	cin>>N;
	int A[N];
	Recibe(A,N);
	Imprime(A,N);
	Burbuja(A,N);
	Imprime(A,N);

return 0;
}