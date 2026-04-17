/*
 * Enunciado: Dada una cadena que representa un numero binario, convertirla a su valor decimal equivalente.
 */

#include<iostream>
using namespace std;
#include<cstdlib>
#include<cstring>

void decodificarBinario(char binario[])
{
	int N, i, num=0;
	N=strlen(binario);
	for(i=0;binario[i]!='\0';i++)
	{
		if(binario[i]=='1'){binario[i]=1;}
		if(binario[i]=='0'){binario[i]=0;}
	}
	
	for(i=0;i<N;i++)
	{
		num=2*num+binario[i];
	}
	
	cout<<num;
}

int main()
{
	char binario[20]="11111111";
	
	decodificarBinario(binario);
	
	return 0;
}