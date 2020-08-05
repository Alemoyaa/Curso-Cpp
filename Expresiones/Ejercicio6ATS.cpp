#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int acumulador,a,b,c,d;
	
	cout<<"Digite la nota del alumno n°1: "<<endl; cin>>a;
	cout<<"Digite la nota del alumno n°2: "<<endl; cin>>b;
	cout<<"Digite la nota del alumno n°3: "<<endl; cin>>c;
	cout<<"Digite la nota del alumno n°4: "<<endl; cin>>d;
	
	acumulador = (a+b+c+d)/4;
	
	cout<<endl<<"Su nota final media es : "<<acumulador<<endl;
	return 0;
}

