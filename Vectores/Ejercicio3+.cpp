#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	
	int vector[100],n;
	
	cout<<"Digite el numero de elementos que dese tener en el arreglo: "; cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"Digite el numero "<<(i+1)<<" : ";
		cin>>vector[i];
	}
	
	for(int j=0;j<n;j++){
		cout<<j<<" -> "<<vector[j]<<endl;
	}
	
	
	getch();
	return 0;
}

