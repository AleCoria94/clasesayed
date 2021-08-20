/*Ejercicio Nro. 1:
Dado un conjunto de valores enteros, calcular e imprimir:
a) cuantos valores cero hubo b) promedio de los valores positivos c) sumatoria de valores
negativos

Resolver el problema para los siguientes lotes de datos:
4)Se dan N valores, pero el proceso deber finalizar si se procesan todos los valores o la cantidad de
ceros supera a cuatro


*/

#include <iostream>
using namespace std;

int main() {

	int cantCeros = 0;
	int sumaPositivos = 0;
	int cantPositivos = 0;
	int sumaNegativos = 0;

	int N;
	cin >> N;

	int i = 1;

	while ((i <= N) && (cantCeros <= 4)) {
		int valor;
		cin >> valor;

		if (valor == 0) {
			cantCeros = cantCeros + 1;
		}
		if (valor > 0) { //positvo
			sumaPositivos = sumaPositivos + valor;
			cantPositivos = cantPositivos + 1;
		}
		if (valor < 0) { //negativo
			sumaNegativos = sumaNegativos + valor;
		}

		i = i + 1;
	}

	cout << cantCeros << endl;

	if(cantPositivos > 0) {
		float promedio = sumaPositivos*1.0/cantPositivos;
		cout << promedio << endl;
	} else {
		cout << "No hubo valores positivos" << endl;
	}

	cout << sumaNegativos << endl;

	return 0;
}
