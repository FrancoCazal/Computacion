/*
 * Enunciado: Leer repetidamente un numero hasta obtener uno entero y positivo, y mostrar su cuadrado.
 */

#include<iostream>
using namespace std;
int main(){
    float nf;
    cout << "Ingrese un numero entero y positivo: ";
    do {cin >> nf;} while (nf<0 || nf!=int(nf));
    cout << nf*nf;
    return 0;
}
