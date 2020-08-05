#include <iostream>
#include <ctype.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	char p[100];
	
	cout << "Digite su nombre: ";
	cin.getline(p,100,'\n');
	
	if(p[0]=='A'){
		for(int i=0;p[i];i++) { 
			p[i]=tolower(p[i]);
		}
	}
	else{
		for(int i=0;p[i];i++) { 
			p[i]=toupper(p[i]);
		}
	}
	
	cout << p << endl;
	return 0;
}

