/*
 * Enunciado: Leer un numero entero positivo y mostrar su cuadrado, validando que sea entero, no negativo y que el resultado no exceda el maximo representable en un int.
 */

#include<iostream>
using namespace std;
#include<climits>
int main () {
	float nf;
	cout << "Ingrese un numero entero y positivo: ";
	cin >> nf;
	if (nf < 0) {cout << "El numero ingresado es negativo";}
	else if (nf*nf>INT_MAX) {cout <<"El numero ingresado es muy grande. ";}
	else if (nf != int(nf)) {cout <<"El numero ingresado no es entero";}
	else if (nf >= 0 and nf*nf <=INT_MAX and int(nf)==nf) {cout << "El cuadrado del numero ingresado es: " <<nf*nf;}
	else {cout << "El caracter ingresado no es valido ";}

	return 0;
}
