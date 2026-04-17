/*
 * Enunciado: Leer la cantidad de funcionarios y sus sueldos, calcular el salario neto (descontando IPS y jubilacion) e informar el mayor y menor salario neto.
 */

/*#include<iostream>
using namespace std;

int main(){
	float sueldo, total, mayor, menor=INT_MAX,n;
	cout<<"CANTIDAD DE FUNCIONARIOS: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<i<<"-)"<<"Sueldo: ";
		cin>>sueldo;
		cout<<"\n";
		total=sueldo*0.75;
		cout<<"Con el IPS y Jubilaci�n: "<<total<<"\n \n";
		if(total>=mayor){mayor=total;}
		else if(total<menor){menor=total;}
	}
	cout<<"\n El mayor sueldo es "<<mayor<<" y el menor sueldo es "<<menor;
	return 0;}*/
	
	#include<iostream>
using namespace std;

int main(){
	float sueldo, total, mayor=0, menor,n;
	
	cout<<"CANTIDAD DE FUNCIONARIOS: ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cout<<i<<"-)"<<"Sueldo: ";
		cin>>sueldo;
		cout<<"\n";
		
		total=sueldo-(sueldo*0.25);
		cout<<"Con el IPS y Jubilaci�n: "<<total<<"\n \n";
		if(i==1){menor=total;}
		 if(total>=mayor){
		 	mayor=total;
		 }else if(total<=menor){
		 	menor=total;
		 }
		
		
	}
	cout<<"\n El mayor sueldo es "<<mayor<<" y el menor sueldo es "<<menor;
	
}
