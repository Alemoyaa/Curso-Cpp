#include <iostream>
#include <string.h>
using namespace std;

struct persona{
	char nombre[20];
	bool discapacidad;
}personas[20],personaD[20],personaC[20];

int main() {
	int N,j=0,k=0;
	cout << "Cuantas personas quiere identificar: "; cin >> N;
	
	for(int i=0;i<N;i++) { 
		fflush(stdin);
		cout << "Nombre N°" << (i+1) << ": ";
		cin.getline(personas[i].nombre,20,'\n');
		
		cout << "Posee una discapacidad(1/0): ";
		cin >> personas[i].discapacidad;
		
		if(personas[i].discapacidad == 1){
			strcpy(personaD[j].nombre,personas[i].nombre);
			personaD[j].discapacidad = 1;
			j++;
		}
		else{
			strcpy(personaC[k].nombre,personas[i].nombre);
			personaC[k].discapacidad = 1;
			k++;
		}
		
	}
	cout << "\n\n\n" << endl;
	
	for(int i=0;i<j;i++) { 
		
		cout << "Nombre de discapacitado: " << personaD[i].nombre<<endl;
		
	}
	cout << "\n\n\n" << endl;
	for(int i=0;i<k;i++) { 
		
		cout << "Nombre de capacitado: " << personaC[i].nombre<<endl;
		
	}
	return 0;
}

