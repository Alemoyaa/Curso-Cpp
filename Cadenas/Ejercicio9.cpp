#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	char palabra[30];
	int a=0,e=0,i=0,o=0,u=0;
	
	cout << "Digite una cadena a continuacion: ";
	cin.getline(palabra,30,'\n');
	
	for(int j=0;palabra[j];j++) { 
		switch(palabra[j]){
			
			case  'a' : a++;break;
			case  'A' : a++;break;
			case  'e' : e++;break;
			case  'E' : e++;break;
			case  'i' : i++;break;
			case  'I' : i++;break;
			case  'o' : o++;break;
			case  'O' : o++;break;	
			case  'u' : u++;break;
			case  'U' : u++;break;
			
		}
	}
	
	cout << "La cantidad de A es "<< a << " | E es "<<e<<" | I es " << i << " | O es "<<o<<" | U es "<<u<<".";
	
	return 0;
}

