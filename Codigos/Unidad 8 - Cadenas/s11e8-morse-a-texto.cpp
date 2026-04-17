/*
 * Enunciado: Dada una cadena con numeros codificados en Morse separados por comas y con punto y coma indicando espacios entre palabras, decodificarla y mostrar el texto correspondiente con sus digitos y espacios.
 */

#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

void imprimirCad(char deco[])
{
	int i;
	for(i=0;deco[i]!='\0';i++)
	{
		if(deco[i]=='x'){cout<<" ";}
		else if(deco[i]=='y'){cout<<"0";}
		else{cout<<int(deco[i]);}
	}
}

int main()
{
	int i=0,j=0;
	int punto,raya,num;
	char cad[1000]="*----,*****,**---;--***,*****,----*,-****;*****,*----"; //152 7096 50
	
	char deco[100];
	
	while(cad[i]!='\0')
	{
		punto=0,raya=0,num=0;
		
		for(;cad[i]!=',' || cad[i]!=';';i++)
		{
			if(cad[i]=='*'){punto++;}
			if(cad[i]<cad[i+1]){break;}
			if(cad[i]=='-'){raya++;}
		}
		
		if(cad[i]!=',' && cad[i]!=';' && cad[i]!='\0')
		{
			while(cad[i]!=',' && cad[i]!=';' && cad[i]!='\0'){i++;}
		}
		
		num=punto+raya*2;
	
		deco[j]=num;
		
		if(num==10){deco[j]='y';}
		
		j++;
		
		if(cad[i]==';')
		{
			deco[j]='x';
			j++;
		}
		
		i++;
	}
	
	imprimirCad(deco);
	
	return 0;
}
