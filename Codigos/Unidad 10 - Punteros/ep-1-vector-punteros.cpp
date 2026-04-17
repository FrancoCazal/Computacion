#include<iostream>
using namespace std;

/*Elabore un programa que cargue e imprima los datos de un vector de enteros
mediante funciones y punteros.*/

void cargarVector(int *p, int N)
{
	for(int i=0;i<N;i++)
	{
		cin>>*(p+i);
	}
}

void imprimirVector(int *p, int N)
{
	for(int i=0;i<N;i++)
	{
		cout<<*(p+i)<<" ";
	}
}


int main()
{
	int N;
	cin>>N;
	int A[N];
	int *p=A; //puntero asociado con A
	cargarVector(p,N);
	imprimirVector(p,N);
	cout<<endl<<p;
}