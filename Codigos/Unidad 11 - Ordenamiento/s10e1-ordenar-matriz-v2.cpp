/*
 * Enunciado: Leer una matriz de m por n y ordenar por separado la mitad superior y la mitad inferior de sus elementos, mostrando la matriz resultante.
 */

#include<iostream>
using namespace std;
int main()
{
    float m,n,k;
    int i,j,u,v,posu,posv;
    cin>>m>>n;
    float A[int(m)][int(n)];
       
	   for(i=0;i<m;i++)
       {
            for(j=0;j<n;j++)
            {
                cin>>A[i][j];
            }
       }
       
       k=int(m)/2;
       
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
	   
	   for(i=k+1;i<m;i++)
	   {
       		for(j=0;j<n;j++)
            {
            	int men=A[i][j];
            	for(u=k+1;u<m;u++)
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
}
      