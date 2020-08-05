#include <iostream>
#include <conio.h>
using namespace std;

struct info_direccion{
	char direccion[30];
	char provincia[20];
	char localidad[20];
};

struct empleado{
	char nombre[20];
		struct info_direccion dir_empleado;//esto es como un constructor
	double salario;
}empleados[10];

int main(int argc, char *argv[]) {
	
	int n;
	
	cout << "Digite cuantos empleados desea registrar(hasta 10): ";
	
	cin >> n;
	
	for(int i=0;i<n;i++) { 
		cout << "\n\t Registro del empleado N°"<<(i+1)<<endl;
		fflush(stdin); //Vaciar el buffer y permitir digitar los valores
		cout << "Digite el nombre del empleado: ";
		cin.getline(empleados[i].nombre,20,'\n');
		cout << "Digite la direccion de "<<empleados[i].nombre<<" : ";
		cin.getline(empleados[i].dir_empleado.direccion,30,'\n');
		cout << "Digite su provincia : ";
		cin.getline(empleados[i].dir_empleado.provincia,20,'\n');
		cout << "Digite su localidad: ";
		cin.getline(empleados[i].dir_empleado.localidad,20,'\n');
		cout << "Digite su salario: ";
		cin >> empleados[i].salario;
		cout << "\nRegistro completado con exito." << endl;
	}
	
	cout << "Mostrando los datos cargados: " << endl;
	
	for(int j=0;j<n;j++) { 
		cout << "Empleado N°"<< (j+1) << endl<<endl;
		
		cout << "Nombre: "<< empleados[j].nombre << endl;
		cout << "Provincia: "<< empleados[j].dir_empleado.provincia << endl;
		cout << "Localidad: "<< empleados[j].dir_empleado.localidad << endl;
		cout << "Direccion: "<< empleados[j].dir_empleado.direccion << endl;
		cout << "Salario: "<< empleados[j].salario << endl;
		cout << "Pulse cualquier tecla para continuar..."; getch();
		cout << "\n" << endl;
	}
	
	return 0;
}

