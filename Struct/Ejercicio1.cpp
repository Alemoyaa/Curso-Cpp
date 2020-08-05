#include <iostream>
using namespace std;

struct corredor{
	char nombre[20];
	int edad;
	char sexo[20];
	char club[20];
}corredor1;

int main(int argc, char *argv[]) {
	
	cout << "Digite el nombre del corredor: ";
	cin.getline(corredor1.nombre,20,'\n');
	
	cout << "Digite la edad del corredor: ";
	cin >> corredor1.edad;
	
	fflush(stdin);
	
	cout << "Digite su sexo: ";
	cin.getline(corredor1.sexo,20,'\n');
	
	cout << "Digite su club: ";
	cin.getline(corredor1.club,20,'\n');
	
	cout << "\n" << endl;
	
	if(corredor1.edad <= 18){
		cout << "Su categoria es Juvenil" << endl;
	}
	else if(corredor1.edad <= 40){
		cout << "Su categoria es Señor" << endl;
	}
	else if(corredor1.edad > 40){
		cout << "Su categoria es Veterano" << endl;
	}
	else{
		cout << "Algo salio mal" << endl;
	}
	
	cout <<"El nombre del corredor es: "<< corredor1.nombre << endl;
	cout <<"Su edad es de: "<< corredor1.edad << endl;
	cout <<"Su sexo es: " << corredor1.sexo << endl;
	cout <<"Su club es: "<< corredor1.club << endl;
	return 0;
}

