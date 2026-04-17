/*
 * Enunciado: Leer dos numeros enteros positivos entre 100 y 32000 y determinar si son numeros amigos, es decir, si la suma de los divisores propios de cada uno equivale al otro.
 */

#include<iostream>
using namespace std;
int validar (float n) {while (n<=100 || n>=32000 || n!=int(n)) {cin >> n;}
return n;
}

void numeroamigo (int a, int b) {
	int suma=0, sumb=0;
	for (int i=1; i<a; i++) {if (a%i==0) {suma=suma+i;}
	}
	for (int j=1; j<b; j++) {if (b%j==0) {sumb=sumb+j;}
	}
	if (suma==b and sumb==a) {cout<<"Son numeros amigos";}
	else {cout<<"No son numeros amigos";}
}

int main(){
    float a, b;
    int d,e;
    cin>>a;
    d=validar(a);
    cin>>b;
    e=validar(b);
    numeroamigo(d,e);
}
