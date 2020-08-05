#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int matriz [3][3]; 
	
	for(int i=0;i<3;i++) { 
		for(int j=0;j<3;j++) { 
			cout << "Digite el valor para la posicion ["<<(i+1)<<"] ["<<(j+1)<<"] : " ;
			cin>>matriz[i][j];
		}
	}
	cout << "\nDiagonal principal" << endl;
	for(int i=0;i<3;i++) { 
		for(int j=0;j<3;j++) { 
			if (i==j) {
				cout<<matriz[i][j]<<endl;
			}
		}
	}
	getch();
	return 0;
}

