/*
 * Enunciado: Generar un vector aleatorio de N elementos, ordenarlo mediante el algoritmo de mezcla (Mergesort) y mostrar el vector antes y despues de ordenarlo.
 */

/*Ordenamiento por mezcla (Mergesort).*/
#include<iostream>
using namespace std;
#include<cstdlib>
#include<ctime>

void imprimirVector(int x[], int n){
	int i;
	for(i=0;i<n;i++) cout<<x[i]<<" ";
	cout<<endl;
}

void mezclar(int A[], int p, int q, int r){
    int i,j,k;
    int n1 = q-p+1;
    int n2 = r-q;

    /* Creamos vectores auxiliares */
    int L[n1], R[n2];

    /* Copiamos datos a los vectores L[] y R[] */
    for(i=0;i<n1;i++) L[i] = A[p+i];
    for(j=0;j<n2;j++) R[j] = A[q+1+j];

    /* Mezclar los vectores temporales y colocarlos en A[p...r]*/
    i = 0; // Posicion inicial en L[]
    j = 0; // Posicion inicial en R[]
    k = p; // Posicion inicial en A[] (en el sector que va de A[p...r]
    while(i<n1 && j<n2) {
        if(L[i]<=R[j]){
            A[k] = L[i];
            i++;
        }
        else{
            A[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copiamos los elementos restantes de L[] (si los hay) */
    while(i<n1) {
        A[k] = L[i];
        i++;
        k++;
    }

    /* Copiamos los elementos restantes de R[] (si los hay) */
    while(j<n2) {
        A[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int A[], int p, int r){
    if(p<r) {
        //Se halla el punto medio
        int q = (p+r)/2;

        //Se ordena cada una de las mitades (llamada recursiva)
        mergeSort(A,p,q);
        mergeSort(A,q+1,r);

        mezclar(A,p,q,r);
    }
}

void ordenarVecMergesort(int A[], int N){
    mergeSort(A,0,N-1);
}

int main(){
	//Se ingresa el tama�o del vector
	int N;
	cout<<"Ordenamiento por mezcla (Mergesort) \n";
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

	//Ordenamiento por mezcla
	ordenarVecMergesort(A,N);

	//Se muestra el vector ordenado
	cout<<"\nVector ordenado:\n";
	imprimirVector(A,N);
    return 0;
}
