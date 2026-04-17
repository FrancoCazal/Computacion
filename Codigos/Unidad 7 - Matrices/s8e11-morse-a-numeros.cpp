/*
 * Enunciado: Dada una cadena con numeros en codigo Morse separados por comas (y espacios representados por punto y coma), decodificar la secuencia y mostrar los digitos correspondientes.
 */

#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

void imprimirCad(int deco[])
{
	int i;
	for(i=0;i<9;i++)
	{
		if(deco[i]==69){cout<<" ";}
		else{cout<<deco[i];}
	}
}

int main()
{
	int i=0,j=0;
	int punto,raya,num;
	char cad[1000]="*----,*****,**---;---**,--***,----*,-****;*----,*----";
	
	int deco[100];
	
	while(cad[i]!='\0')
	{
		punto=0,raya=0,num=0;
		
		for(;cad[i]!=',' || cad[i]!=';';i++)
		{
			if(cad[i]=='*'){punto++;}
			if(cad[i]<cad[i+1]){break;}
			if(cad[i]=='-'){raya++;}
		}
		
		if(cad[i]==';')
		{
			deco[j]=69;
			j++;
		}
		
		if(cad[i]!=',' && cad[i]!=';' && cad[i]!='\0')
		{
			while(cad[i]!=',' && cad[i]!=';' && cad[i]!='\0'){i++;}
		}
		
		if(num==10){num=0;}
		
		num=punto+raya*2;
	
		deco[j]=num;
		
		i++,j++;
	}
	
	imprimirCad(deco);
	
	cout<<endl<<j;
	
	return 0;
}
