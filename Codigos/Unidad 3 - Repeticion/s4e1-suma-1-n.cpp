/*
 * Enunciado: Leer un numero entero positivo n y calcular la suma de todos los numeros enteros desde 1 hasta n.
 */

#include<iostream>
using namespace std;
int main () {
    float nf, sum, i;
    cin>>nf;
    if (nf!=int(nf)) {cout << "Error, el n�mero ingresado debe ser entero y positivo";}
    else if (nf<0) {cout << "Error, el n�mero ingresado debe ser entero y positivo";}
    else if (nf==int(nf)){for (i=0; i <= nf; i++) {sum = sum + i;}
    cout <<sum;}
	else { cout <<"No valido.";}
    
    return 0;}
