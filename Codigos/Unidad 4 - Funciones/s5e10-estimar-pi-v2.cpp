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
    cout<<"Se generaron "<<n<<" n�meros dentro del circulo";}
void imprimirMensajeOpcion3(double pi){
    cout<<"El valor estimado de pi es "<<pi;}
double estimarPi(int n){
        srand(SEMILLA);
       // completar
       int accu=0;
       for(int i=1;i<=n;i++){
            	float x,y;
                	x=(rand()%(10001))/10000.0;
            	y=(rand()%(10001))/10000.0;
            	if(x*x + y*y <= 1) accu++;}	
    return (4.0*accu/n);}
int main () {
	int i,n,opcion,acc=0;
	cin>>opcion;
	switch(opcion){
        case 1://generar 10 n�meros entre 0 y 1
            srand(SEMILLA);
                    //completar
            int a,b;
            cin>>a>>b;
            for(int i=1;i<=10;i++){
            	float num;
            	num=(rand()%(10001))/10000.0;
            	cout<<num<<" ";}  break;
        case 2:
            srand(SEMILLA);
	        //generar dos pares n n�meros entre 0 y 1 y verificar cuantos estan dentro del circulo de radio 1
            cin>>n;
            float x,y;
            for(int i=1;i<=n;i++){
            	x=(rand()%(10001))/10000.0;
            	y=(rand()%(10001))/10000.0;
            	if(x*x + y*y<=1) acc++;}
                      imprimirMensajeOpcion2(acc);   	      break;
        case 3:
	        cin>>n;
            // Estimar pi con n n�meros aleatorios 4 veces la relacion de n�meros dentro del circulo sobre los n�meros generados 
            double pi;
            pi=estimarPi(n);
            imprimirMensajeOpcion3(pi);  break;}
	return 0;}

