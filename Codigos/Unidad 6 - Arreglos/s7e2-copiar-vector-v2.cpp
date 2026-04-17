/*
 * Enunciado: Segun la opcion elegida, copiar un vector A de N elementos en un vector B en el mismo orden o en orden inverso, y mostrar el resultado.
 */

#include<iostream>
using namespace std;


void copiarVector(int A[], int B[], int N)
{
    for (int i=0; i<N; i++) 
	{
		B[i]==A[i];
	}
}


void copiarVector_Inv(int A[], int B[], int N){
    
}


void imprimirVector(int X[], int n){
    int i;
    for(i=0;i<n;i++) cout<<X[i]<<" "; cout<<endl;
}


void leerVector(int X[], int n)
{
    for(int i=0;i<n;i++) 
	{
	cin>>X[i];
	}
}

int main(){
	int opcion,n;
	cin>>opcion;
	cin>>n;
	int a[n], b[n];
	if(opcion==1){
        leerVector(a,n);
        copiarVector(a,b,n);
        imprimirVector(b,n);
	}
	if(opcion==2){
	    leerVector(a,n);
        copiarVector_Inv(a,b,n);
        imprimirVector(b,n);
	}
	return 0;
}
