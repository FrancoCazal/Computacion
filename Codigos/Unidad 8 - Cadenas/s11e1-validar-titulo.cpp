/*Implemente la función void estitulo (char []). La función debe verificar si la cadena ingresada es un título
Para cumplir con la condición el primer carácter tiene que ser un carácter de tipo mayúscula y 
estar comprendidos entre las letras  ‘A’ y la ‘Z’, los siguientes caracteres tienen que ser letras minúsculas entre la ‘a’ y la ‘z’ o espacios.
Por último la función debe imprimir el mensaje “ES titulo” si cumple las condiciones dadas o  “NO es titulo” sino la cumple las condiciones mencionadas*/

#include<iostream>
#include<cstring>
#define TAMMAXCAD 100
using namespace std;
void estitulo(char cad[])
{
	int i, caso;
	
	if (cad[0]<'A'||cad[0]>'Z'){caso=0;}
	
	for (i=1;i=='\0';i++)
	{
		if(cad[i]<'a'||cad[i]>'z'){caso=0;}
	}
   
   if (caso==0){cout<<"NO es titulo";}
   else {cout<<"ES titulo";}
}


int main()
{
    char cad1[TAMMAXCAD];
    cin.getline(cad1,TAMMAXCAD);
    estitulo(cad1);
}