/*
 * Enunciado: Leer un entero positivo n e imprimir un diamante de asteriscos cuya mitad superior tiene n filas ascendentes y la mitad inferior las correspondientes filas descendentes.
 */

#include<iostream>
using namespace std;

int t_diamante(int n){
	int i=1;
	string diamante = "";
	for (i; i<=n; i++) {
		diamante = "";
		for (int j=1; j<=n-i; j++) {diamante = diamante + " ";}
        for (int k=1; k<=(2*i-1); k++) {diamante = diamante + "*";}
        cout << diamante << endl;}
    for (i=n-1 ; i>=1; i--) {
    	diamante = "";
    	for (int j=1; j<=n-i; j++) {diamante = diamante + " ";}
        for (int k=1; k<=(2*i-1); k++) {diamante = diamante + "*";}
        cout << diamante << endl;}
}

main(){
    int n;
    cin>>n;
    t_diamante(n);}
