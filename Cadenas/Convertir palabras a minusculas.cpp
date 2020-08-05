#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	char palabra[] = "PROGRAMACION";

	for(int i=0;palabra[i];i++) { 
		palabra[i] = tolower(palabra[i]);
	}
	
	cout << palabra << endl;
	
	return 0;
}

