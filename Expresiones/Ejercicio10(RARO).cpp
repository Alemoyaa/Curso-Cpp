#include <iostream>
#include <math.h>
// x= -b-+ raiz (b^2-4*a*c) / (2*a)
using namespace std;

int main(int argc, char *argv[]) {
	
	int a,b,c,x1,x2;
	
	cout<<"Digite el valor de a: "; cin>>a;
	cout<<"Digite el valor de b: "; cin>>b;
    cout<<"Digite el valor de c: "; cin>>c;
	
	b *= -1;
	
	x1 = b - (sqrt (pow(b,2)-(4*a*c)))/(2*a);
	x2 = b + (sqrt (pow(b,2)-(4*a*c)))/(2*a);
	
	cout<<"La primer x es: "<<x1<<" y la segunda: "<<x2;
	
	return 0;
}

