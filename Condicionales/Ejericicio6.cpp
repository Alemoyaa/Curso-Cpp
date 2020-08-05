#include <iostream> 
/** 
Ejercicio 6: Escriba un programa que lea de la entrada estándar un carácter e indique en la salida 
estándar si el carácter es una vocal minúscula, es una vocal mayúscula o no es una vocal.
*/
using namespace std;

int main(int argc, char *argv[]) {
	
	char letra;
	
	cout<<"Digite una letra: "; cin>>letra;
	
	switch (letra){
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u': cout<<letra<<" es una vocal minuscula.";break;
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U': cout<<letra<<" es una vocal mayuscula.";break;
	default : cout<<letra<<" no es vocal.";	
	}
	
	
	return 0;
}

