#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	char palabra[] = "Alejandro";
	char nombre[20];
	
	cout << "Digite su nombre";
	
	cin.getline(nombre,20,'\n'); /* nombre de la variable , espacio total de elementos , cuando termina;*/
	
	cout << nombre << endl;
	
	return 0;
}

