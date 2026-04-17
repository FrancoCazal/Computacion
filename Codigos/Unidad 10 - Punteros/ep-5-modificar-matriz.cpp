#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

/*Crear un programa que requiera las dimensiones de una matriz MxN, la cargue con
numeros aleatorios del 0 al 99, imprima la matriz y luego la mande a una funcion,
donde los elementos de la matriz que son pares seran divididos entre 2 y los impares
seran multiplicados por 2. Para imprimir la matriz y hacer la funcion utilice punteros.*/

void cargarMatriz(int *p, int M, int N)
{
	int i,j;
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			int n=rand()%100;
			*(p+i*N+j)=n;
		}
	}
}

void dividirMatriz(int *p, int M, int N)
{
	int i,j;
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			/*int num=*(p+i*N+j);
			if((num%10)%2==0){*(p+i*N+j)/=2;}
			if((num%10)%2!=0){*(p+i*N+j)*=2;}*/
			int num=p[i][j];
			if((num%10)%2==0){p[i][j]/=2;}
			if((num%10)%2!=0){p[i][j]*=2;}
		}
	}
}

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
}

void ordenarMatriz(int *p, int N){
	int i,j,elem;
	for(i=1;i<N;i++){
		elem = *(p+i*N+j);
		j=i-1;
		while(j>=0 && *(p+i*N+j)>elem){
			//El elemento en A[j] se desplaza un lugar a la derecha
            *(p+i*N+j+1)=*(p+i*N+j);
            j=j-1; //j--
        }
		//Se coloca el "nuevo" elemento en su posicion respectiva
		A[j+1]=elem;
	}
}


int main()
{
	int M,N,i,j;
	cin>>M;
	cin>>N;
	int A[M][N];
	
	int *p=&A[0][0];
	
	cargarMatriz(p,M,N);
	
	imprimirMatriz(p,M,N);
	
	cout<<endl<<endl;
	
	dividirMatriz(p,M,N);
	
	imprimirMatriz(p,M,N);
	
	ordenarMatriz(p,M,N);
	
	return 0;
}
