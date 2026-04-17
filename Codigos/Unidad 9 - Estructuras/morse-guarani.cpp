/*
 * Enunciado: Leer un mensaje en codigo Morse, validar que solo contenga puntos, rayas y separadores, decodificarlo en una estructura con indicativo, bateria y dia/noche, y verificar si el indicativo corresponde a ZP6 (radioaficionado paraguayo).
 */

#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<cstdlib>
using namespace std;
struct guarani{
	char indicativo[4];
	int bat;
	bool dia;
};

void validar(char mensaje[]){
	bool ban=1;
	do{
		cout<<"ingrese el codigo:";
		cin.getline(mensaje,35);
		for(int i=0;i<35;i++){
			if(mensaje[i]=='\0'){
				break;
			}
			if(mensaje[i]!='.' && mensaje[i]!='-' && mensaje[i]!=';'){
				ban=0;
			}
		}
	}while(ban==0);
}

char convcaracter(char carac[]){
	if(strcmp(carac,".----")==0){
		return '1';
	}
	if(strcmp(carac,"..---")==0){
		return '2';
	}
	if(strcmp(carac,"...--")==0){
		return '3';
	}
	if(strcmp(carac,"....-")==0){
		return '4';
	}
	if(strcmp(carac,".....")==0){
		return '5';
	}
	if(strcmp(carac,"-....")==0){
		return '6';
	}
	if(strcmp(carac,"--...")==0){
		return '7';
	}
	if(strcmp(carac,"---..")==0){
		return '8';
	}
	if(strcmp(carac,"----.")==0){
		return '9';
	}
	if(strcmp(carac,"-----")==0){
		return '0';
	}
	if(strcmp(carac,".--.")==0){
		return 'P';
	}
	if(strcmp(carac,"--..")==0){
		return 'Z';
	}else{
		return 'X';
	}
}

guarani convmorse(char mensaje[]){
	guarani aux;
	char carac[6];
	char bateria[3];
	int i=0,j=0;
	do{
		carac[i]=mensaje[j];
		i++;
		j++;
	}while(mensaje[j]!=';');
	aux.indicativo[0]=convcaracter(carac);
	
	i=0;
	j++;
	do{
		carac[i]=mensaje[j];
		i++;
		j++;
	}while(mensaje[j]!=';');
	aux.indicativo[1]=convcaracter(carac);
	
	i=0;
	j++;
	do{
		carac[i]=mensaje[j];
		i++;
		j++;
	}while(mensaje[j]!=';');
	aux.indicativo[2]=convcaracter(carac);
	
	i=0;
	j++;
	do{
		carac[i]=mensaje[j];
		i++;
		j++;
	}while(mensaje[j]!=';');
	bateria[0]=convcaracter(carac);

	i=0;
	j++;
	do{
		carac[i]=mensaje[j];
		i++;
		j++;
	}while(mensaje[j]!=';');
	bateria[1]=convcaracter(carac);
	
	i=0;
	j++;
	do{
		carac[i]=mensaje[j];
		i++;
		j++;
	}while(mensaje[j]!=';');
	cout<<"verificacion";
	aux.dia=bool(convcaracter(carac));
	
	
	
	aux.bat=atoi(bateria);
	cout<<aux.indicativo<<"\n"<<aux.bat<<"\n"<<aux.dia;	
	return aux;
}

int main(){
	guarani a;
	char mensaje[35];
	validar(mensaje);
	a=convmorse(mensaje);
	if(strcmp(a.indicativo,"ZP6")==0){
		cout<<"\nEs guaranisat1";
	}
}
