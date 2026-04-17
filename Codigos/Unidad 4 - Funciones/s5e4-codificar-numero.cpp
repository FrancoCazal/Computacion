/*
 * Enunciado: Leer un numero entero positivo y codificarlo sumando 7 (modulo 10) a cada uno de sus digitos.
 */

#include<iostream>
#include<math.h>
using namespace std;

int validar (float n){while (n<=0 || int(n)!=n) {cin >> n;}
    return n;}


int codificado(int n){
	int cod=n, dig, cif;
	
	for (dig=0; cod>0; dig++) {cod = cod/10;}
	
	for (int i=0; i<dig; i++){
		int pot=pow(10,i);
		cif = n%10;
		n=n/10;
		cif = cif+7;
		cif = cif%10;
		cod = cod+cif*pot;}
	
    return cod;}

int main(){
    float n;
    int resul, val;
    cin >> n;
    val = validar(n);
    resul = codificado(val);
    cout<<resul;
    return 0;}
