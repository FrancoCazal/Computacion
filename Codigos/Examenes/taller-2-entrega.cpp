/*
 * Enunciado: Leer un vector de n notas donde las posiciones pares corresponden a Computacion y las impares a Algebra Lineal, y segun la opcion elegida mostrar el vector, reordenarlo con las notas de Algebra Lineal seguidas por las de Computacion en orden descendente, o imprimir cada grupo en lineas separadas.
 */

#include<iostream>
using namespace std;

void cargarVector(int notas[], int n)
{
	int nota;
    for (int i=0; i<n;i++)
    {
    	cin>>nota;
    	notas[i]=nota;
	}
}

void ordenarVectorNotas(int notas[], int n)
{
	int i,j=0,k=n/2,aux;
	int B[n];
	for(i=0;i<n;i++)
	{
		B[i]=notas[i];
	}
	
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			B[j]=notas[i];
			j++;
		}
		if(i%2!=0)
		{
			B[k]=notas[i];
			k++;
		}
	}

	for(i=0;i<(n/2)-1;i++){
		for(j=0;j<(n/2);j++){
			if(B[j]<B[j+1]){
				
				aux=B[j]; B[j]=B[j+1]; B[j+1]=aux;
			}
		}
	}
	
	for(i=n/2;i<n-1;i++){
		for(j=n/2;j<n;j++){
			if(B[j]<B[j+1]){
				
				aux=B[j]; B[j]=B[j+1]; B[j+1]=aux;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		notas[i]=B[i];
	}
    
}

void mostrarNotas(int notas[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	if(i%2!=0){
			cout<<notas[i]<<" ";
		}
	}
	cout<<endl;
	
	for(i=0;i<n;i++)
	{
		if(i%2==0){
			cout<<notas[i]<<" ";
		}
	}

	cout<<endl;
}

int main(){
    int opcion;
    cin>>opcion;
    int n;
    cin>>n;
    int notas[n];
    cargarVector(notas,n);
    if(opcion==1){
        for(int i=0;i<n;i++) cout<<notas[i]<<" ";
    }
    if(opcion==2){
        ordenarVectorNotas(notas,n);
        for(int i=0;i<n;i++) cout<<notas[i]<<" ";
    }
    if(opcion==3){
        mostrarNotas(notas,n);
    }
	return 0;
}