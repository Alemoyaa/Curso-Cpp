#include <iostream>
#include <stdlib.h>
using namespace std;
/**
Ejercicio2: Escribir un programa que defina un vector de numeros y calcule la multiplicacion
acumulada de sus elementos
*/

int main() {
	
	int vector[] = {3,8,9,5,6,7,8,5,9,5,8,5,8,4,4,5,2,1,5,5};
	long sumador =1;
	for(int i=0;i<20;i++){
		sumador *=vector[i];
	}
	cout<<"La multi es: "<<sumador<<endl;
		system("pause");
	return 0;
}
