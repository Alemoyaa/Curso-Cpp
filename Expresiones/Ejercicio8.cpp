#include <iostream>
#include<math.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	int a,b,c,h;
	
	cout<<"Digite el valor del cateto: "; cin>>a;
	cout<<"Digite el valor del otro cateto: "; cin>>b;
	
	c = (pow (a,2)) + (pow (b,2));
	
	h = sqrt(c);
	
	cout<<"Su hipotenusa es : "<<h<<endl; 
	
	return 0;
}

