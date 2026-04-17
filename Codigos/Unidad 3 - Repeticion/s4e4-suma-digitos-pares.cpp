/*
 * Enunciado: Leer un numero entero y calcular la suma de sus digitos pares.
 */

#include<iostream>
using namespace std;
int main(){
    int n, r, sum;
    cin >> n;
    while (n>0) {r = n%10;
    if (r%2==0){sum = sum + r;}
    n=n/10;}
    cout << sum;
    return 0;
}

