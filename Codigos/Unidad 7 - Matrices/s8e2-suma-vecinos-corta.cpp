/*
 * Enunciado: Dada una matriz A de m por n, construir de forma compacta la matriz B donde cada elemento es la suma de los vecinos ortogonales del correspondiente de A, considerando 0 cuando el vecino esta fuera de la matriz.
 */

#include<iostream>
using namespace std;
int main()
{
	int m,n,i,j,s;
	cin>>m;
	cin>>n;
	int A[m][n],B[m][n];

	for(i=0;i<m;i++)
    	{
    	for(j=0;j<n;j++)
        	{
        	cin>>A[i][j];
        	}
	}
	
	for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
        {
        	int cargar = 0;
        	if (i-1 >=0)
        	{
        		cargar += A[i-1][j];
			}
			if (i+1 < m)
			{
				cargar+=A[i+1][j];
			}
			if (j-1 >=0)
			{
				cargar += A[i][j-1];
			}
			if (j+1 <n)
			{
				cargar += A[i][j+1];
			}
			B[i][j] = cargar;
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