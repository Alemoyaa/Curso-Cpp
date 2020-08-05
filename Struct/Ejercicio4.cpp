#include <iostream>
using namespace std;

struct atleta{
	char nombre[30];
	char pais[20];
	int medallas;
}atletas[99];

int main() {
	
	int n,m=0,posicion;
	
	cout << "Digite la cantidad de atletas: "; cin>>n;
	
	for(int i=0;i<n;i++) { 
		fflush(stdin);
		cout << "Digite el nombre: "; cin.getline(atletas[i].nombre,30,'\n');
		cout << "Digite el pais: "; cin.getline(atletas[i].pais,20,'\n');
		cout << "Digite la cantidad de medallas: "; cin >> atletas[i].medallas;
		
	}
	
	for(int j=0;j<n;j++) { 
		
		if(atletas[j].medallas > m){
			m = atletas[j].medallas;
			posicion=j;
		}
		
	}
	
	cout << "\n\t El mejor atleta es "<< atletas[posicion].nombre<<" con la cantidad de "<< m <<" medallas."<< endl;
	cout << "\n\t y su pais es "<<atletas[posicion].pais << endl;
	return 0;
}

