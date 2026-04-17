/*
 * Enunciado: Gestionar los datos de n empleados almacenados en un arreglo de estructuras, generando edad y sueldo aleatorios, mostrando planilla general, pagos, el empleado de menor sueldo y permitiendo buscar por nombre.
 */

#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<cstdlib>
using namespace std;
struct empleado{
	char nom[20];
	unsigned short edad;
	char sexo;
	int sal;
	int ips; 	
};
int validar(){
	float aux;
	do{
		cout<<"ingrese n:"<<endl;
		cin>>aux;		
	}while(aux!=int(aux) || aux<0);
	return int(aux);
}
void nomysexo(empleado emp[],int n){
	for(int i=0;i<n;i++){
		cout<<"introduzca el nombre: ";
		fflush(stdin);
		cin.getline(emp[i].nom,20);
		cout<<"introduzca el sexo: ";
		cin>>emp[i].sexo;
	}
}
void edadysueldo(empleado emp[], int n){
	for(int i=0;i<n;i++){
		emp[i].edad=25+rand()%(65-25+1);
		emp[i].sal=2500000+rand()%(9900000-2500000+1);
		emp[i].ips=emp[i].sal*9/100;
	}
}
void imp(empleado emp[],int n){
	for(int i=0;i<n;i++){
		cout<<"\n\n"<<emp[i].nom;
		cout<<"\n"<<emp[i].edad;
		if(emp[i].sexo=='m') cout<<"\nMasculino";
		if(emp[i].sexo=='f') cout<<"\nFemenino";
		if(emp[i].sexo=='o') cout<<"\nOtros";
		cout<<"\n"<<emp[i].sal;
		cout<<"\n"<<emp[i].ips;
	}
}
void imppagos(empleado emp[],int n){
	for(int i=0;i<n;i++){
		cout<<"\n\n"<<emp[i].nom;
		cout<<"\n"<<emp[i].sal-emp[i].ips;
		cout<<"\n"<<emp[i].ips;
	}
}
void impmen(empleado emp[],int n){
	empleado aux;
	aux=emp[0];
	for(int i=1;i<n;i++){
		if(emp[i].sal<aux.sal){
			aux=emp[i];
		}
	}
	cout<<"\n el que menos gana es:";
	cout<<"\n\n"<<aux.nom;
	cout<<"\n"<<aux.edad;
	cout<<"\n"<<aux.sexo;
	cout<<"\n"<<aux.sal;
	cout<<"\n"<<aux.ips;
}
void buscar(empleado emp[],int n){
	char aux[20];
	cout<<"intro el nom buscado:\n";
	fflush(stdin);
	cin.getline(aux,20);
	for(int i=0;i<n;i++){
		if(strcmp(aux,emp[i].nom)==0){
			cout<<"\nTrabaja en la empresa!!!";
			break;
		}
	}
}
int main(){
	int n;
	n=validar();
	empleado emp[n];
	nomysexo(emp,n);
	edadysueldo(emp,n);
	imp(emp,n);
	imppagos(emp,n);
	impmen(emp,n);
	buscar(emp,n);
}




