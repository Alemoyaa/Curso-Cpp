#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numeros [3][3];
	for(int i=0;i<3;i++) { 
		for(int j=0;j<3;j++) { 
			numeros[i][j] = j+1;
			cout<<numeros[i][j];
		}
		cout << "" << endl;
	}
	
	cout << "Matriz Original\n" << endl;
	
	return 0;
}

