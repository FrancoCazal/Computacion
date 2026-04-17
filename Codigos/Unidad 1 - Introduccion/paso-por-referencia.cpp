/*
 * Enunciado: Ejemplo introductorio que muestra el paso de parametros por referencia mediante una funcion que duplica el valor de una variable.
 */

#include<iostream>
using namespace std;


void funcion(int &x){x=x*2;}

int main()
{
	int x=5,y=6;
	float z=x/y;
	
	funcion(x);
	
	cout<<x;
	
	return 0;
}
