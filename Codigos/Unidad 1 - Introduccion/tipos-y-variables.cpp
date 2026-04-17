/*
 * Enunciado: Ejemplo introductorio sobre tipos de datos, constantes, conversiones implicitas y explicitas, variables globales y uso basico de funciones.
 */

#define PI 3.1415
#include <iostream>
using namespace std;

/* 
run this program using the console pauser or add your own getch, 
system("pause") or input loop 
*/

//int radio = 10;   //variables globales usar lo minimo
const float E = 2.71828;
//const double e = 2.71828;  son diferentes constantes E y e
//int auto = 10;  error auto es una palabra reservada

float areaCirculo(float radio) {
	cout << E;
	return PI * radio * radio;   //radio es 10
}

int main() {
	short s = 40001;    //-32768 .. 0 .. 32767 -3276
	cout << s << endl;
	char c = 64;    //-128 ...0 ... 127
	unsigned uc = 250;  //0...255 
	int radio = 100, x = 0;
	cout << "Hola Mundo " << " radio = " << radio << " Area Circulo: " << areaCirculo(radio) << endl;
	cout << PI << endl;
	//PI2 = 3.1416; no se puede cambiar una constante 
	cout << c << " es " << int(c) << endl;    //conversion explicita
	unsigned char c3 = s;                    //conversion implicita
	cout << " c3 "<< short(c3) <<  endl;   //conversion explicita
	long double ld = 10.35;
	cout << sizeof(ld) << endl;
	
	int z = ld;
	cout << z << endl; 
	
	if(radio != 500 or c < 10) {
		if (c < 10)  cout << " c es menor a 10";
		cout << "Ingrese radio";
		cin >> radio;
	}
	else {   //opcional
		cout << "Ok";
	}
	
	return 0;
}
