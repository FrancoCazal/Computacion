/*
 * Enunciado: Leer un numero entero y mostrar el numero obtenido al invertir el orden de sus digitos.
 */

#include<iostream>
using namespace std;
int main(){
   int n, r;
   cin >> n;
   int inv=0;
   while (n > 0) {
    r = n%10;
    n = n/10;
    inv = inv*10 + r;}
    cout << inv;
    return 0;
}

