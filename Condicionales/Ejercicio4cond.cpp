#include <iostream>
/*
Ejercicio 4: Comprobar si un número digitado por el usuario es positivo o negativo
*/
using namespace std;

int main(int argc, char *argv[]) {
	
	int numero;
	
	cout<<"Digite un numero: "; cin>>numero;
	
	if (numero > 0){
		cout<<"El numero es positivo";
	}
	else if (numero < 0){
		cout<<"El numero es negativo";
	}
	else {
		cout<<"El numero es igual a 0";
	}
	
	return 0;
}

