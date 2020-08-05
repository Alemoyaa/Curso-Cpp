#include <iostream>
using namespace std;

struct empleados{
	char nombre[20];
	float salario;
}empleado[4];

int main(int argc, char *argv[]) {
	
	for(int j=0;j<4;j++) { 
		fflush(stdin);
		cout << "Digite su nombre:";
		cin.getline(empleado[j].nombre,20,'\n');
		cout << "Digite su salario:";
		cin >> empleado[j].salario;
	}
	
	float mayor=0,menor=99999;
	int posM,posm;
	
	for(int i=0;i<4;i++) { 
		
		if(empleado[i].salario < menor){
			menor=empleado[i].salario; posm=i;
		}
		if(empleado[i].salario>mayor){
			mayor=empleado[i].salario; posM=i;
		}
	}
	
	cout << "El mayor salario es el de " << empleado[posM].nombre << " y es de : " << mayor << endl;
	
	cout << "El menor salario es el de " << empleado[posm].nombre << " y es de : " << menor << endl;
	
	return 0;
}

