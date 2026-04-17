/*
 * Enunciado: Ejemplo de catedra sobre punteros: declaracion, desreferenciacion, modificacion de la variable apuntada y equivalencia entre notacion de arreglos y de punteros, incluyendo matrices bidimensionales.
 */

#include<iostream>
using namespace std;

int main()
{
	int x=5;
	
	cout<<"La variable es "<<x<<" y su direccion es "<<&x<<endl;
	
	/*declarando un puntero: & es para la dirección
	obs1:el tipo de dato del puntero debe ser el mismo tipo de dato de la variable original.*/
	
	int *p=&x;
	
	cout<<"La direccion  la que apunta el puntero es "<<p<<" y su valor es "<<*p<<endl;
	
	cout<<"El tamano de la variable (en bytes) es "<<sizeof(x)<<endl<<endl;
	
	/*obs2: se puede modificar la variable apuntada modificando el puntero*/
	
	*p=20; //a donde apunta p, le asigno 20
	
	int y = 10 + *p; //y es 10 + x
	
	cout<<x<<" "<<y;
	
	/*punteros y arreglos
	obs3: los elementos de los vectores o matrices estan ubicados en la memoria uno al lado de otro*/
	
	int A[3]={1,2,3};
	int *a=&A[0];
	//int *a = A; lo mismo
	cout<<endl<<"La direccion de los elementos es: "<<endl<<a<<" "<<a+1<<" "<<a+2<<endl;
	
	cout<<endl<<"El valor de los elementos es: "<<endl<<*a<<" "<<*a+1<<" "<<*a+2;
	
	cout<<endl<<A<<" "<<&A<<" "<<&A[0]; //las tres expresiones imprimen A[0] o primer elemento del arreglo.
	
	/*obs4: cuando se envia una variable a una funcion, esta variable se altera solo cuando se envia
	su direccion, otherwise la funcion opera con una copia de la variable.
	obs5: la notacion de arreglos es intercambiable con la notacion de punteros.*/
	
	/* A[i] = p[i] = *(A+i) = *(p+i) valor
	&A[i] = A+i = p+i ubicacion
	C[12] = 5 -> *(C+12) = 5 */
	
	/*formula de direccionamiento en matrices: dada un matriz MxN
	
	*(p+i*N+j) = A[i][j] */
	
	int B[2][2];
	
	B[1][0]=35;
	
	int *c=&B[0][0];
	
	cout<<endl<<*(c+1*2+0);
	
	return 0;
}