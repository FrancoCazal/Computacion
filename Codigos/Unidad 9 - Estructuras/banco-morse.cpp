/*
 * Enunciado: Ejemplo de catedra para decodificar un caracter en codigo Morse, contando los puntos y rayas de la cadena y mostrando el numero correspondiente.
 */

#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

void imprimirCad(char cad2[])
{
	int i;
	for(i=0;cad2[i]!='\0';i++)
	{
		cout<<cad2[i];
	}
}


int main()
{
	int i=0,j=0,k=0;
	char cad[100]="*----";
	
	int cad2[100];
	
	int punto=0,raya=0,num=0;
		
	for(i=0;cad[i]!=','&&cad[i]!='\0';i++)
	{
		if(cad[i]=='*'){punto++;}
		if(cad[i]=='-'){raya++;}
	}
		
	num=punto+raya;
	
	cad2[j]=num;

	//imprimirCad(cad);
	
	cout<<endl<<num;
	
	return 0;
}










