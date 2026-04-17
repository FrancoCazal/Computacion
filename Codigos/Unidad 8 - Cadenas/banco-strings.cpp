/*
 * Enunciado: Ejemplo de catedra sobre el manejo de cadenas de caracteres en C++: declaracion, asignacion, copia, comparacion, concatenacion y conversiones, ilustrando las funciones de cstring.
 */

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

void cambiarString(char cad[])
{
	strcpy(cad,"damasgratis");
}


int main()
{
	/*obs1: solo puede cargar elementos en una cadena al declararla*/
	
/*	char cad[50],cad2[50];
	
	cin>>cad;
	
	cin>>cad2;
	
	cout<<cad<endl<<cad2; */
	
	/*Obs2: el espacio cuenta como divisoria entre cad1 y cd2 usando cin>>
	entonces se usa fflush() o cin.ignore()
	
	solucion 1: fflush(stdin) se vacia el buffer
	solucion 2: cin.ignore elimina el enter del cin */
	
	//cin.ignore(); //recomiendo solo usar esto dp de cada cin
	
	/* es diferente hacer 'a' a hacer "a" 
	comilla simple hace referencia a una variable y doble hace referencia a una cadena */
	
	char x = 'a';
	char y[10] = "sexo";
	
	/* funcion strlen(cad) para saber la longitud de una cadena sin contar \0
	funcion strcpy(cad1,cad2) copia el contenido de cad2 a cad1
	funcion strncpy(cad1,cad2,n) superpone los caracteres de cad2 con los de cad1
	obs3: tambien se puede utilizar strcpy (cad1, caracteres) para asignar cracteres a cad1 */
	
	char s[40]="hola";
	
	char t[40]="gigachad";
	
	int sex[20]={'s','e','x'};
	
	
	
//	strncpy(s,t,6);

//	cambiarString(s);
	
	cout<<sex[char(1)];
	
//	int n=2*s[2];
	
	//cout<<endl<<n;
	
	/* funcion strcat(cad1,cad2) copia el contenido de la cadena 2 al final de la cadena 1.* /
	
	/* funcion strcmp(cad1,cad2) si cad1 primero que cad2 en orden alfabetico devuelve -1, viceversa 1; si son iguales devuelve 0. */
	
	/* funcion atoi(cad) devuelve el valor de los numeros consecutivos en cad. 
	funcion itoa(n,cad,10) convierte de int a cadena en la cadena cad con base 10 */
	
	/* obs4: para hacer una matriz de caracteres: */
	
	int N=10; //cantidad de cadenas
	
	int cadenas[N][100]; //conjunto de n cadenas de tamaño 100
	
	/* obs5: '0'=48 */
	
	
	return 0;
}