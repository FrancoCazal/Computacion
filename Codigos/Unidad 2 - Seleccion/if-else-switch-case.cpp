/*
 * Enunciado: Leer la calificacion numerica de un alumno (0 a 100) y convertirla a una nota final del 1 al 5, mostrando el resultado mediante sentencias if-else y switch-case.
 */

/*
Y (and) = && (and)
O (or) = || (or)
NO (not) = ! (not)
alt+38 = &
*/

#include<iostream>
using namespace std;

/*
int main () {
	int nota;
	cout << "Ingrese la calificacion del alumno: ";
	cin >> nota;
	if (nota <= 100 && nota >=90 ) {cout << "\nLa nota final del alumno es 5";}
    else {if (nota < 90 && nota >= 80) {cout << "\nLa nota final del alumno es 4";}
	    else {if (nota < 80 && nota >= 70) {cout << "\nLa nota final del alumno es 3";}
		    else {if (nota < 70 && nota >= 60) {cout << "\nLa nota final del alumno es 2";}
		        else {if (nota < 60 && nota > 0) {cout << "\nLa nota final del alumno es 1";}
	                else {cout<< "\nEl valor ingresado no es valido.";}
}}}}
	return 0;}
*/

/*	
int main () {
	int c,n;
	cout << "Ingrese la calificacion del alumno: \n";
	cin >> c;
	if (c >= 90) {n=5;}
	else if (c>=80) {n=4;}
	else if (c>=70) {n=3;}
	else if (c>=60) {n=2;}
	else if (c<60) {n=1;}
	else {cout<<"El valor ingresado no es valido. ";}
	cout << "\nLa nota final del alunmno es: "<<n;
	return 0;}
*/	
	
int main () {
	int c,n;
	cout << "Ingrese la calificacion del alumno: \n";
	cin >> c;
	if (c >= 90) {n=5;}
	else if (c>=80) {n=4;}
	else if (c>=70) {n=3;}
	else if (c>=60) {n=2;}
	else if (c<60) {n=1;}
	else {cout<<"\nEl valor ingresado no es valido. ";}
	
	switch (n) {
		case 1: cout << "Nota 1";
		break;
		case 2: cout << "Nota 2";
		break;
		case 3: cout << "Nota 2";
		break;
		case 4: cout << "Nota 4";
		break;
		case 5: cout << "Nota 5";
		break;
	}
	return 0;
	}


