#include <iostream>
using namespace std;
/*Pasos de Quick Sort: El mas rapido y con menor lineas de codigo

1) Selecciona el elemento central de a[] como pivote

2) Dividir los elementos restantes en particiones izquierda y derecha , 
de modo que nigun elemento de la izquierda tenga una lcave mayor que el pivote
y que ningun elemento ala derecha tenga una clave mas pequeña que la del pivote

3) Ordenar la particion izquierda utilizando quicksort recursivamente

4) Ordenar la particion derecha utilizando quicksort recursivamente

5) La solucion es particion izquierda seguida por el pivote y la particion derecha
**/

void intercambio(float &x, float &y){
	
	float aux;
	
	aux = x;
	x = y;
	y = aux;
}

void quickSort(float a[],int primero,int ultimo){//tamaño de arreglo 0 - 5
	int i,j,central;
	float pivote;
	
	central = (primero+ultimo)/2;
	pivote = a[central];
	
	i=primero;
	j=ultimo;
	
	do{
		while(a[i]<pivote) i++;
		while(a[j]>pivote) j--;
		
		if(i<=j){
			intercambio(a[i],a[j]);
			i++;
			j--;
		}
	} while(i<=j);
	if(primero < j){
		quickSort(a,primero,j);//ordenamos la sublista izquierda
	}
	if(i < ultimo){
		quickSort(a,i,ultimo);//Ordenamos la sublista derecha
	}
}

int main() {
	
	float arreglo [] = {4,7,8,2,3,1,10,55,29,20};
	
	quickSort(arreglo,0,9);//posicion inicial y final
	
	cout << "Ascendente" << endl;
	
	for(int i=0;i<10;i++) { 
		cout << arreglo[i]<<"   |   ";
	}
	
	
	return 0;
}

