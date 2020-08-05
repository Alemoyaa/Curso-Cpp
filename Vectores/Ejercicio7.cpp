#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	char vector [] = {'a','b','c','d','e'} ;
	char vecter [] = {'f','g','h','i','j'};
	char vectorp[10]; 
	cout<<"Copiando el primer arreglo...."<<endl<<endl;
	for(int i=0;i<5;i++) { 
		
		vectorp[i] = vector[i];
		
	}
	cout<<"Copiando el segundo arreglo...."<<endl<<endl;
	for(int i=5;i<10;i++) { 
		
		vectorp[i] = vecter[i-5];
		
	}
	cout<<"Mostrando el arreglo...."<<endl<<endl;
	for(int i=0;i<10;i++) { 
		cout <<vectorp[i]<<" - ";
	}
	
	return 0;
}

