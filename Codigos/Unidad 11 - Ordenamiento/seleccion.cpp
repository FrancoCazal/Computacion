/*
 * Enunciado: Generar un vector aleatorio de N elementos, ordenarlo por el metodo de seleccion y mostrar el vector antes y despues de ordenarlo.
 */

/*Ordenamiento por seleccion.*/
#include<iostream>
using namespace std;
#include<cstdlib>
#include<ctime>

void imprimirVector(int x[], int n){
	int i;
	for(i=0;i<n;i++) cout<<x[i]<<" ";
	cout<<endl;
}

void ordenarVecSeleccion(int x[], int n){
	int i,j;
	int menor,pos_menor; /*indicar�n el valor y la posici�n del menor elemento del subarreglo*/
	for(i=0;i<n;i++){
		menor = x[i];
		pos_menor = i;
		for(j=(i+1);j<n;j++){
			if(x[j]<menor){
				menor=x[j];
				pos_menor=j;
			}
		}
		//Intercambio
		x[pos_menor]=x[i];
		x[i]=menor;
	}
}

int main(){
	//Se ingresa el tama�o del vector
	int N;
	cout<<"Ordenamiento por seleccion\n";
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

	//Ordenamiento por seleccion
	ordenarVecSeleccion(A,N);

	//Se muestra el vector ordenado
	cout<<"\nVector ordenado:\n";
	imprimirVector(A,N);
    return 0;
}
