/*
 * Enunciado: Leer dos enteros a y b e imprimir un patron de letras del alfabeto cuya forma depende de a: si a vale 0 se muestra una sola fila simetrica de 2*b+1 letras y si a vale 1 se muestran b filas crecientes que combinan el indice de la fila con las letras correspondientes.
 */

#include<iostream>
using namespace std;

int main(){
int a, b, n, i=0;
cin >>a>>b;
if (a==0) {n=2*b+63;
		
	for (i=65; i<n; i=i+2) {cout << char(i);}
			
	for ( ; i>=65; i = i-2) {cout << char(i);} }
				
else if (a==1) {
		
		for (int x=1;x<=b;x++) {cout <<x;
		
		n=63+2*x;
		
		for (i=65; i<=n; i=i+2) {cout << char(i);}
		
		i=i-2;
		
		for ( ; i>65 ; ) {if (x==1) {break;}
		i=i-2;
		cout << char(i);}
			
		cout<<endl;}
}
return 0;}

