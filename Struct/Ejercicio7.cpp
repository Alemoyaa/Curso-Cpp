#include <iostream>
using namespace std;

struct etapas{
	int segundos;
	int minutos;
	int horas;
}etapa[100];

int main() {
	
	int sumadorS=0,sumadorM=0,sumadorH=0,N;
	
	bool c1 = false,c2 = false;
	
	cout << "Digite cuantas etapas recorrio: "; cin>>N;
	
	for(int i=0;i<N;i++) { 
		
		cout << "Digite los segundos de la etapa "<<(i+1)<<": ";
		cin >> etapa[i].segundos;
		sumadorS += etapa[i].segundos;
		
		cout << "Digite los minutos de la etapa "<<(i+1)<<": ";
		cin >> etapa[i].minutos;
		sumadorM += etapa[i].minutos;
		
		cout << "Digite las horas de la etapa "<<(i+1)<<": ";
		cin >> etapa[i].horas;
		sumadorH += etapa[i].horas;
	}
	
	while(c1 == false || c2 == false ){ // hacer mientras la comprobacion sea falsa
		
		if(sumadorS>60){
			sumadorS-=60;
			sumadorM++;
		}
		else{
			c1=true;
		}
		if(sumadorM>60){ // si se pasa los 60 minutos aumentamos la hora en uno y los minutos les restamos el excedente
			sumadorM-=60;
			sumadorH++;
		}
		else{
			c2=true;
		}
		
	}
	
	cout << "\nHoras corridas en total = "<<sumadorH<< " : " <<sumadorM<< " : "<<sumadorS;
	
	return 0;
}

