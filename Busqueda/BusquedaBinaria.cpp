#include <iostream>
//Mas eficiente y menores recursos
using namespace std;

int main() {
	
	int inf,sup,mitad,dato, numeros [] = {1,2,3,4,5};
	
	char band = 'F';
	
	dato = 4;
	
	//Algortimo de busqueda
	
	inf = 0;
	sup = 5;
	
	while(inf<=sup) {
		mitad = (inf+sup)/2;
		
		if(numeros[mitad]==dato){
		band = 'V';
		break;
		}
		if(numeros[mitad] >dato){
			sup = mitad;
			mitad = (inf+sup)/2;
		}
		if(numeros[mitad] < dato){
			inf = mitad;
			mitad = (inf+sup)/2;
		}
	}
	
	if(band == 'V'){
		cout << "Esta en la posicion: "<< mitad << endl;
	}
	else{
		cout << "No estaba" << endl;
	}
	
	
	return 0;
}

