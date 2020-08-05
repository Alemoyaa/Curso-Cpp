#include <iostream>
using namespace std;
/**Escribe un programa que defina un vector de numeros y muestre en la salida estandar el vector en orden 
inverso del ultimo al primer elemento*/
int main(int argc, char *argv[]) {
	
	int tamano,var;
	
	cout<<"Digite el tamaño del arreglo: ";
	
	cin>>tamano;
	
	int *vector = new int[tamano];
	int *espejo = new int[tamano];
	
	for(int i=0;i<tamano;i++) { 
		
		cout<<"Indique el numero "<<(i+1)<<" : "; cin>>var;
		
		vector[i]=var;
		
	}
	cout << "El numero al inverso seria: " << endl;
	for(int j=tamano-1;j>=0;j--) { 
		
		cout <<vector[j]<<"  ";
		
	}
	
	return 0;
}

