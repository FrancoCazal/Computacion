/*
 * Enunciado: Dado un vector L1 de N elementos, construir la lista L2 que contiene los elementos distintos de L1 junto con la cantidad de veces que aparece cada uno.
 */

#include<iostream>
using namespace std;

/*Funci�n que carga un vector de N elementos con valores introducidos por teclado*/
void cargarVector(int A[], int N){
    int i;
    for(i=0;i<N;i++) cin>>A[i];
}

/*Funci�n que muestra en pantalla los elementos de un vector de N elementos*/
void imprimirVector(int A[], int N){
    int i;
    for(i=0;i<N;i++) cout<<A[i]<<" "; cout<<endl;
}

/*Funci�n que indica con verdadero si un elemento x est� en un vector de N elementos, y
falso en caso contrario.
El entero "salto" indica el incremento en el proceso de recorrer el vector*/
bool estaEnElVector(int A[], int N, int x, int salto){
    int i;
    for(i=0;i<N;i+=salto){
        if(x==A[i]) return true; //x est� en el vector (en la posici�n i)
    }
    return false; //ya que no se encontr� x en el proceso de b�squeda
}

/*Funci�n que devuelve la cantidad de elementos distintos en un vector de N elementos*/
int contarElementosDistintos(int A[], int N){
    int elemDist=0; //contador con el nro de elementos distintos
    int B[N]; //vector que almacenar� los elementos distintos de A (como m�ximo, hay N distintos)
    int i; //�ndice
    for(i=0;i<N;i++){
        if(!estaEnElVector(B,elemDist,A[i],1)) B[elemDist++] = A[i]; //si A[i] no estaba en B, lo agregamos
    }
    return elemDist;
}

/*Funci�n para obtener la lista L2 seg�n las especificaciones del problema*/
/*completar*/ obtenerListaL2(/*completar*/){
    //En esta
    //parte implementamos
    //la funci�n
    //principal del problema
}

int main(){
    int N; //Numero de elementos de L1
    cin>>N; //Cargamos N
    int L1[N]; //Vector que almacenar� la lista de entrada
    cargarVector(L1,N); //Cargamos el vector
    int M = /*completar*/; //M debe contener la cantidad de n�meros distintos en L1
    int L2[/*completar*/]; //Vector que almacenar� los n�meros distintos con el nro de veces que aparecen en L1
    obtenerListaL2(L1,L2,N); //Obtenemos la lista L2 seg�n la descripci�n del problema
    imprimirVector(L2,/*completar*/); //Mostramos la lista L2
    return 0;
}