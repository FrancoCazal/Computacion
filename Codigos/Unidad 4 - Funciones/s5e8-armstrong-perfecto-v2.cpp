/*
 * Enunciado: Leer numeros enteros entre 1 y 1000 y, usando funciones auxiliares, contar cuantos de ellos son numeros de Armstrong y cuantos son numeros perfectos.
 */

#include <iostream>
#include <cmath>
using namespace std;

 bool checkArmstrong(int n) {int pdiez=0, r, sumn=0, potr=0,c=n, j;
 	bool checkArmstrong = false;
 		for (j=0; c>0; j++) {c=c/10;}
    	for (int i=0; i<j; i++) {
    		pdiez=pow(10,j-i);
    		c=n%pdiez;
    		r=c/(pdiez/10);
    		potr=pow(r,j);
    		sumn=sumn+potr;}
 	if (sumn==n) {checkArmstrong=true;}
 	return checkArmstrong;
}
 
 bool checkPerfect(int n) {int divn=0;
    bool checkPerfect = false;
 	for (int i=1; i<n; i++) {if (n%i==0) {divn=divn+i;}
		}
	if (divn==n) {checkPerfect=true;}
	return checkPerfect;
}

int main(){int n,accuArm=0,accuPerfect=0;
	
	do {cin>>n;
	if (checkArmstrong(n)) {accuArm+=1;}
	if (checkPerfect(n)) {accuPerfect+=1;}
    	
    }while(n>0 && n<=1000);
		
    cout<<accuArm<<endl;
    cout<<accuPerfect;
 
    return 0;}
