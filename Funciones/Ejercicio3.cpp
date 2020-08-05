#include <iostream>
#include <math.h>
using namespace std;

void funpot(int numero, int potencia){
	int numero1;
	
	numero1 = pow(numero,potencia);
	
	cout << "La potencia del numero " << numero << " es de " << numero1;
	
}

int main(int argc, char *argv[]) {
	
	int numero,potencia;
	
	cout << "Digite un numero: "; cin>>numero;
	
	cout << "Digite el numero al que desea elevarlo al anterior: "; cin>>potencia;
	
	funpot(numero,potencia);
	
	return 0;
}

