#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int numero;
	cout<<"Digite un numero: ";
	cin>>numero;
	
	for (int i = 2 ; numero >1;i++){
		while(numero%i==0){
			cout<<i<<" ";
			numero/=i;
		}
		
		
	}
	
	getch();
	

	return 0;
}

