/*
 * Enunciado: Leer dos numeros enteros positivos y calcular su maximo comun divisor utilizando el algoritmo de Euclides.
 */

#include <iostream>
using namespace std;

int main () {
	float num1f=0, num2f=0;
	int num1, num2, mcd;
	
	do {cin>>num1f;} while (num1f<0 || num1f!=int(num1f));
	
	do {cin>>num2f;} while (num2f<0 || num2f!=int(num2f));
	
	if (num1f>num2f) {num1=num1f; num2=num2f;}
	
	else if (num2f>num1f) {num1=num2f; num2=num1f;}
	
	while (num2>0) {
		mcd=num1%num2;
		num1=num2;
		if (mcd==0) {break;}
		num2=mcd;}
	
	cout <<num2;
	
	return 0;}
