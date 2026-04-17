/*
 * Enunciado: Leer un entero n comprendido entre 1000 y 1000000, calcular su cuadrado y extraer e imprimir los digitos centrales de dicho cuadrado utilizando operaciones de potencia y modulo.
 */

#include <iostream>
#include <cmath>
using namespace std;
int main () {
	int dign, dignsq, dif, cant=0;
	long long n=0, nsq=0, pot=0, dnsq=0,r=0;
	while (n<=1000 || n>=1000000) {cin>>n;}
	
	nsq=n*n;
	
	dnsq=nsq;
	
	for (dign=0; n>0; dign++) {
		n=n/10;}
		
	for (dignsq=0; dnsq>0; dignsq++){
		dnsq=dnsq/10;}
		
	cant = dignsq-dign;
	
	if (cant<dign) {
		pot=pow(10,dignsq);
		nsq=nsq+pot;
		dnsq=nsq;
		for (dignsq=0; dnsq>0; dignsq++){dnsq=dnsq/10;}}
	
	dif=(dignsq-dign)+(dignsq-dign)/2;
	
	pot=pow(10,dif);
	
	r = nsq%pot;
	
	pot=pow(10,(dignsq-dign)/2);
	
	r=r/pot;
	
	cout <<r;
	
	return 0;}
