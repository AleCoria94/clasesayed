/* Ejercicio Nro. 10:
Dado un conjunto de valores positivos terminado con un valor negativo, desarrollar el programa que
imprima el valor máximo del conjunto y su posición relativa dentro del mismo */

#include <iostream>
using namespace std;

int main() {
	int num, max=-1, pos=0, posmax=0;
	
	cout << "Ingresa un numero" << endl;
	cin >> num;
	
	while (num >=0){
		pos++;
		if (num>max){
			max=num;
			posmax =pos;
		}
		cin >> num;
	}
	
	cout << "El numero maximo ingresado es: " << max << endl;
	cout << "Fue ingresado en la posicion: " << posmax << endl;
	return 0;
}
