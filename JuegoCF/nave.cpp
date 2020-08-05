#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <list>

using namespace std;

#define ARRIBA 72      //codigo ascii de las flechas para poder leerlas
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80

void gotoxy(int x, int y){
	HANDLE hCon;//Identificador de ventana
	hCon = GetStdHandle(STD_OUTPUT_HANDLE/*Tomamos el control de la salida de la consola*/);//Lo que hacemos es recuperar el identidicador de la consola
	COORD dwPos; //Posicion coordenada
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hCon, dwPos);//Funcion que permite dar posicion al cursor y imprimir lo que queramos ahi, primer paramametro un HANDLE
	//Situamos el cursor en esas coordenada
}


void OcultarCursor(){
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;// controlamos la apariencia del cursor
	
	cci.dwSize = 1; //Tamaño del cursor
	
	cci.bVisible = FALSE;//verdadero se muestra  el cursor falso no
	
	SetConsoleCursorInfo(hCon, &cci);//Controlamos las caracteristicas del cursor en pantalla
}

void pintar_limites(){
	for(int i=2;i<78;i++) { //x
		gotoxy (i,3); printf("%c",205);
		gotoxy (i,33); printf("%c",205);
	}
	
	for(int i=4;i<33;i++) { //y
		
		gotoxy(2,i); printf("%c",186);
		gotoxy(77,i); printf("%c",186);
		
	}
	
	gotoxy(2,3); printf("%c",201);
	gotoxy(2,33); printf("%c",200);
	gotoxy(77,3); printf("%c",187);
	gotoxy(77,33); printf("%c",188);
}

class NAVE{
	int x,y;//atributos privados solo se accede en esta clase
	int corazones;
	int vidas;
public:
	NAVE(int _x,int _y, int _corazones, int _vidas): x(_x), y(_y),corazones(_corazones),vidas(_vidas) {} //constructor y asignacion
	int X() { return x;}
	int Y() { return y;}
	int vid() { return vidas;}
	void COR() { corazones--; }
	void pintar();
	void borrar();
	void mover();
	void pintar_corazones();
	void morir();
};

void NAVE::pintar(){ // asi se definen las funciones
	gotoxy(x,y); printf("  %c",94);
	gotoxy(x,y+1); printf(" %c%c%c",47,207,92);
	gotoxy(x,y+2); printf("%c%c %c%c",60,190,190,62);
}

void NAVE::borrar(){// borramos el asterisco en la posicion anterior
	gotoxy(x,y);   printf("        ");
	
	gotoxy(x,y+1); printf("        ");
	
	gotoxy(x,y+2); printf("        ");
}

void NAVE::mover(){
	
	if(kbhit()){ //kbhit Esta funcion detecta si se toco una tecla
		
		char tecla = getch(); //Guarda la letra que se precione
		
		borrar();
		//Los && son los limites del mapa para que nose salgan del recuadro
		if(tecla == IZQUIERDA && x > 3) x--; //vamos a mover una posicion hacia la izquierda
		if(tecla == DERECHA && x+6 < 77)   x++; //hacia la derecha
		if(tecla == ARRIBA && y > 4)    y--; //hacia arriba
		if(tecla == ABAJO && y+3 < 33) y++; //abajo
		pintar();
		pintar_corazones();
	}
}

void NAVE::pintar_corazones (){
	
		gotoxy(50,2);printf("Vidas %d",vidas);
		
		gotoxy(64,2); printf("Salud");
		
		gotoxy(70,2); printf("      ");
		
		for(int i=0;i<corazones;i++) { 
			gotoxy(70+i,2); printf("%c",184);
		}
}

void NAVE::morir(){
	if(corazones == 0){
		borrar();
		gotoxy(x,y);   printf("   **   ");
		gotoxy(x,y+1); printf("  ****  ");//Animacion de muerte
		gotoxy(x,y+2); printf("   **   ");
		Sleep(200);
		
		borrar();
		gotoxy(x,y);   printf(" *    *");
		gotoxy(x,y+1); printf("  **** ");
		gotoxy(x,y+2); printf(" *    *");
		Sleep(200);
		
		borrar();
		gotoxy(x,y);   printf("   **   ");
		gotoxy(x,y+1); printf("  ****  ");
		gotoxy(x,y+2); printf("   **   ");
		Sleep(200);
		
		borrar();
		gotoxy(x,y);   printf(" *    *");
		gotoxy(x,y+1); printf("  **** ");
		gotoxy(x,y+2); printf(" *    *");
		Sleep(200);
		
		borrar();
		vidas--; // vidas baja en uno
		corazones =3;//corazones se resetean
		pintar_corazones();//Pintamos los corazones
		pintar();//pintamos la nave
	}
}

class AST{
	int x,y;
public:
	AST(int _x, int _y):x(_x) , y(_y){}
	int X() { return x; }
	int Y() { return y; }
	void pintar();
	void mover();
	void choque(class NAVE &N);
};

void AST::pintar(){ // Forma asteroides
	
	gotoxy(x,y); printf("%c",184);
	
}

void AST::mover(){ //Movimiento Asteroides
	gotoxy(x,y); printf("  ");
	y++;
	if(y > 32){
		
		x = rand() % 71 + 4; // 0 y 75 entre
		
		y = 4;
		
	}
	pintar();
}

void AST::choque(class NAVE &N){
	
	if(x >= N.X() && x < N.X()+6 && y >= N.Y() && y <= N.Y()+2){ // Acordate que esta pintado por varios caracteres ese es el intervalo que ocupa la NAVE
		N.COR();
		N.borrar();
		N.pintar();
		N.pintar_corazones();
		x = rand() % 71 + 4;
		y = 4;
	}
	
}

class BALA{
	int x,y;
public:
	BALA(int _x, int _y): x(_x) , y(_y){}
	int X() { return x;}
	int Y() { return y;}
	void mover();
	bool fuera();
};

void BALA::mover(){
	gotoxy(x,y); printf(" ");
	if (y>4) y--;
	gotoxy(x,y); printf("*");
	
}

bool BALA::fuera(){
	if (y==4){ return true;}
	else{
	return false;}
}

void fin(int score){
	
	for(int i=18;i<71;i++) { 
		
		gotoxy (i,160); printf("%c",205); //(X,Y)
		
		gotoxy (i,170); printf("%c",205);
		
	}
	
	for(int i=160;i<170;i++) { 
		
		gotoxy(18,i); printf("%c",186);
		
		gotoxy(70,i); printf("%c",186);
		
	}
	
	gotoxy(18,160); printf("%c",201);
	gotoxy(18,170); printf("%c",200);
	gotoxy(40,165); printf("Game over");
	gotoxy(35,166); printf("Su puntuacion fue: %d",score);
	gotoxy(70,160); printf("%c",187);
	gotoxy(70,170); printf("%c",188);
	
}

int main(){
	
	OcultarCursor();
	pintar_limites();
	NAVE N(37,30,3,3);
	N.pintar();
	N.pintar_corazones();
	
	list<AST*> A;//Lista de asteroides
	list<AST*>::iterator itA;
	for(int i=0;i<5;i++){
		
		A.push_back(new AST(rand()%75+3,rand()%5+4));//Creamos lista de asteroides y la cantidad y por donde salen
		
	}
	
	list<BALA*> B; //Lista de punteros
	list<BALA*>::iterator it; // Iterador para recorrer la lista
	
	bool game_over = false; //False podes jugar ,true no 
	
	int puntos = 0;
	
	while(!game_over){
		
		gotoxy(4,2); printf("Puntos %d",puntos);
		
		if(kbhit()){
			
			char tecla = getch();
			if(tecla == 'a')
			B.push_back(new BALA(N.X()+2 , N.Y()-1)); //Creamos un nuevo elemento para la lista
			
		}
		
		for(it = B.begin(); it != B.end(); it++){ //begin principio de la lista end final de la lista
			
			(*it)->mover();
			if((*it)->fuera()){//Si la bala esta en el borde la borramos de la lista y de la pantalla
				
				gotoxy((*it)->X(), (*it)->Y()); printf (" ");//borra de la pantalla
				delete(*it);//Borra de la lista
				it = B.erase(it);//Quitamos uno pero el espacio que quedo hacemos que el iterador que le seguia vaya una posicion atras
				
			}
		}
		
		for(itA = A.begin(); itA != A.end() ; itA++){
			(*itA)->mover();
			(*itA)->choque(N);
		}
		//colicion de las balas
		for(itA = A.begin(); itA != A.end(); itA++){//Controlamos los asteroides
			for(it = B.begin() ; it != B.end() ; it++){//Controlamos las balas
				
				if((*itA)->X() == (*it)->X() && (((*itA)->Y()+1 == (*it)->Y()) || ((*itA)->Y() == (*it)->Y()))){//colicion
					
					gotoxy((*it)->X(),(*it)->Y()); printf(" ");
					delete(*it);//Borramos bala
					it = B.erase(it);
					
					A.push_back(new AST(rand()%74+3, 4));
					gotoxy((*itA)->X(),(*itA)->Y()); printf(" ");
					delete(*itA);//Borramos asteroide
					itA = A.erase(itA);
					
					puntos+=5;
				}
				
			}
		}
		
		if(N.vid() == 0) game_over = true;
		
		N.morir();
		N.mover();
		Sleep(50);//Detiene por 50 milisegundospara que no parpadee tanto asi no se atosiga el procesador
		
	}
	
	if(game_over==true){
		fin(puntos);
	}
	
	return 0;
}
