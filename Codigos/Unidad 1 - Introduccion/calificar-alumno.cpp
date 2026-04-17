/*
 * Enunciado: Leer la nota de un alumno e indicar si aprobo la materia, considerando que la nota minima para aprobar es 60.
 */

#include<iostream>
using namespace std;
int main () {
int N;
cout<<"Ingrese la nota del alumno: ";
cin>>N;
if (N>=60) {cout<<"El alumno paso la materia";
}
else {
	cout<<"El alumno no paso la materia";
}
	return 0;
}

