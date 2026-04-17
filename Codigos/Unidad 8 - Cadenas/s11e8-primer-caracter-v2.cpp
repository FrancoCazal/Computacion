/*
 * Enunciado: Leer una cadena de hasta 30 caracteres y mostrar el valor numerico ASCII de su primer caracter mediante una funcion.
 */

#include<iostream>
using namespace std;

int funcion (char cad1[])
{
	return cad1[0];
}

int main () 
{
	char cad1[31];
	cin.getline(cad1,31);
	cout<<funcion(cad1);
//	return 0;
}