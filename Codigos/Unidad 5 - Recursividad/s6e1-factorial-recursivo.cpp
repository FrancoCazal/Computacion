/*
 * Enunciado: Leer un entero positivo n y calcular su factorial utilizando una funcion recursiva.
 */

#include<iostream>
using namespace std;

long long factorial (int n) {
	if (n==1) {return 1;}
	else {return factorial(n-1)*n;}
}

int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}
