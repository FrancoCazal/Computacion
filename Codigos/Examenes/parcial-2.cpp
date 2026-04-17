/*
 * Enunciado: Dada una cadena con numeros codificados en Morse separados por comas y con punto y coma como separador de palabras, decodificarla y mostrar tanto la secuencia numerica resultante con sus espacios como la cadena original.
 */

#include<iostream>
using namespace std;

int main()
{
	int i, cont, punto, guion, nro, k=0;
	float n;
	
	/*do{cin>>n;}while(n<0||int(n)!=n);

	cin.ignore();
	
	int N=n;*/
	
	char cad[100]="*****,**---,****-;---**,----*,-****"; //524 896
	char cad2[100];
	
	/*do{cin.getline(cad,tam);
	
	cont=0;
	
	for(i=0;cad[i]!='\0';i++)
	{
		if (cad[i]!='*' && cad[i]!='-' && cad[i]!=',' && cad[i]!=';'){cont++;}
	}
	}while(cont!=0);*/
	
	for(i=0;cad[i]!='\0';i++)
	{
		punto=0;
		guion=0;
		nro=0;
		for (;cad[i]!=','&&cad[i]!=';'&&cad[i]!='\0';i++)
		{
			if(cad[i]=='*'){punto++;}
			if(cad[i]<cad[i+1]){break;}
			if(cad[i]=='-'){guion++;}
		}
		
		if(cad[i]!=',' && cad[i]!=';' && cad[i]!='\0')
		{
			while(cad[i]!=',' && cad[i]!=';' && cad[i]!='\0'){i++;}
		}
		
		nro=punto+2*guion;
		
		if(nro==10){nro=0;}
		
		cad2[k]=nro;
		
		k++;
		
		if(cad[i]==';')
		{
			cad2[k]='t';
			k++;
		}
		
	}
	
	for(i=0;cad2[i]!='\0';i++)
	{
		if(cad2[i]=='t'){cout<<" ";}
		else{cout<<int(cad2[i]);}
	}
	
	cout<<endl;
	
	for(i=0;cad[i]!='\0';i++){cout<<cad[i];}
	
	return 0;
}
