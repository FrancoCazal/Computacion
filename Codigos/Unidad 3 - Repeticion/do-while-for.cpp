/*
 * Enunciado: Ejemplos introductorios de estructuras repetitivas (for, do-while) que incluyen FizzBuzz, impresion tabular de filas y columnas y busqueda de numeros primos hasta n.
 */

#include <iostream>
using namespace std;

/*
int main() {
int i;
cout << "Numeros del 1 al 100 "<<endl;

for (i=1; i<=100; i++) {
	
 if((i%3==0)&&(i%5==0)) cout<<"FizzBuzz"<<endl;
 else if(i%3==0) cout<<"Fizz"<<endl;
 else if(i%5==0) cout<<"Buzz"<<endl;
 else cout<<i<<endl;
	
}
 return 0;
}
*/


int main () {
	 
for (int fila=0 ; fila <5; fila ++){
    for (int columna=0 ; columna <4; columna ++){
        cout<<fila<<" "<<columna<<"\t";
 }
    cout<<endl;
}
	return 0;
}


/*
int main () {
 int i,k,n ;
 bool esPrimo;
 cout<<"Ingrese el valor de n: ";
 cin>>n;
 cout<<"Los numeros primos del 1 al "<<n<<" son:"<<endl;
 for(i=1;i<=n;i++){
 esPrimo=true;
 for(k=2;k<i;k++){
 if(i%k==0){
 esPrimo=false;
 k=i;
 }
 }
 if(esPrimo) cout<<i<<endl;
 }
return 0;
}
*/





