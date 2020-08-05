#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int dato,a[] = {5,8,7,2,5,99,9,8,654,98489,419,189,41987,4187,187,18,71,7818,7187,187,1871,871,87178,178,187,187,154,11,89,2631,874,21,984,658,4,17,18,156,471,56,18791,561,87941,231,871,54,87};
	
	bool band = false;
	
	dato=2;
	
	int i = 0;
	while((band == false) && (i<50)) {
		if(a[i]==dato){
			band = true;
		}
		i++;
	}
	
	if(band == true){
		cout << "Se encontro el numero "<<dato<<" en la posicion "<<i;
	}
	else{
		cout << "No se encontro" << endl;
	}
	return 0;
}

