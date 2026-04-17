/*
 * Enunciado: Dada una matriz A de m por n, generar la matriz B en la cual cada posicion contiene la suma de los vecinos ortogonales (arriba, abajo, izquierda y derecha) del elemento correspondiente en A.
 */

#include<iostream>
using namespace std;
int main()
{
	int m,n,i,j;
	cin>>m;
	cin>>n;
	int A[m][n];
	int B[m][n];

	for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
        {
    	    cin>>A[i][j];
        }
	}

	for (i=0;i<m;i++){A[i][n]=0;}
	for (j=0;j<n;j++){A[m][j]=0;}
	
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
        	{
    	    	cout<<A[i][j]<<" ";
    		}
    	cout<<"\n";
	}
	cout<<"\n";
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			B[i][j]=A[i+1][j]+A[i-1][j]+A[i][j+1]+A[i][j-1];
		}
	}

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
        	{
    	    	cout<<B[i][j]<<" ";
    		}
    	cout<<"\n";
	}

}
