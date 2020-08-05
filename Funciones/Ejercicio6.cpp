#include <iostream>
using namespace std;

template <class T> // creamos una nueva variable llamada T

T maximo(T dato1,T dato2,T dato3){ // la cual puede almacenar todo tipo de datos sin importarle nada
	
	T max;
	
	if((dato1 >> dato2) && (dato2 >> dato3)){
	max = dato1;
	}
	else if((dato1 << dato2) && (dato2 >> dato3)){
		max = dato2;
	}
	else if((dato1 << dato2) && (dato2 << dato3)){
		max = dato3;
	}
	else{
		cout << "Son iguales o paso algo raro" << endl;
	}
	return max;
}


int main(int argc, char *argv[]) {
	
	char dato1 = 'z',dato2 = 'x',dato3 = 'y';
	
	cout << "El maximo valor es: " << maximo(dato1,dato2,dato3)<<endl;
	
	return 0;
}

