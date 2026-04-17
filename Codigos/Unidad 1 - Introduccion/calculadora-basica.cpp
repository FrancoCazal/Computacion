/*
 * Enunciado: Implementar una calculadora basica que lea dos numeros y muestre su suma, resta, producto y cociente, permitiendo repetir la operacion con nuevos numeros.
 */

/*
obs: se almacenan de acuerdo a las potencias de 2, 8 bits = 1 byte
char = 1 byte - almacena caracteres
unsigned short = 2 bytes
int = 4 bytes
float = 4 bytes
long = 4 bytes
long long = 8 bytes
double = 8 bytes
long double = 16 bytes
para saber el tama�o de una variable a: sizeof(a)
*/

#include<iostream>
using namespace std;
int main () {
	float a, b, n;
	do {
	cout<<"Favor ingresar los numeros a ser operados."<<"\n";
	cin>>a>>b;
	int p=a*b;
	float c=a/b;
	int s=a+b;
	int r=a-b;
	cout<<"La suma de los valores asignados es: "<<s<<"\n";
	cout<<"La diferencia de los valores asignados es: "<<r<<"\n";
	cout<<"El producto de los valores asignados es: "<<p<<"\n";
	cout<<"El cociente de los valores asignados es: "<<c<<"\n";
	cout<<"�Le gustaria ingresar otros numeros? (Presione 1 para si y 0 para no)\n ";
    cin >> n;
} while (n == 1);

cout << "Hasta luego!! Gracias por su preferencia :)";
	return 0;
}

