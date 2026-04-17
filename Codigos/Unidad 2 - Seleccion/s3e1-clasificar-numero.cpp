/*
 * Enunciado: Leer un numero ingresado por el usuario e indicar si es
 * positivo, negativo o cero.
 */

#include<iostream>
using namespace std;

int main () {
	float nf;
	cout<<"Favor ingresar un numero: "<<"\n";
	cin>>nf;
	if (nf > 0) {cout << "El numero ingresado es Positivo"<<endl;}
	else if (nf == 0) {cout <<endl<< "El numero ingresado es Cero";}
	else if (nf < 0) {cout <<endl<< "El numero ingresado es Negativo";}
	else {cout<<"\nEl dato ingresado no es valido.";}
	
}
