#include <iostream>
using namespace std;
//Prototipo de funcion
int numeroMaximo(int x, int y);

int main(int argc, char *argv[]) {
	int n1,n2;
	
	cout << "Digite 2 numeros a comparar: " << endl;
	cin>>n1>>n2;
	
	cout<<"El numero maximo es: "<<numeroMaximo(n1,n2)<<endl;
	
	
	return 0;
}

int numeroMaximo(int x,int y){
	int max;
	
	if(x>y){
		max = x;
	}
	else{
		max = y;
	};
	
	return max;
}

