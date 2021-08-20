/*Ejercicio Nro. 1:
Dado un conjunto de valores enteros, calcular e imprimir:
a) cuantos valores cero hubo b) promedio de los valores positivos c) sumatoria de valores
negativos
Resolver el problema para los siguientes lotes de datos:
1) 167 valores enteros.
*/


#include <iostream>
using namespace std;
int main() {
	int i,num, contceros=0,contpos=0,contneg=0, ing=0;
	double sprom =0; int sumneg=0; 

    cout<< "ingresa 167 numeros" << endl;
	for (i=0; i<167; i++){
	cin >> num;

		if (num == 0){
		contceros++;
		}else{

			if(num>0){
				contpos++;
				sprom = sprom+ num;
			} else {
				contneg++;
				sumneg= sumneg + num;
			}
		}	
	}
	cout << "Cantidad de ceros = " << contceros << endl;
    cout << "Cantidad de numeros positivos = " << contpos << endl;
	cout << "Cantidad de numeros negativos = " << contneg << endl;
	cout << "Promedio de los positivos = " << sprom/contpos << endl;
	cout << "Sumatoria de los negativos = " << sumneg << endl;
	return 0;
}
