/*
 * Enunciado: Generar una matriz aleatoria de M por N, aplicar una transformacion que reemplaza cada elemento interno por la suma de sus vecinos ortogonales y luego ordenar todos los elementos de la matriz usando aritmetica de punteros.
 */

#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void imprimirMatriz(int *p, int M, int N)
{
	int i,j;
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			cout<<*(p+i*N+j)<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

void OrdenarMatriz(int *p, int M, int N)
{
	int i,j,aux;
	for(j=0;j<M*N;j++)
	{
		for(i=0;i<M*N;i++)
		{
			if(*(p+i+1)<*(p+i))
			{
				aux=*(p+i);
				*(p+i)=*(p+i+1);
				*(p+i+1)=aux;
			}
		}
	}
}

void Socotroco(int *p, int M, int N)
{
	int i,j,carga;
	for(i=1;i<M-1;i++)
	{
		for(j=1;j<N-1;j++)
		{
			carga=0;
			if(i-1>=0){carga+=*(p+N*(i-1)+j);}
			if(i+1<M){carga+=*(p+N*(i+1)+j);}
			if(j-1>=0){carga+=*(p+N*i+(j-1));}
			if(j+1<N){carga+=*(p+N*i+(j+1));}
			*(p+N*i+j)=carga;
		}
	}
}

int main()
{
	int M,N,i,j;
	cin>>M;
	cin>>N;
	int A[M][N];
	
	srand(time(NULL));
	
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			A[i][j]=1+rand()%10;
		}
	}
	
	int *p=&A[0][0];
	
	imprimirMatriz(p,M,N);
	
	Socotroco(p,M,N);
	
	imprimirMatriz(p,M,N);
	
	OrdenarMatriz(p,M,N);
	
	imprimirMatriz(p,M,N);
		
	return 0;
}