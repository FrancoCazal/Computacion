/*
 * Enunciado: Dado un numero N y un entero C, contar cuantos bloques de C digitos consecutivos de N son no primos, retornando -1 si C excede la cantidad de digitos de N.
 */

#include<iostream>
#include<cmath>
using namespace std;

int potencia (int a, int b) {
    int i, p=1;
    for(i=0;i<b;i++) {p*=a;}
    return p;}


bool esPrimo (int n) {
    if(n==1) {return false;} 
    int i;
    for(i=2;i<=sqrt(n);i++) {if(n%i==0) {return false;}
	}
    return true;}


int cantDigitos (int n) {
    int dig=0;
    while(n>0){
        dig++;
        n/=10;}
    return dig;}


float cantNoPrimos_C_Digitos (float N, float C) {
	int x;
	int po = potencia (10, (cantDigitos(N)-C));
	float r = N/po;
	int dig = cantDigitos (N);
	int p = potencia (10, C);
	int z=dig-(C-1);
	
	for (int i=0; i<z ; i++) {
	
	if (esPrimo(int(r))==false) {x=x+1;}  //comprobaci�n y acumulador
	
	do {r=r-1;} while (int(r)>=1);   //decrecimiento de parte entera de r
	
	r*=p;}  //conversion de parte decimal a entera de r de a C digitos*/
	
	if (C>dig) {x=-1;}
	
    return x;}


int main(){
    int N,C;
    cin>>N>>C;
    float x = cantNoPrimos_C_Digitos(N,C);
    cout<<"Cantidad de no-primos de "<<C<<" digitos: "<<x<<endl;
    return 0;
}

