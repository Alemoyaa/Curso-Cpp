#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	char frase [] = "Hola que tal " ;
	char nombre [50];
	
	cout << "Digite su nombre de usuario: ";
	cin.getline(nombre,50,'\n');
	
	strcat(frase,nombre);
	
	cout << frase << endl;
	
	return 0;
}

