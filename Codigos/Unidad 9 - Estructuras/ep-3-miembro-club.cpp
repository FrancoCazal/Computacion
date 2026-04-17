#include<iostream>
using namespace std;

/*Sean Nombre, sexo, anho tres variables que contienen el nombre, sexo y años de pertenencia
de cada uno de los miembros de un club. Masculino o Femenino se denota mediante ‘M’ y ‘ F’ ,
respectivamente.
Diseñar un programa mediante arreglo de estructura, se ingrese los datos de N miembros del club,
imprima todos los miembros del club con todos sus datos, además busque la persona que tiene
mayor antigüedad e indicar si es masculino o femenino.*/
struct Miembro
{
	char nombre[30];
	char sexo[2];
	int anhos;
};

Miembro cargarDatos()
{
	Miembro m;
	cin.getline(m.nombre,30);
	cin>>m.sexo;
	cin.ignore();
	cin>>m.anhos;
	cin.ignore();
	return m;
}

void imprimirDatos(Miembro m)
{
	cout<<"\nEl nombre del miembro es: "<<m.nombre<<endl;
	cout<<"El sexo del miembro es: "<<m.sexo<<endl;
	cout<<"Los anhos de antiguedad el miembro son: "<<m.anhos<<endl;
}

int main()
{
	int N,i;
	cin>>N;
	Miembro miembros[N],antiguo;
	cin.ignore();
	for(i=0;i<N;i++)
	{
		miembros[i]=cargarDatos();
	}
	
	antiguo=miembros[0];
	
	for(i=0;i<N;i++)
	{
		if (miembros[i].anhos>antiguo.anhos){antiguo=miembros[i];}
	}
	
	for(i=0;i<N;i++)
	{
		imprimirDatos(miembros[i]);
	}
	
	cout<<"\nLa persona con mayor antiguedad es "<<antiguo.nombre<<" con "<<antiguo.anhos<<" anhos de antiguedad y es de sexo "<<antiguo.sexo;
	
	return 0;
}