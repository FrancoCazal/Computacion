#include<iostream>
using namespace std;

/*Elabore un programa que reciba la dimensión y luego los datos de un vector (números
enteros positivos menores a 100), luego que una función devuelva la suma de todos
los valores del vector.*/

void sumaVector(int *p, int *n)
{
	int cont=0;
	for(int i=0;i<*n;i++)
	{
		cont+=*(p+i);
	}
	*n=cont;
}

int main()
{
	int N;
	cin>>N;
	int *o=&N; //puntero asociado con N
	int A[N];
	int *p=A; //puntero asociado con A
	
	for(int i=0;i<N;i++)
	{
		cin>>*(p+i);
	}
	
	sumaVector(p,&N);

	cout<<N;
}