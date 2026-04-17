/*
 * Enunciado: Leer una matriz de m por n y ordenar sus elementos por seleccion utilizando punteros para recorrer la matriz.
 */

#include<iostream>
using namespace std;
int main()
{
    int m,n,k;
    int i,j;
    cin>>m>>n;
    int A[m][n];
	
		for(i=0;i<m;i++)
		{
            for(j=0;j<n;j++)
            {
                cin>>A[i][j];
            }
		}
		
		int *p=&A[0][0];
		
		for(i=0;i<k;i++)
	    {
       		for(j=0;j<n;j++)
            {
            	int men=A[i][j];
            	for(u=0;u<k;u++)
				{
            		for(v=j+1;v<n;v++)
					{
						if (v==n){break;}
            			if (A[u][v]<A[i][j])
						{men=A[u][v];
						posu=u;
						posv=v;}
					}
				}
            		A[posu][posv]=A[i][j];
            		A[i][j]=men;
            }
	    }
       
    	for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<A[i][j]<<"  ";
            }
            cout<<"\n";
        }
        
        
        cout<<*p;
}