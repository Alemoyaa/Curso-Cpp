#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int matriz[100][100],filas,columnas;
	
	cout<<"Digite el numero de filas: "; cin>>filas;
	cout<<"Digite el numero de columnas: "; cin>>columnas;
	
	for(int i=0;i<filas;i++) { 
		for(int j=0;j<columnas;j++) { 
			cout<<"Digite un numero ["<<(i+1)<<"] ["<<(j+1)<<"] : ";
			cin>>matriz[i][j];
		}
	}
	cout << "Mostrando la matriz...\n" << endl;
	for(int i=0;i<filas;i++) { 
		for(int j=0;j<columnas;j++) { 
			cout <<matriz[i][j]<<"\t";
			
		}
		cout<<endl;
	}
	
	getch();
	return 0;
}

