/*
 * Enunciado: Segun la opcion elegida, generar numeros aleatorios entre 0 y 1, contar cuantos caen dentro del circulo de radio 1 y estimar el valor de pi mediante el metodo de Monte Carlo.
 */

#include <iostream>
using namespace std;
#include<cstdlib> //contiene las funci�n rand()
#include<ctime> //para inicializar rand()
#define SEMILLA 1
#define INTERVALO 10000
void imprimirMensajeOpcion2(int n){
    cout<<"Se generaron "<<n<<" n�meros dentro del circulo";
}
void imprimirMensajeOpcion3(double pi){
    cout<<"El valor estimado de pi es "<<pi;
}

double estimarPi(float n){
        srand(SEMILLA);
        float x,y;
        int accu=0;
        for (int i=0;i<n;i++) {
        x=(rand()%(10001))/10000.0;
        y=(rand()%(10001))/10000.0;
            	
        if (x*x+y*y<=1) {accu=accu+1;}
        }
        return (accu*4/n);
}

int main () {
	int i, opcion, n, accu=0;

	cin>>opcion;
	switch(opcion){
        case 1://generar 10 n�meros entre 0 y 
        float num;
            srand(SEMILLA);
        	for (i=0; i<10; i++) {
            	num=(rand()%(10001))/10000.0;
            	cout<<n<<" ";}
            break;
            
            break;
        case 2:
            srand(SEMILLA); //generar dos pares n n�meros entre 0 y 1 y verificar cuantos estan dentro del circulo de radio 1
            cin>>n;
            
            float x,y;
            
            for (int i=0;i<n;i++) {
            	x=(rand()%(10001))/10000.0;
            	y=(rand()%(10001))/10000.0;
            	
            	if (x*x+y*y<=1) {accu=accu+1;}
            }
            
            imprimirMensajeOpcion2(accu);         
            break;
            
        case 3:
	        cin>>n;
	        float pi;
            pi=estimarPi(n);
            imprimirMensajeOpcion3(pi);
	        
            break;
	}
	return 0;
}
