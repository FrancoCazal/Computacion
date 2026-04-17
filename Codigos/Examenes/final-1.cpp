/*
 * Enunciado: Dada una cadena en codigo Morse, decodificarla para cargar la estructura Satelite con indicativo, porcentaje de bateria y estado dia/noche, y determinar si el satelite corresponde al GuaraniSat1.
 */

#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

struct Satelite
{
	char indicativo[3];
	unsigned short porcentajeBateria;
	bool dia;
};

/*
void ValidarEntrada(char datosMorse[],int N)
{
	int i,flag;
	do
	{
		flag=0;
		cin.getline(datosMorse,30);
		for(i=0;datosMorse[i]!='\0';i++)
		{
			if(datosMorse[i]!='-' && datosMorse[i]!='.' && datosMorse[i]!=';')
			{
				flag=1;
				break;
			}
		}
	}while(flag==1);
}*/

void ConvertirMorseASCII(char datosMorse[], char cad[], int &x)
{
	int i=0,j=0,k=0,num,punto,raya;
	x=0;
	char Z[5]="--..";
	char P[5]=".--.";
	
	cad[0]='Z';
	
	for(i=0;datosMorse[i]!=';';i++)
	{
		if(datosMorse[i]!=Z[i])
		{
			cad[0]='X';
			break;
		}
	}
	
	cad[1]='P';
	
	for(i=5;datosMorse[i]!=';';i++)
	{
		if(datosMorse[i]!=P[k])
		{
			cad[1]='X';
			break;
		}
		k++;
	}
	
	if(cad[0]!='X' && cad[1]!='X')
	{
		x=1;
	}
	
	i=10;
	
	j=2;
		
	while(datosMorse[i]!='\0')
	{
		punto=0;
		raya=0;
		num=0;
		for(;datosMorse[i]!=';';i++)
		{
			if(datosMorse[i]=='.'){punto++;}
			if(datosMorse[i]>datosMorse[i+1]){break;}
			if(datosMorse[i]=='-'){raya++;}
		}
		
		if(datosMorse[i]!=';' && datosMorse[i]!='\0')
		{
			while(datosMorse[i]!=';' && datosMorse[i]!='\0'){i++;}
		}
		
		num=raya*2+punto;

		cad[j]=num;
		
		if(num==10){cad[j]=0;}
		
		j++;
		i++;
	}
	
}

int main()
{
	Satelite GuaraniSat1;
	
	char datosMorse[100]="--..;.--.;-....;----.;.----;-----";
	
	int i,j,x,n;
	
	char cad[7];

	//ValidarEntrada(datosMorse,30);
	
	ConvertirMorseASCII(datosMorse,cad,x);
	
	//cad[6]='\0';
	
	for(i=0;i<2;i++)
	{
		GuaraniSat1.indicativo[i]=cad[i];
	}
	
	n=cad[2];
	
	GuaraniSat1.indicativo[2]=54;
	
	j=0;
	
	int aux[2];
	
	for(i=3;i<5;i++)
	{
		aux[j]=int(cad[i]);
		j++;
	}
	
	GuaraniSat1.porcentajeBateria=aux[0]*10+aux[1];
	
	GuaraniSat1.dia=cad[5];
	
	if(x==1)
	{
		cout<<GuaraniSat1.indicativo<<", "<<GuaraniSat1.porcentajeBateria<<", "<<GuaraniSat1.dia<<", Es el GuaraniSat1";
	}
	
	if(x==0)
	{
		cout<<GuaraniSat1.indicativo<<", "<<GuaraniSat1.porcentajeBateria<<", "<<GuaraniSat1.dia<<", No es el GuaraniSat1";
	}
	
	cout<<endl<<aux[0]<<endl<<cad<<endl<<char(n);
	
	return 0;
}







