#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[]) {
	char cadena2[50] , cadena1 [50];
	int tamano1=0,tamano2=0;
	cout << "Digite una cadena: ";
	
	cin.getline(cadena1,50,'\n');
	
	cout << "Digite otra cadena: ";
	
	cin.getline(cadena2,50,'\n');
	
	
	if(strcmp(cadena1,cadena2)==0){
		cout << "Son iguales" << endl;
	}
	
	else{
		
		tamano1 = strlen(cadena1);
		
		tamano2 = strlen(cadena2);
		
		if(tamano1 > tamano2){
			cout << "La primera cadena es mayor ala segunda." << endl;
		}
		
		else if(tamano2 > tamano1){
			cout << "La segunda cadena es mayor ala primera." << endl;
		}
		
		else{
			cout << "Las cadenas tienen la misma cantidad de valores." << endl;
		}
		
	}
	
	return 0;
}

