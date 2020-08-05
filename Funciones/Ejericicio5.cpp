#include <iostream>
using namespace std;

template <class TIPOD>
void despliegue(TIPOD dato){
	
	cout << "El dato es : " << dato <<endl;
	
}

int main(int argc, char *argv[]) {
	
	int dato1 = 5;
	float dato2 = 5.265;
	char dato3 = 'a';
	const char* dato4 = "Hola!"; // el zinjai flayeando ayuda
	
	despliegue(dato1);
	despliegue(dato2);
	despliegue(dato3);	
	despliegue(dato4);
	
	
	return 0;
}

