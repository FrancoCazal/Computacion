/*
 * Enunciado: Leer una cadena en codigo Morse validada, decodificarla para obtener el indicativo, porcentaje de bateria y estado dia/noche de un satelite, y verificar si corresponde al GuaraniSat1 (indicativo ZP6).
 */

#include<iostream>
using namespace std;
#include<cstdlib>
#include<cstring>

struct Guarani
{
	char indicativo[3];
	unsigned short bateria;
	bool dia;
};

void validarEntrada(char morse[])
{
	int i, flag;
	do
	{
		flag=1;
		cin.getline(morse,35);
		for(i=0;morse[i]!='\0';i++)
		{
			if(morse[i]!='.' && morse[i]!='-' && morse[i]!=';')
			{
				flag=0;
				break;
			}
		}
	}while(flag==0);
}

void imprimirDatos(Guarani sat1)
{
	int i;
	cout<<endl;
	
	cout<<sat1.indicativo<<", "<<sat1.bateria<<", "<<sat1.dia;
	
	if(strcmp(sat1.indicativo,"ZP6")==0){cout<<", Es el GuaraniSat1";}
}

char decodificarMorse(char aux[], int k)
{
	if(strcmp(aux,".----")==0){return '1';}
	if(strcmp(aux,"..---")==0){return '2';}
	if(strcmp(aux,"...--")==0){return '3';}
	if(strcmp(aux,"....-")==0){return '4';}
	if(strcmp(aux,".....")==0){return '5';}
	if(strcmp(aux,"-....")==0){return '6';}
	if(strcmp(aux,"--...")==0){return '7';}
	if(strcmp(aux,"---..")==0){return '8';}
	if(strcmp(aux,"----.")==0){return '9';}
	if(strcmp(aux,"-----")==0){return '0';}
	if(strcmp(aux,"--..")==0){return 'Z';}
	if(strcmp(aux,".--.")==0){return 'P';}
	else{return 'X';}
}

void cargarAux(char morse[], char deco[])
{
	int i=0,j=0,k=0;
	char aux[6];
	
	while(morse[i]!='\0')
	{
		j=0;
		while(morse[i]!=';' && morse[i]!='\0')
		{
			aux[j]=morse[i];
			i++;
			j++;
		}
		
		if(morse[i]!='\0'){i++;}
		
		deco[k]=decodificarMorse(aux,k);
		
		k++;
	}	
}

int main()
{
	Guarani sat1;
	
	int i=0,j=0;
	
	char morse[40]; //=".---;.--.;-....;.....;..---;.----";
	
	char deco[7], bat[3];
	
	validarEntrada(morse);
	
	cargarAux(morse,deco);
	
	for(i=0;i<3;i++){sat1.indicativo[i]=deco[j]; j++;}
	
	for(i=0;i<2;i++){bat[i]=deco[j]; j++;}
	
	sat1.bateria=atoi(bat);
	
	sat1.dia=int(deco[6]);
	
	imprimirDatos(sat1);
	
	return 0;
}