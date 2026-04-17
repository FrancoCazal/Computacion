/*
 * Enunciado: Leer un caracter e indicar si se trata de una letra mayuscula, minuscula o si no es una letra.
 */

/*
obs: hacer char c=122 es equivalente a hacer char c='z'
*/

#include<iostream>
using namespace std;
int main () {
	char c;
	cout << "Ingrese una letra: "<<endl;
	cin >> c;
	
	if (c >= 'A' and c<= 'Z') {cout << "El caracter introducido es una letra mayuscula.";}
	else if (c>='a' and c<='z') {cout << "El caracter introducido es una letra minuscula.";}
	else {cout << "El caracter introducido no es una letra.";}
	
	return 0;
}

