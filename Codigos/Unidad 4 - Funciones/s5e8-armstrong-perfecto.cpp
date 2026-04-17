/*
 * Enunciado: Leer numeros enteros entre 1 y 1000 y contar cuantos de ellos son numeros de Armstrong y cuantos son numeros perfectos.
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
    int n=0,accuArm=0,accuPerfect=-1;
	
	do {int pdiez, r, sumn=0, potr=0,c=n, j,divn=0;
	    
     	for (j=0; c>0; j++) {c=c/10;}
    	for (int i=0; i<j; i++) {
    		pdiez=pow(10,j-i);
    		c=n%pdiez;
    		r=c/(pdiez/10);
    		potr=pow(r,j);
    		sumn=sumn+potr;
    		if (sumn==n) {accuArm = accuArm + 1;}
		}
    	
    	for (int i=1; i<n; i++) {if (n%i==0) {divn=divn+i;}
		}
		
		if (divn==n) {accuPerfect = accuPerfect + 1;}
		
		cin>>n;
    	
    }while(n>0 && n<=1000);
		
    cout<<accuArm<<endl;
    cout<<accuPerfect;}
