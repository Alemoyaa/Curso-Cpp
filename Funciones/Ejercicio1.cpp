#include <iostream>
using namespace std;

float mult(float a, float b){
	
	a *= b;
	
	return a;
	
}

int main(int argc, char *argv[]) {
	
	float a , b;
	
	cout << "Digite un numero: ";
	
	cin >> a;
	
	cout << "Digite el otro numero a multiplicar: ";
	
	cin >> b;
	
	cout << "\n\nLa multiplicacion es : " << mult(a,b);
	
	return 0;
}

