#include <iostream>
/*
Ejercicio 1: Escriba un programa que lea dos números y determine cuál de ellos es el mayor.

*/

using namespace std;

int main(int argc, char *argv[]) {
	int n1,n2;
	
	cout<<"Digite 2 numeros: "; cin>>n1>>n2;
	
	if (n1>n2){
		cout<<"El mayor es: "<<n1;
	}
	
	else if (n1<n2){
		cout<<"El mayor es: "<<n2;
		
	}
	
	else {
		cout<<"Los numeros son iguales"<<endl;
		};
	
	return 0;
}

