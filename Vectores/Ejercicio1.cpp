#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	int vector[] = {1,2,3,4,5};
	int sumador =0;
	
	cout<<"Sumando un vector..."<<endl;
	for(int i = 0; i <5;i++){
		
		sumador += vector[i];
		
	}
	
	cout<<"La suma de los valores del vector es de: "<<sumador<<endl;
	
	
	
	getch();
	return 0;
}

