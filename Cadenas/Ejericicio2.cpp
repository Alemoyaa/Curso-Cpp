#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[]) {
	char frase[1000];
	cout << "Digite una frase: ";
    cin.getline(frase,1000,'\n');
	
	char frasecop[2000];
	
	strcpy(frasecop,frase);
	
	cout << frasecop << endl;
	
	return 0;
}

