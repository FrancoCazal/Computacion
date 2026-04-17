/*
 * Enunciado: Generar una matriz N por N con letras aleatorias, validar los parametros N y M, y extraer en una submatriz todas las secuencias de M vocales consecutivas encontradas al recorrer cada fila.
 */

#include<iostream>
using namespace std;
#include<cstdlib>
#include<cstring>
#include<ctime>

void imprimirMatriz(char *p, int M, int N)
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

bool verificar(char x)
{
	if(x=='a' || x=='e' || x== 'i' || x=='o' || x=='u'){return true;}
	else{return false;}
}

void validarN(float &n)
{
	do{cin>>n;}while(n!=int(n) || n<1);
}

void validarM(float &m, float &n)
{
	do{cin>>m;}while(m!=int(m) || m<0 || m>n);
}

void cargarMatriz(char *A, int M, int N)
{
	int i,j;
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			*(A+i*N+j)=97+rand()%(122-97+1);
		}
	}
}

void cargarSubmatriz(char *A, int N, int M)
{
	int i,j,k,q,cont,filas=0,l=0;
	char aux[50];
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			cont=0;
			for(k=0;k<M;k++)
			{
				if(verificar(*(A+i*N+j+k))==true){cont++;}
				else if(j+k==N || verificar(*(A+i*N+j+k))==false){break;}
				else if(verificar(*(A+i*N+j+k))==true)
				{
					for(q=0;q<M;q++)
					{
						aux[l]=*(A+i*N+j+q);
						l++;
					}
					filas++;
					break;
				}
			}
		}
	}
	
	char B[filas][M];
	
	k=0;
	
	for(i=0;aux[i]!='\0';i++){cout<<aux[i]<<" ";}
	
	for(i=0;i<filas;i++)
	{
		for(j=0;j<M;j++)
		{
			B[i][j]=aux[k];
			k++;
		}
	}
	
	imprimirMatriz(&B[0][0],filas,M);
}

int main()
{
	float n,m;
	cout<<"Ingrese el valor de N: ";
	validarN(n);
	cout<<"Ingrese el valor de M: ";
	validarM(m,n);
	
	int N=n;
	int M=m;
	
	srand(time(NULL));
	
	char A[N][N];
	
	cargarMatriz(&A[0][0],N,N);
	
	imprimirMatriz(&A[0][0],N,N);
	
	cargarSubmatriz(&A[0][0],N,N);
	
	return 0;
}