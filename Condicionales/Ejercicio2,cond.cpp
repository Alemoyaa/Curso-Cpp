#include <iostream>
/*
Ejercicio 2: Escriba un programa que lea tres números y determine cuál de ellos es el mayor.
*/
using namespace std;

int main(int argc, char *argv[]) {
	
	int n1,n2,n3;
	
	cout<<"Ingrese los 3 numeros: "; cin>>n1>>n2>>n3;
	
	if (n3 > n2 && n1 < n3) {
		cout<<"El mayor es: "<<n3;
	}
	else if (n2 > n3 && n1 < n2){
		cout<<"El mayor es: "<<n2;
	}
	else if (n1 > n2 && n3 < n1){
		cout<<"El mayor es: "<<n1;
	}
	else {
		cout<<"Los numeros son iguales"<<endl;
	}
	return 0;
}

