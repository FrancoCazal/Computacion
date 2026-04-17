/*
 * Enunciado: Generar un vector aleatorio de N elementos, ordenarlo mediante el algoritmo de ordenamiento rapido (Quicksort) y mostrar el vector antes y despues de ordenarlo.
 */

/*Ordenamiento r�pido (Quicksort).*/
#include<iostream>
using namespace std;
#include<cstdlib>
#include<ctime>

void imprimirVector(int x[], int n){
	int i;
	for(i=0;i<n;i++) cout<<x[i]<<" ";
	cout<<endl;
}

int particion(int A[], int p, int r){
    int x = A[r];
    int i = p-1,j;
    int aux;
    for(j=p;j<r;j++){
        //Si el elemento actual es menor al de referencia
        if(A[j]<=x){
            i++; //incrementamos el indice de elementos menores
            //Intercambiamos A[i] y A[j]
            aux = A[i];
            A[i] = A[j];
            A[j] = aux;
        }
    }
    //Intercambiamos A[i+1] y A[r] (se coloca el elemento de referencia en su posicion correspondiente en la particion)
    aux = A[i+1];
    A[i+1] = A[r];
    A[r] = aux;
    return (i+1);
}

void quickSort(int A[], int p, int r){
    if(p<r){
        int q = particion(A,p,r);
        quickSort(A,p,q-1);
        quickSort(A,q+1,r);
    }
}

void ordenarVecQuicksort(int A[], int N){
    quickSort(A,0,N-1);
}

int main(){
	//Se ingresa el tama�o del vector
	int N;
	cout<<"Ordenamiento rapido (Quicksort) \n";
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

	//Ordenamiento rapido
	ordenarVecQuicksort(A,N);

	//Se muestra el vector ordenado
	cout<<"\nVector ordenado:\n";
	imprimirVector(A,N);
    return 0;
}
