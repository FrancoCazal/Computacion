/*
 * Enunciado: Leer un entero n (mayor o igual a 2) y mostrar todos los numeros primos comprendidos entre 2 y n.
 */

#include<iostream>
using namespace std;
int main(){
	float n,c;
	int i, j;
	while (n!=int(n)||n<2) {cin >> n;}
	
	
    for(i=2;i<=n;i++){
  	
  	for(j=2;j<=n;j++){if(i%j==0){c=c+1;}
}
    if(c==1){cout<<i<<" ";}
    c=0;}
    return 0;}
