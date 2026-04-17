/*
 * Enunciado: Dado un vector de N elementos y una opcion, contar el numero de apariciones de un elemento x, determinar el elemento que menos aparece o verificar si el vector esta ordenado de forma no decreciente.
 */

#include<iostream>
using namespace std;

int nroApariciones(int x, int A[], int N)
{
	int c=0;
    for (int i=0; i<N; i++)
	{
		if (A[i]==x) {c=c+1;}
	}
	return c;
}

int elementoQueMenosAparece(int A[], int N)
{
    int B[N], C[N], n=0, c, x;
    for (int i=0; i<N; i++)
	{
		c=0;
		for (int j=0; j>0; j--)
		{
		if (A[j]==A[i]){c=c+1;}
		}
		if (c==0) 
		{B[n]=A[i];
		n++;}
	}
	
	for (int i=0; i<n; i++)
	{
		x=0;
		for (int j=0; j<N; j++)
		{
			if (B[i]==A[j]) {x=x+1;}
		}
		C[i]=x;
	}
	
	int men=C[0], menor=0;
    for (int i=1; i<n; i++)
	{
		if (C[i]<men)
		{men=C[i];
		menor=i;
		}
	}
	return B[menor];
}

bool estaOrdenadoNoDesc(int A[], int N)
{
	int c=0;
    for (int i=1; i<N; i++)
	{
    	if (A[i-1]<=A[i]){c=c+1;}
	}
	if (c==N-1) {return true;}
	else {return false;}
}

int main()
{
    int opcion,N,i,x;
    cin>>opcion;
    cin>>N;
    int A[N];
    if(opcion==1){cin>>x;}
    for(i=0;i<N;i++){cin>>A[i];}
    if(opcion==1){cout<<nroApariciones(x,A,N)<<endl;}
    if(opcion==2){cout<<elementoQueMenosAparece(A,N)<<endl;}
    if(opcion==3){cout<<estaOrdenadoNoDesc(A,N)<<endl;}
    return 0;
}