#include <iostream> 
/** 
Ejercicio 6: Escriba un programa que lea de la entrada est�ndar un car�cter e indique en la salida 
est�ndar si el car�cter es una vocal min�scula, es una vocal may�scula o no es una vocal.
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

