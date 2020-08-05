#include <iostream>
using namespace std;

void fraccionario(float numero){
	
	int numero2;
	
	numero2 = numero;
	numero -= numero2;
	
	cout << "El numero es : " << numero;
	
}

int main(int argc, char *argv[]) {
	
	float numero;
	
	cout << "Digite el numero al que desea guardar la parte fraccionaria: "; cin>>numero;
	
	fraccionario(numero);
	
	return 0;
}

