/*Escribir una función convertirBinarioADecimal() que reciba un número binario
(como cadena, la cual puede tener hasta 30 caracteres que representen a los bits) y 
devuelva su equivalente en el sistema decimal (con el tipo de dato int).

Se puede suponer que el usuario siempre ingresará una cadena válida; es decir, 
sus caracteres representan bits ('0' ó '1'), y tiene 30 caracteres como máximo. */

#include<iostream>
#include<cstdlib>
using namespace std;

int convertirBinarioADecimal(char nroBin[])
{
	int i;
	int cif=strlen(nroBin);
	int n=atoi(nroBin);
	
	/*for (i=0;i<cif;i++)
	{
		
	}*/
	
	
	return cif;
}

int main()
{
    char binario[31];
    cin>>binario;
   // convertirBinarioADecimal(binario);
    cout<<"El equivalente en sistema decimal es: "<<convertirBinarioADecimal(binario);
	return 0;
}