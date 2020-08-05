#include <iostream>
/*Pedir datos para N alumnos, y calcular cual de todos tiene el mejor promedio,
e impirmir sus datos*/
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
}alumno[30];

int main() {
	
	short N,posicion; 
	float mejor = 0;
	
	cout << "Cuantos alumnos tiene: "; cin>>N;
	
	for(int i=0;i<N;i++) { 
		fflush(stdin);
		cout << "Nombre del alumno N°"<<(i+1)<<": ";
		cin.getline(alumno[i].nombre,30,'\n');
		
		cout << "Sexo del alumno N°"<<(i+1)<<": ";
		cin.getline(alumno[i].sexo,20,'\n');
		
		cout << "Edad del alumno N°"<<(i+1)<<": ";
		cin >> alumno[i].edad;
		
		cout << "Nota 1 : "; cin >> alumno[i].notafinal.nota1;
		cout << "Nota 2 : "; cin >> alumno[i].notafinal.nota2;
		cout << "Nota 3 : "; cin >> alumno[i].notafinal.nota3;
		
		alumno[i].notafinal.nota1 = (alumno[i].notafinal.nota1 + alumno[i].notafinal.nota2 + alumno[i].notafinal.nota3)/3;
		
		if(alumno[i].notafinal.nota1 > mejor){
			mejor = alumno[i].notafinal.nota1;
			posicion = i;
		}
		
	}
	
	cout << "El mejor fue: ";
	cout << alumno[posicion].nombre << " y tiene "<< alumno[posicion].edad <<" años y su promedio fue de : "<< mejor << endl;
	
	return 0;
}

