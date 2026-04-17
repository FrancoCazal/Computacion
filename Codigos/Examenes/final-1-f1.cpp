/*
 * Enunciado: Gestionar los datos de N empleados de una empresa mediante un arreglo de estructuras, generando edad y salario aleatoriamente, imprimiendo la planilla, determinando al empleado de menor salario y permitiendo buscar por nombre.
 */

#include<iostream>
using namespace std;
#include<ctime>
#include<cstdlib>

struct Empresa
{
	char nombre[30];
	unsigned short edad;
	char sexo[3];
	long long salario;
	long long IPS;
};

Empresa cargarDatos()
{
	Empresa e;
	cout<<"Ingrese el nombre del empleado"<<endl;
	cin.getline(e.nombre,20);
	cout<<"Ingrese el sexo del empleado"<<endl;
	cin>>e.sexo;
	cin.ignore();
	return e;
}

void generarEdad(Empresa *e, int N)
{
	int i;
	for(i=0;i<N;i++)
	{
		e[i].edad=20+rand()%46;
	}
}

void generarSalario(long long *salario, long long *IPS)
{
	*salario=2500000+rand()%7400001;
	*IPS=*salario*9/100;
}

void imprimirDatos(Empresa e)
{
	cout<<endl<<"El empleado es: "<<e.nombre<<endl;
	cout<<"Su edad es de "<<e.edad<<" anhos"<<endl;
	
	if(e.sexo[0]=='F'){cout<<"Sexo: Femenino"<<endl;}
	if(e.sexo[0]=='M'){cout<<"Sexo: Masculino"<<endl;}
	if(e.sexo[0]=='O'){cout<<"Sexo: Otro"<<endl;}
	
	cout<<"Su salario es de "<<e.salario<<" guaranies"<<endl;
	cout<<"Aporte a IPS de "<<e.IPS<<" guaranies"<<endl;
}

void elMasSeco(Empresa *e, int N)
{
	int seco=0,i;
	long long menor=e[0].salario;
	
	for(i=0;i<N;i++)
	{
		if(e[i].salario<menor){seco=i;}
	}
	
	cout<<endl<<"El mas seco es: "<<e[seco].nombre<<" con un sueldo de "<<e[seco].salario<<endl;
}

void BuscarEmpleado(Empresa *e, int N)
{
	int i,flag=0;
	char nombre [30];
	do
	{
		cout<<"Ingrese el nombre de un empleado para verificar, introduzca '0' para salir."<<endl;
		cin.getline(nombre, 30);
		for(i=0;i<N;i++)
		{
			flag=0;
			if(strcmp(e[i].nombre,nombre)==0)
			{
				flag=1;
				break;
			}
		}
		
		if(flag==1){cout<<"Es empleado"<<endl;}
		else{cout<<"No es empleado"<<endl;}
		
	}while(strcmp(nombre,"0")!=0);
}

int main()
{
	int N,i;
	cin>>N;
	cin.ignore();
	Empresa empleados[N];
	
	srand(time(NULL));
	
	for(i=0;i<N;i++)
	{
		empleados[i]=cargarDatos();
	}
	
	generarEdad(empleados, N);
	
	for(i=0;i<N;i++)
	{
		generarSalario(&empleados[i].salario,&empleados[i].IPS);
	}
	
	for(i=0;i<N;i++)
	{
		imprimirDatos(empleados[i]);
	}
	
	elMasSeco(empleados, N);
	
	//BuscarEmpleado(empleados, N);
	
	return 0;
}