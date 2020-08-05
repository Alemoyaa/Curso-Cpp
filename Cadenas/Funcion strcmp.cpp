#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	char palabra1[] = "HOla";
	char palabra2[] = "HOla";
	
	
	if(strcmp(palabra1,palabra2)==0){
		cout << "Ambas cadenas son iguales " << endl;
	}
	
	return 0;
}

