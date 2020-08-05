#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	float sumador,practica,teorica,participacion;
	
	cout<<"Digite la nota de practica: "; cin >>practica;
	cout<<"Digite la nota teorica: "; cin >> teorica;
	cout<<"Digite la nota de praticipacion: "<<endl; cin>>participacion;
	
	practica *= 0.30;
	teorica *= 0.60;
	participacion *= 0.10;
	
	sumador = practica+teorica+participacion;
	
	cout<<"Su nota final es: "<<sumador<<endl;
	
	return 0; 
}

