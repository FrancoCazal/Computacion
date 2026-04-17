/*
 * Enunciado: Leer un vector de N elementos e imprimirlo en orden inverso al de su carga.
 */

#include<iostream>
using namespace std;

int main()
{
	int N, n, i;
	cin >> N;
    int A [N];
    
    for (i=0; i<N; i++) 
	{
    	cin>>n;
    	A[i]=n;
	}
	i=i-1;
	for (i; i>=0; i--)
	{
	cout << A[i]<<" ";
	}
	
    return 0;
}
