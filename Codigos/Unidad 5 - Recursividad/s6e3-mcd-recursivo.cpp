/*
 * Enunciado: Leer dos numeros enteros positivos y calcular su maximo comun divisor mediante una funcion recursiva basada en el algoritmo de Euclides.
 */

#include<iostream>
using namespace std;

int mcd(int a, int b) {
    if(b == 0) {return a;}
    return mcd(b, a%b);}

int main () {
    int A,B;
    cin>>A>>B;
    
    cout << "El MCD resultante es "<< mcd(A,B)<<endl;
        
	return 0;}
