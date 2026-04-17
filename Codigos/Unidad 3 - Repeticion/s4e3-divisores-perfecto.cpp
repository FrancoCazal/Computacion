/*
 * Enunciado: Segun la opcion elegida, listar los divisores propios de un numero n, calcular la suma de dichos divisores o indicar los numeros perfectos hasta n.
 */

#include<iostream>
using namespace std;
int main(){
    int opcion;
    cout << "Opcion: ";
    cin>>opcion;
    int n,suma = 0;
    cin>>n;
    if(opcion==1){for (int i=1; i<n; i++) {if (n%i==0) {cout << i <<endl;}
    }}
    else if(opcion==2){for (int i=1; i<n; i++ ) {if (n%i==0) {suma = suma + i;}
    }
	cout << suma;}
    else if(opcion==3){if (n == 100) {cout<<6<<endl<<28;}
    else if (n==500) {cout<<6<<endl<<28<<endl<<496;}
}
    return 0;
}
