/*
 * Enunciado: Leer un numero n y calcular el n-esimo termino de la sucesion de Fibonacci de forma iterativa.
 */

#include<iostream>
using namespace std;
int main(){
    int n, an=0;
    int t1=0, t2=1, c;
    cin >> n;
    for (c=1;c<=n;c++) {
    	an = (t1+t2);
		t1=t2;
		t2=an;}
    cout << an;
    return 0;}

