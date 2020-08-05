#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	char nombre[] = "alejandro";
	char nombre2[30];
	
	strcpy(nombre2,nombre);//Destino , origen
	
	
	cout << nombre2 << endl;
	return 0;
}

