/*
 * Enunciado: Leer un numero entero positivo y mostrar su representacion en base binaria utilizando una funcion recursiva.
 */

#include<iostream>
using namespace std;

void binario (int n)
{
if (n==0) {return 0;}
return binario (n-1)+1;
cout<<n;

}


int validar () {while (n<=100 || n>=32000 || n!=int(n)) {cin >> n;}
return n;}


int main ()
{
	int nro=validar();
	
	binario(nro);
	
	return 0;
}
