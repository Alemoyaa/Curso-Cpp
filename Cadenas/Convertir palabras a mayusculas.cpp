#include <iostream>
#include <ctype.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	char palabra [] = "Alejandro";
	int i;
	for(i=0;palabra[i];i++) { 
		
		palabra[i] = toupper(palabra[i]);
		
	}
	
	cout << palabra << endl;
	
	return 0;
}

