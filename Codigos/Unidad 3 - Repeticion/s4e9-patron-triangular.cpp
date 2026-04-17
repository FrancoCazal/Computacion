/*
 * Enunciado: Dado un valor a, imprimir un patron triangular de letras en el que cada fila muestra letras del alfabeto en orden ascendente y luego descendente.
 */

#include<iostream>
using namespace std;

int main(){
int a, n, i=0;
cin>>a;
		
	for (int x=1;x<=a;x++) {
		
		n=64+x;
		
		for (i=65; i<=n; i++) {cout << char(i);}
		
		i=i-1;
		
		for ( ; i>65 ; ) {if (x==1) {break;}
		i=i-1;
		cout << char(i);}
			
		cout<<endl;}

return 0;}
