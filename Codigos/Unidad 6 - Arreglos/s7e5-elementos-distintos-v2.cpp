/*
 * Enunciado: Dado un vector L1 de N elementos, construir la lista L2 que contiene los elementos distintos de L1 junto con la cantidad de veces que aparece cada uno.
 */

#include<iostream>
using namespace std;

void cargarVector(int L1[], int N)
{
    for(int i=0;i<N;i++) {cin>>L1[i];}
}

void imprimirVector(int A[], int N)
{
    for(int i=0;i<N;i++) {cout<<A[i]<<" ";}
}

bool estaEnElVector(int L1[], int x, int N)
{
	int c=0;
    for(int i=0;i<N;i++)
	{
        if(x==L1[i]) {c=c+1;}
    }
    if (c==1) {return true;}
    else {return false;}
}

int contarElementosDistintos(int L1[], int B[], int N)
{
    int k=0;
    for(int i=0;i<N;i++)
	{
        if(estaEnElVector(L1,L1[i],N)) {B[k] = L1[i];
		k++;}
    }
    return k;
}

void obtenerListaL2(int L1[], int L2[], int N)
{
	
	
	
}

int main()
{
    int N;
    cin>>N;
    int L1[N], B[N];
    cargarVector(L1,N);
    int M = contarElementosDistintos(L1,B,N);
    int L2[2*M];
    obtenerListaL2(L1,L2,N);
    imprimirVector(B,N);
    return 0;
}
