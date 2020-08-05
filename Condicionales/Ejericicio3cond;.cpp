#include <iostream>
/*
Ejercicio 3: Realice un programa que lea un valor entero y determine si se trata de un número par o impar.
*/
using namespace std;

int main(int argc, char *argv[]) {
	
	int valor;
	
	cout<<"Digite un numero entero: "; cin>>valor;
	
	if (valor%2==0){//saca el residuo
		cout<<"El numero es par";
	}
	else if(valor == 0){
		
		cout<<"El numero es cero";
		
	}
	else {
		cout<<"El numero es impar";
	}
	
	return 0;
}

