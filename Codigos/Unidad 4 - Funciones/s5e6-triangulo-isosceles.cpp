/*
 * Enunciado: Leer un entero positivo n e imprimir un triangulo isosceles de n filas formado por asteriscos y guiones que representan los espacios.
 */

#include<iostream>
#include<stdlib.h>
using namespace std;

int validar () {
	float n;
	while (int(n)!=n || n <= 0) {cin >> n;}
	return n;}

string triangIsosceles (int i, int n, string fila) {

		int canta = 1 + 2*(i-1);
		
	    for (int j=1; j<=(n-i); j++) {fila = fila + "-";}
	    
	    for (int k=1; k<=canta; k++) {fila = fila + "*";}
	
	return fila;}


int main () {
	
	string fila;
    int n = validar ();
	
	fila="";
	
	for (int i=1; i<=n; i++) {cout <<triangIsosceles (i, n, fila) <<endl;}
	
	return 0;}
