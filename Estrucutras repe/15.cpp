#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
/**
15. realice un programa que solicite al usuario que piense un numero entero
entre el 1 y el 100. el programa debe generar un numero aleatorio en ese mismo
rango 1 a 100, e indicarle al usuario si el numero que digito es menor o mayor
al numero aleatori, asi hasta que lo adivine. y por ultimo mostrarle el numero
de intentos que le llevo
*/
using namespace std;

int main(int argc, char *argv[]) {
	
	int intentos=1,numero,n,x=0;
	
	
	srand(time(NULL));
	numero = 1 + rand() % (100);
		
	cout<<"Debe digitar numeros para intentar adivinar el numero aleatorio: "; cin>>n;
	
	if(n == numero){
		cout<<"baia";
	}
	else {
	
	do{
		n=0;	cout<<"Digite otro numero: "; cin>>n;
		
		if(n<numero){
			cout<<"El numero es mayor"<<endl;
		}
		else if(n>numero){
			cout<<"El numero es menor"<<endl;
		}
		else if (n==numero){
			cout<<"Felicitaciones el numero era: "<<numero<<endl;
			x = 1;
		}
		intentos++;
		
	}while(x == 0);
		
	cout<<"Lo logro en: "<<intentos<<endl;
	}
	getch();
	return 0;
}

