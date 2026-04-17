/*
 * Enunciado: Dado un entero n, listar todos los numeros compuestos (no primos) entre 2 y n utilizando funciones auxiliares.
 */

#include<iostream>
#include<math.h>
using namespace std;

bool esPrimo(int n){
    if(n==1) {return false;} 
    int i;
    for(i=2;i<=sqrt(n);i++) {if(n%i==0) {return false;}
	}
    return true;
}
    
void imprimir_primos(int n){
for (int i=2; i<=n ; i++){
    if (esPrimo(i)==false) {cout <<i<<" ";}
	}
	}

main(){
	int n;
	cin>>n;
	imprimir_primos(n);
}
