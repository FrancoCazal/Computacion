/*
 * Enunciado: Comparar empiricamente el tiempo de ejecucion de los algoritmos de seleccion, insercion, burbuja, mergesort y quicksort al ordenar multiples vectores aleatorios del mismo tamano.
 */

/*Comparaci�n de m�todos de ordenamiento*/
#include<iostream>
using namespace std;
#include<cstdlib>
#include<ctime>

void ordenarVecSeleccion(int[],int);
void ordenarVecInsercion(int[],int);
void ordenarVecBurbujaMejora(int[],int);
void ordenarVecMergesort(int[],int);
void ordenarVecQuicksort(int[],int);
void copiarVector(int[],int[],int);

int main(){
    /*El proceso es el siguiente:
    - Se generan, de manera aleatoria, N vectores de tama�o "tam".
    - Cada uno de estos vectores se ordena mediante cada m�todo de ordenamiento, contando el tiempo respectivo.
    - Se muestran al final los tiempos totales de ejecucion para cada m�todo.*/
    int tam=10000;
    int N=50;
    srand(time(NULL)); //inicializacion de la semilla para la generacion de numeros aleatorios

    //Inicializacion de acumuladores
    clock_t ini, fin;
    double tSel=0, tIns=0, tBur=0, tMer=0, tQui=0;

    //Impresion de datos de la prueba
    cout<<"Comparacion de metodos de ordenamiento\n\n";
    cout<<"Datos:\n";
    cout<<"Tamanho del vector: "<<tam<<endl;
    cout<<"Numero de repeticiones: "<<N<<endl;

    //Proceso principal
    int i,k;
    int A[tam],B[tam]; //B sera un vector auxiliar para las copias de A
    cout<<"Caso: ";
    for(k=0;k<N;k++){
        cout<<(k+1)<<" ";
        //Se genera un vector de manera aleatoria
        for(i=0;i<tam;i++) A[i] = rand()%1000; //de 0 a 999

        //Metodo de Seleccion
        copiarVector(A,B,tam); //se copian los elementos de A a B, para que todos los metodos utilicen el mismo vector
        ini = clock(); //tiempo de inicio
        ordenarVecSeleccion(B,tam);
        fin = clock(); //tiempo de finalizacion
        tSel += (((double)(fin-ini)) / CLOCKS_PER_SEC);

        //Metodo de Insercion
        copiarVector(A,B,tam);
        ini = clock();
        ordenarVecInsercion(B,tam);
        fin = clock();
        tIns += (((double)(fin-ini)) / CLOCKS_PER_SEC);

        //Metodo de Burbuja
        copiarVector(A,B,tam);
        ini = clock();
        ordenarVecBurbujaMejora(B,tam);
        fin = clock();
        tBur += (((double)(fin-ini)) / CLOCKS_PER_SEC);

        //Metodo de Mezcla (Mergesort)
        copiarVector(A,B,tam);
        ini = clock();
        ordenarVecMergesort(B,tam);
        fin = clock();
        tMer += (((double)(fin-ini)) / CLOCKS_PER_SEC);

        //Metodo rapido (Quicksort)
        copiarVector(A,B,tam);
        ini = clock();
        ordenarVecQuicksort(B,tam);
        fin = clock();
        tQui += (((double)(fin-ini)) / CLOCKS_PER_SEC);
    }

    //Impresion de resultados
    cout<<"\n\nResultados - Tiempos totales de ejecucion:\n";
    cout<<"Seleccion: "<<tSel<<endl;
    cout<<"Insercion: "<<tIns<<endl;
    cout<<"Burbuja: "<<tBur<<endl;
    cout<<"Mergesort: "<<tMer<<endl;
    cout<<"Quicksort: "<<tQui<<endl;

    return 0;
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

/*Algoritmo de ordenamiento por Mezcla (Mergesort)*/
void ordenarVecMergesort(int A[], int N){
    mergeSort(A,0,N-1);
}

/*Funci�n auxiliar para intercambiar dos elementos*/
void intercambiar(int* a, int* b){
    int t = *a; *a = *b; *b = t;
}

int particion(int A[], int p, int r){
    int x = A[r];
    int i = p-1,j;
    for(j=p;j<r;j++){
        //Si el elemento actual es menor al de referencia
        if(A[j]<=x){
            i++; //incrementar el indice de elementos menores
            intercambiar(&A[i],&A[j]);
        }
    }
    intercambiar(&A[i+1],&A[r]); //se coloca el elemento de referencia en su posicion correspondiente en la particion.
    return (i+1);
}

void quickSort(int A[], int p, int r){
    if(p<r){
        int q = particion(A,p,r);
        quickSort(A,p,q-1);
        quickSort(A,q+1,r);
    }
}

/*Algoritmo de ordenamiento r�pido (Quicksort)*/
void ordenarVecQuicksort(int A[], int N){
    quickSort(A,0,N-1);
}

/*Algoritmo de ordenamiento por Insercion*/
void ordenarVecInsercion(int A[], int N){
	int i,j,elem;
	for(i=1;i<N;i++){
		elem = A[i];
		j=i-1;
		while(j>=0 && A[j]>elem){
			//El elemento en A[j] se desplaza un lugar a la derecha
            A[j+1]=A[j];
            j=j-1; //j--
        }
		//Se coloca el "nuevo" elemento en su posicion respectiva
		A[j+1]=elem;
	}
}

/*Algoritmo de ordenamiento por Seleccion*/
void ordenarVecSeleccion(int x[], int n){
	int i,j,aux,pos; /*indicar�n el valor y la posici�n del menor elemento del subarreglo*/
	for(i=0;i<n;i++){
		aux = x[i];
		pos = i;
		for(j=(i+1);j<n;j++){
			if(x[j]<aux){
				aux=x[j];
				pos=j;
			}
		}
		//Intercambio
		x[pos]=x[i];
		x[i]=aux;
	}
}

/*Algoritmo de ordenamiento por "burbuja"*/
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

/*Funcion auxiliar que permite copiar los elementos de A en B*/
void copiarVector(int A[], int B[], int n){
    int i;
    for(i=0;i<n;i++) B[i]=A[i];
}

