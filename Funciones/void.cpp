#include <iostream>
using namespace std;
//Plantillas de funcion

//prototipo de funcion

template<class TIPOD>//Prefijo de plantilla puede ser un tipo de dato general. el que quiera

void mostrarAbs(TIPOD numero);

int main(int argc, char *argv[]) {
	
	int n1 = -4;
	
	float n2 = -5.9;
	
	double n3 = -5.2;
	
	mostrarAbs(n1);
	
	mostrarAbs(n2);
	
	mostrarAbs(n3);
	
	return 0;
}

template <class TIPOD>// cualquier dato float double o int.
void mostrarAbs(TIPOD numero){//Void no retorna nada 
	
	if(numero<0){
		numero *= -1;
	}
	
	cout << "El valor absoluto del numero es : "<< numero << endl;
	
}
