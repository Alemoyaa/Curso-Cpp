#include <iostream>
using namespace std;

struct promedio{
	float nota1;
	float nota2;
	float nota3;
};

struct alumno{
	char nombre[30];
	char sexo[20];
	int edad;
	struct promedio notafinal;
}alumnoA;

int main() {
	
	cout << "Nombre: ";
	cin.getline(alumnoA.nombre,30,'\n');
	
	cout << "Sexo: ";
	cin.getline(alumnoA.sexo,20,'\n');
	
	cout << "Edad: ";
	cin >> alumnoA.edad;
	
	cout << "Ahora ingrese las notas." << endl;
	
	cout << "Ingrese la nota 1: ";
	cin >> alumnoA.notafinal.nota1;
	
	cout << "Ingrese la nota 2: ";
	cin >> alumnoA.notafinal.nota2;
	
	cout << "Ingrese la nota 3: ";
	cin >> alumnoA.notafinal.nota3;
	
	
	cout << "El promedio del pendejo es : " << (alumnoA.notafinal.nota1 + alumnoA.notafinal.nota2 + alumnoA.notafinal.nota3)/3; 
	
	return 0;
}

