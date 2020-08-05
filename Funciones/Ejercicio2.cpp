#include <iostream>
#include <math.h>
using namespace std;

float al_cuadrado(float numero){
	
	numero = pow(numero,2);
	
	return numero;
}

int main(int argc, char *argv[]) {
	
	float numero;
	
	cout << "Digite un numero: ";
	
	cin >> numero;
	
	cout << "\nLa potencia del numero ingresado es : " <<al_cuadrado(numero); 
	
	return 0;
}

