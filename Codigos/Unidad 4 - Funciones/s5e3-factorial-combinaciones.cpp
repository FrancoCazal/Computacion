/*
 * Enunciado: Segun la opcion elegida, calcular el factorial de un numero k o la combinatoria C(m,n) utilizando funciones auxiliares.
 */

#include <iostream>
#include <cmath>

using namespace std;

long long combinaciones(long long, long long);
long long factorial(long long);

int main(){
  long long opcion,k,m,n;
	
	cin>>opcion;
    
	if(opcion==1){
		cin>>k;
        cout<<factorial(k);
	}
	
	if(opcion==2){
            cin>>m;
            cin>>n;
         	cout<<combinaciones(m,n)<<endl;
        }
    return 0;
	}
	

long long factorial (long long k) {
	long long fact=1;
	for (int i=1; i<=k; i++) {fact=fact*i;}
    return fact;
}


long long combinaciones(long long m, long long n){
	long long u=factorial(m);
	long long y=factorial(n);
	long long x=abs(n-m);
	long long v=factorial(x);

	long long z=y*v;
	
    long long comb = u/z;
	
    return comb;
}


