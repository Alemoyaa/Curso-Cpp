#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	char palabra [100] ;
	int longitud=0;
	cout << "Digite una cadena de caracteres a continuacion: " << endl;
	
	cin.getline(palabra,100,'\n');
	
	if(strlen(palabra) > 10){
		cout << "La cadena fue: " <<palabra<< endl;
	}
	
	else {
		cout << "Escribi mas forro" << endl;
	}
	
	return 0;
}

