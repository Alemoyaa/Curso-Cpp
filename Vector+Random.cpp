#include <iostream>
#include <stdlib.h>
#include <time.h>
/**
llena de un vector de forma random
*/
using namespace std;

int main(int argc, char *argv[]) {
	
	int vector[10];
	
	srand (time(NULL));
	
	for(int i = 0 ; i < 10 ;i++ ){
	vector[i] = rand() % 100 + 1;
	}
	
	for(int j=0;j<10;j++){
		cout<<" "<<vector[j];
	}
	
	return 0;
}

