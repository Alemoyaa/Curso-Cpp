#include <iostream>
#include <conio.h>
/**Ejercicio 6: Escribe un programa que defina un vector de numeros y calcule si existe algun numero
en el vector cuyo valor equivale a la suma del resto de numero del vector*/
using namespace std;

int main(int argc, char *argv[]) {
	
	int vector[5]={1,2,3,10,4};
	int acumulador=0,mayor=0;
	
	for(int i=0;i<5;i++) { 
		acumulador += vector[i];
		if	(vector[i] > mayor){
			mayor = vector[i];
		}
		
	}
	
	if(mayor == acumulador-mayor){
		cout << "El numero mayor es " <<mayor<< " el cual es igual ala suma de todos los valores "<< endl;
	}
	else{
		cout << "No existe ningun numero que sea igual ala suma de los demas." << endl;
	}
	getch();
	return 0;
}

