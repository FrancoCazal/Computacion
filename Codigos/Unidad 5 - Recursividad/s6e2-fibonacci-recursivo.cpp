/*
 * Enunciado: Leer un entero n e imprimir los primeros n terminos de la sucesion de Fibonacci utilizando una funcion recursiva.
 */

#include<iostream>
using namespace std;

long long fibonacci (int n) {
	if (n==0) {return 1;}
	else if (n==1) {return 1;}
	else {return (fibonacci(n-2)+fibonacci(n-1));}
}

int main(){
    int n;
    cin>>n; 
    for (int i=0; i<=n; i++){cout<<fibonacci(i)<<endl;}
	return 0;}
