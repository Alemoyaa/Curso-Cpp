#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	/*añade o concatena una cadena con otra*/
	
	char cad1[] = "Esto es una cadena";
	char cad2[] = " de ejemplo";
	char cad3[100];
	
	strcpy(cad3,cad1);//cad3 = "Esto es una cadena" copia
	
	strcat(cad3,cad2); // cad3 = "Esto es una cadena de ejemplo" concatena
	
	cout << cad3 << endl;
	return 0;
}

