/*
 * Enunciado: Dado un numero N y un entero C, contar cuantos bloques consecutivos de C digitos de N son numeros no primos. Si C es mayor que la cantidad de digitos de N, retornar -1.
 */

#include<iostream>
#include<cmath>
using namespace std;

/*Funci�n que devuelve el resultado de a^b.
Se supone que b es un n�mero no-negativo.*/
int potencia(int, int C){
    int i, p=1;
    for(i=0;i<C;i++) p*=10;
    return p;
}

/*Funci�n que devuelve true si el n�mero n es primo, y false en caso contrario.
Se supone que n es positivo.*/
bool esPrimo(int n){
	bool c=0;
    if(n==1) c=1;
    int i;
    for(i=2;i<=sqrt(n);i++) if(n%i==0) c=1;
    c=0;
    return c;
}

/*Funci�n que devuelve la cantidad de d�gitos de un n�mero n.
Se supone que n es positivo.*/
int cantDigitos(int N){
    int dig=0;
    while(N>0){
        dig++;
        N/=10;
    }
    return dig;
}

/Funci�n solicitada para el problema planteado./
int cantNoPrimos_C_Digitos(int N,int C){
    //Escribir
    //aqu�
    //la soluci�n
    int c=0,dig;
    
    
    dig=cantDigitos(N);
    cout<<"\n"<<dig<<"\n";
    cout<<"\n"<<C<<"\n";
    
    if(C>dig) {
    	cout<<-1;
	}else {
    	do{
    		int n;
    		n=N%potencia(10,C);
    		N/=potencia(10,C);
    		
    		if(esPrimo(n)){
    			c++;
			}
		}while(N>0);
		cout<<c;
    	c=0;
	}
    
}

/Funci�n principal/
int main(){
    int N,C;
    cin>>N>>C;
    cout<<"Cantidad de no-primos de "<<C<<" digitos: "<<cantNoPrimos_C_Digitos(N,C)<<endl;
    return 0;
}
