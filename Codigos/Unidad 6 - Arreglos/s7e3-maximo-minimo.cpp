/*
 * Enunciado: Dado un vector de N elementos y una opcion, mostrar el valor maximo o el valor minimo de sus elementos.
 */

#include<iostream>
using namespace std;

int maximo(int V[], int tam)
{
	int may=V[0];
    for (int i=1; i<tam; i++)
	{
		if (V[i]>may)
		{
			may=V[i];
		}
	}
	return may;
}


int minimo(int V[], int tam)
{
    int men=V[0];
    for (int i=1; i<tam; i++)
	{
		if (V[i]<men)
		{
			men=V[i];
		}
	}
	return men;
}


void leerVector(int X[], int n)
{
    int i;
    for(i=0;i<n;i++)
	{
		cin>>X[i];
	}
}

int main()
{
	int opcion,n;
	cin>>opcion;
	cin>>n;
	int a[n];
	if(opcion==1)
	{
        leerVector(a,n);
        cout<<maximo(a,n);
	}
	
	if(opcion==2)
	{
	    leerVector(a,n);
        cout<<minimo(a,n);
	}
	return 0;
}