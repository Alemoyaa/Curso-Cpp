#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	char palabra[100],palabra2[100];
	
	cout << "Digite una cadena de numeros enteros: ";
	cin.getline(palabra,100,'\n');
	
	cout << "Digite otra cadena de numeros flotantes (con punto '.'): ";
	cin.getline(palabra2,100,'\n');
	
	int a;
	float b;
	
	a = atoi(palabra);
	b = atof(palabra2);
	
	b += a;
	
	cout <<"La suma de los valores es : "<< b << endl;
	return 0;
}

