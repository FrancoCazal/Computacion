/*
 * Enunciado: Leer un vector de n notas donde las posiciones pares corresponden a Computacion y las impares a Algebra Lineal, y segun la opcion elegida mostrar el vector, reordenarlo con las notas de Algebra Lineal seguidas por las de Computacion en orden descendente, o imprimir cada grupo en lineas separadas.
 */

#include<iostream>
using namespace std;

/*
Funci�n que ordena un vector de enteros con N elementos
void ordenarVector(int A[], int N){
	int i,j,aux;
	for(i=0;i<(N-1);i++){
	
		for(j=0;j<(N-i-1);j++){
			if(A[j]<A[j+1]){
				
				aux=A[j]; A[j]=A[j+1]; A[j+1]=aux;
			}
		}
	}
}*/


void cargarVector(int notas[], int n)
{
	int nota;
    for (int i=0; i<n;i++)
    {
    	cin>>nota;
    	notas[i]=nota;
	}
}

/*Esta funci�n recibe el vector de notas descrito anteriormente (elementos de las posiciones
pares representan las calificaciones de Computaci�n, y los elementos de las posiciones impares
representan las calificaciones de �lgebra Lineal), y reorganiza sus elementos de la siguiente manera:
- Los primeros n/2 elementos deben ser las notas de �lgebra Lineal, ordenadas de forma descendente.
- Los siguientes n/2 elementos deben ser las notas de Computaci�n, ordenadas de forma descendente.*/
void ordenarVectorNotas(int notas[], int n)
{
	int i,j=0,k=n/2,aux;
	int B[n];
	for(i=0;i<n;i++)
	{
		B[i]=notas[i];
	}
	
	//p/cargar en mitades distintas de B compu y al
	
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
	
	//ordenar mitad por mitad por burbuja
	
	
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

/*Esta funci�n recibe un vector de notas (suponiendo que ya fue previamente ordenado con ordenarVectorNotas())
y muestra en pantalla las calificaciones de �lgebra Lineal (en orden descendente, separados por
espacios simples). En una siguiente l�nea, se muestra las calificaciones de Computaci�n
(tambi�n en orden descendente, separados por espacios simples).*/
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