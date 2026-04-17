/*
 * Enunciado: Generar un vector aleatorio de N elementos, ordenarlo por el metodo de la burbuja mejorada y mostrar el vector antes y despues de ordenarlo.
 */

/*Ordenamiento por burbuja.*/
#include<iostream>
using namespace std;
#include<cstdlib>
#include<ctime>

void imprimirVector(int x[], int n){
	int i;
	for(i=0;i<n;i++) cout<<x[i]<<" ";
	cout<<endl;
}

void ordenarVecBurbujaMejora(int A[], int N){
	int i=0,j,aux,continuar;
	do{
		continuar=0;
		for(j=0;j<(N-i-1);j++){
			if(A[j]>A[j+1]){
				//Intercambiar A[j] y A[j+1]
				aux=A[j];
				A[j]=A[j+1];
				A[j+1]=aux;
				continuar=1;
			}
		}
		i++;
	}while(continuar);
}

int main(){
	//Se ingresa el tama�o del vector
	int N;
	cout<<"Ordenamiento por burbuja\n";
	cout<<"Ingrese la cantidad de elementos: ";
	cin>>N;
	//Se declara el vector
	int A[N];
	//Se carga el vector
	int i,j;
	srand(time(NULL));
	for(i=0;i<N;i++) A[i] = rand()%10;

	//Se muestra el vector original
	cout<<"\nVector original:\n";
	imprimirVector(A,N);

	//Ordenamiento por burbuja
	ordenarVecBurbujaMejora(A,N);

	//Se muestra el vector ordenado
	cout<<"\nVector ordenado:\n";
	imprimirVector(A,N);
    return 0;
}
