/*
 * Enunciado: Leer un numero entero positivo y mostrar el resultado de invertir el orden de sus digitos utilizando una funcion recursiva.
 */

#include<iostream>
#include<math.h>
using namespace std;

int invertir(int a)
{
	if(a<=0) {return 0;}
	
	int c=log10(a);
	
	return (a%10*pow(10,c))+invertir(a/10);
}

int main()
{
	int a;

	cin>>a;

	cout<<invertir(a);

	return 0;
}
