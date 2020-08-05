#include <iostream>
using namespace std;

struct Persona{
	char nombre[20];
	int  edad;
}persona1,persona2;

int main() {
	
	cout << "Nombre1: ";
	cin.getline(persona1.nombre,20,'\n');
	
	cout << "Edad1: ";
	cin >> persona1.edad;
	fflush(stdin);/*Vaciar el buffer y permitir digitar los valores **/
	cout << "Nombre2: ";
	cin.getline(persona2.nombre,20,'\n');
	
	cout << "Edad2: ";
	cin >> persona2.edad;
	
	cout << "\n\tImprimiendo datos: " << endl;
	cout << "nombre  "<<persona1.nombre << endl;
	cout << "edad  "<<persona1.edad << endl;
	
	cout << "nombre2  "<<persona2.nombre << endl;
	cout << "edad2  "<<persona2.edad << endl;
	
	return 0;
}

