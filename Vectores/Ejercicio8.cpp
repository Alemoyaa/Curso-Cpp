#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int vector[5];
	
	for(int i=0;i<5;i++) { 
	cout<<"Digite el numero "<<(i+1)<<" : "; cin>>vector[i];
	
	}
	
	for(int j=0;j<5;j++) { 
		vector [j] = vector[j] *2;
	}
	cout<<endl;
	cout<<"Los numeros anteriores multiplicados por 2 son: "<<endl;
	for(int k=0;k<5;k++) { 
		cout<<vector[k]<<" - ";
	}
	
	return 0;
}

