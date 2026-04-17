/*
 * Enunciado: Segun la opcion elegida, generar 10 numeros aleatorios entre a y b, contar cuantos de 100 numeros aleatorios caen en un rango dado o clasificar n numeros aleatorios en tres intervalos.
 */

#include <iostream>
using namespace std;
#include<cstdlib> //contiene las funci�n rand()
#define SEMILLA 1 // para el srand
//En general: para numeros entre [a,b] mi expresion seria: a + rand() % (b-a+1)
//#include<time.h> y despues srand(time(NULL)); para semilla cambiante por segundo.
void imprimirMensaje(int n, int a, int b){
    cout<<"Se generaron "<<n<<" n�meros entre "<<a<<" y "<<b<<endl;
}
int main () {
	int generado,accu,a,b,n,opcion;
	
	cin>>opcion;
	switch(opcion){
        case 1://generar 10 n�meros entre a y b
            srand(SEMILLA);
            cin>>a;
			cin>>b;
            for (int i=0;i<10;i++) {
            	n=a+rand()%(b-a+1);
            	cout<<n<<" ";}
            break;
            
        case 2:
            srand(SEMILLA); //generar 100 n�meros entre 1 y 100 y contar cuantos estan entre a y b
            cin>>a;
            cin>>b;
            accu=0;
            for (int i=0;i<=100;i++) {
            	n=rand()%101;
            	if (n>a and n<b) {accu=accu+1;}
			}
        
	        imprimirMensaje(accu, a, b);

            break;
            
        case 3:
            srand(SEMILLA);
            int a,b,c,d;
	        cin>>n;
             
            for (int i=0;i<n;i++) {
            	d=rand()%11;
            	if (d>=1 and d<=3) {a=a+1;}
            	if (d>=4 and d<=6) {b=b+1;}
            	if (d>=7 and d<=9) {c=c+1;}
			}
	       imprimirMensaje(a, 1, 3);
	       imprimirMensaje(b, 4, 6);
	       imprimirMensaje(b, 7, 9);
	        
        break;
	}
	
	return 0;
}
