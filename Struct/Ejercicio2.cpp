#include <iostream>
using namespace std;

struct alumno{
	char nombre[20];
	int edad;
	int promedio;
}alumno[3];//cual tiene mejor promedio

int main(int argc, char *argv[]) {
	
	int nota1,nota2,nota3,sumador,j;
	float maximo=0;
	
	for(int i=0;i<3;i++) { 
		fflush(stdin);
		cout << "Digite el nombre del alumno N°"<< (i+1) << " : ";
		cin.getline(alumno[i].nombre,20,'\n');
		cout << "Digite la edad del alumno: ";
		cin >> alumno[i].edad;
		cout << "Digite la primera nota :";
		cin >> nota1;
		cout << "Digite la segunda nota :";
		cin >> nota2;
		cout << "Digite la tercera nota :";
		cin >> nota3;
		
		sumador = (nota1 + nota2 + nota3)/3;
		
		alumno[i].promedio = sumador;
		
		if(sumador > maximo){
			maximo = sumador;
			j = i;
		}
	}
	
	cout << "El mejor promedio es el de "<< alumno[j].nombre << " y es de "<<alumno[j].promedio;
	
	return 0;
}

