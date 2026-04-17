/*
 * Enunciado: Dado un valor n, imprimir un patron grafico que combina filas de asteriscos decrecientes con potencias de 2 dispuestas en forma simetrica.
 */

#include<iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int c=7+2*n;
	
	for (int k=0; k<n; k++) {
	
	for (int i=0; i<c; i++) {cout <<"*";}
	c=c-3;
		
	for (int j=0; j<=k; j++) {
		int pot1=pow(2,j);
		if (k==0) {cout<<pot1;}
		else{cout<<pot1<<"**";}
	}
	
	for (int j=k-1; j>=0; j--) {
		int pot2=pow(2,j);
		cout<<pot2<<"**";
	}
	
	cout<<endl;}
	
    return 0;
}
