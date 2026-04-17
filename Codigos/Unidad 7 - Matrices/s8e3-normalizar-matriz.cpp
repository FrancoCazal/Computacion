/*Crear un programa en el que se ingresan por teclado el tamaño de filas y columnas, luego se crea una matriz
luego se identifica cual es el numero mayor en la matriz y se dividen los demas por ese numero
finalmente se imprime la matriz resultante*/

#include<iostream>
using namespace std;
int main()
{
	int m,n,i,j;
	cin>>m;
	cin>>n;
	float A[m][n],B[m][n];

	for(i=0;i<m;i++)
    	{
    	for(j=0;j<n;j++)
        	{
        	cin>>A[i][j];
        	}
	}
	
	float max=A[0][0];
	for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
        {
    	if (A[i][j]>max){max=A[i][j];}
        }
	}
	max=max*1.00;

	for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
        {
    	float elem=A[i][j];
    	A[i][j]=elem/(max*1.00);
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
}