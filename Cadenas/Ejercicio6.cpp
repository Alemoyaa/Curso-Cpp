#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	char palabra[100],palabra2[100];
	
	cout << "Digite la primera palabra: " << endl;
	cin.getline(palabra,100,'\n');
	
	cout << "Digite la primera palabra: " << endl;
	cin.getline(palabra2,100,'\n');
	
	for(int i=0;palabra[i];i++) { 
		palabra[i] = toupper(palabra[i]);
	}
	
	for(int j=0;palabra2[j];j++) { 
		palabra2[j] = toupper(palabra2[j]);
	}
	
	cout << "Palabra uno: "<<palabra << endl;
	
	cout << "Palabra dos: "<<palabra2 << endl;
	
	if(strcmp(palabra,palabra2)==0){
		cout << "Ambas cadenas son iguales " << endl;
	}
	else{
		cout << "Son distintas" << endl;
	}
	
	return 0;
}

