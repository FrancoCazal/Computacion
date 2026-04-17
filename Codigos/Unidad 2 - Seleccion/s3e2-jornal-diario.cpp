/* Los empleados de una fábrica trabajan en dos turnos: diurno y nocturno. Se desea calcular el jornal diario de acuerdo con los siguientes puntos:
La tarifa de las horas diurnas es de 10.000 Gs
La tarifa de las horas nocturnas es de 20.000 Gs
Si es un domingo, el jornal aumenta en un 25%.
Para un trabajador considerado, se ingresan como entradas el día de la semana en la que trabajó (del 1 al 7, donde 7 es domingo), la cantidad de horas trabajadas en el turno diurno, y la cantidad de horas trabajadas en el turno nocturno. Se debe mostrar en pantalla el jornal que le corresponde.
*/

#include<iostream>
using namespace std;

/*
int main () {
	int dia, horasD, horasN;
	cout << "Ingrese el dia de trabajo: " <<endl;
	cin >> dia;
	if (dia < 1 && dia > 7) {cout << "El dato ingresado no es valido.";}
	else {
	cout << "Ingrese las horas de trabajo correspondientes al horario diurno: " <<endl;
	cin >> horasD;
	cout << "Ingrese las horas de trabajo correspondientes al horario nocturno: " <<endl;
	cin >> horasN;
	
	if (dia>=1 && dia<=6) {cout <<endl << "El jornal del trabajador es de: " << (horasD*10000 + horasN*20000) <<" guaranies.";}
	else {cout <<endl << "El jornal del trabajador es de: " << (horasD*10000 + horasN*20000)*1.25 <<" guaranies.";}
}
	
	return 0;
}
*/

int main () {

	int dia, horasD, horasN, n;
	cout << "Ingrese el dia de trabajo: " <<endl;
	cin >> dia;
	if (dia>=1 && dia<=6) {n=0;}
	else if (dia == 7) {n=1;}
	else {n=2;}
	
	switch (n) {
		
	case 0:{
	cout << "Ingrese las horas de trabajo correspondientes al horario diurno: " <<endl;
	cin >> horasD;
	cout << "Ingrese las horas de trabajo correspondientes al horario nocturno: " <<endl;
	cin >> horasN;
	cout <<endl << "El jornal del trabajador es de: " << (horasD*10000 + horasN*20000) <<" guaranies.";
	break;}
	
	case 1: {
	cout << "Ingrese las horas de trabajo correspondientes al horario diurno: " <<endl;
	cin >> horasD;
	cout << "Ingrese las horas de trabajo correspondientes al horario nocturno: " <<endl;
	cin >> horasN;
	cout <<endl << "El jornal del trabajador es de: " << (horasD*10000 + horasN*20000)*1.25 <<" guaranies.";
	break;}
	
	case 2: {cout << "El dato ingresado no es valido.";
	break;}
	
return 0;}
}

