/*
 * Enunciado: Dada una matriz A de m por n, generar la matriz B conservando el borde original y calculando en cada elemento interno la suma de sus vecinos ortogonales.
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

	for (i=0;i<m;i++)
	{
		B[i][0]=A[i][0];
		B[i][n-1]=A[i][n-1];
	}
	
	for(j=0;j<n;j++)
	{
		B[0][j]=A[0][j];
		B[m-1][j]=A[m-1][j];
	}
	
	for(i=1;i<m-1;i++)
    {
    	
    	for(j=1;j<n-1;j++)
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
    	    	cout<<A[i][j]<<" ";
    		}
    	cout<<"\n";
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