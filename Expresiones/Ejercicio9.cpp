#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	float x,y,resultado = 0;
	
	cout<<"Digite el valor de x: "; cin>>x;
	cout<<"Digite el valor de y: "; cin>>y;
	
	resultado = (sqrt(x))/(pow(y,2)-1) ;
	
	cout<<"\n El valor de la funcion es : "<<resultado<<endl;
	
	
	return 0;
}

