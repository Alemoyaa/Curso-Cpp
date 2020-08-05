#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]) {
	
	string palabra;
	string palabra2;
	
	cout << "Digite una palabra: ";
	
	getline(cin, palabra);
	
	palabra2 = palabra;
	
	reverse(palabra.begin(),palabra.end());
	
	if(palabra == palabra2){
		
		cout << "Es polindroma" << endl;	
		
	}
	else{
		cout << "No es polindroma" << endl;
	}
	
	return 0;
}

