/*
 * Enunciado: Leer tres numeros distintos y determinar cual de ellos es el valor central (ni el maximo ni el minimo).
 */

#include<iostream>
using namespace std;
int main () {
	int a, b, c;
	cout << "Favor ingrese 3 numeros distintos: ";
	cin >> a >> b >> c;
	if (a>b and a>c and c<b) {cout <<endl << "El valor central es "<<b;}
	else if (a<c and a<b and c>b) {cout <<endl<< "El valor central es " <<b;}
	else if (b>a and b>c and a<c) {cout <<endl<< "El valor central es " <<c;}
	else if (a>b and c>b and c<a) {cout <<endl<< "El valor central es " <<c;}
	else if (c>a and c>b and b<a) {cout <<endl<< "El valor central es " <<a;}
	else if (a>c and b>c and a<b) {cout <<endl<< "El valor central es " <<a;}
	else {cout <<endl<< "Los valores ingresados no son distintos.";}
	return 0;
}
