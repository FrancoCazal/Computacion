/*
 * Enunciado: Generar un vector aleatorio de N elementos, ordenarlo por el metodo de insercion y mostrar el vector antes y despues de ordenarlo.
 */

/*Ordenamiento por insercion.*/
#include<iostream>
using namespace std;
#include<cstdlib>
#include<ctime>

void imprimirVector(int x[], int n){
	int i;
	for(i=0;i<n;i++) cout<<x[i]<<" ";
	cout<<endl;
}

void ordenarVecInsercion(int A[], int N){
	int i,j,elem;
	for(i=1;i<N;i++){
		elem = A[i];
		j=i-1;
		while(j>=0 && A[j]>elem){
            A[j+1]=A[j]; //El elemento en A[j] se desplaza un lugar a la derecha
            j--; //j--
        }
		A[j+1]=elem; //Se coloca el "nuevo" elemento en su posicion respectiva
	}
}

int main(){
	//Se ingresa el tamaño del vector
	int N;
	cout<<"Ordenamiento por insercion\n";
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

	//Ordenamiento por insercion
	ordenarVecInsercion(A,N);

	//Se muestra el vector ordenado
	cout<<"\nVector ordenado:\n";
	imprimirVector(A,N);
    return 0;
}
