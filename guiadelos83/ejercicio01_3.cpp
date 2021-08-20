/*Ejercicio Nro. 1:
Dado un conjunto de valores enteros, calcular e imprimir:
a) cuantos valores cero hubo b) promedio de los valores positivos c) sumatoria de valores
negativos

Resolver el problema para los siguientes lotes de datos:
3)El conjunto de valores termina con un valor igual al anterior


*/


#include <iostream>
using namespace std;

int main() {

	int cantc = 0;
	int spos = 0;
	int cpos = 0;
	int sneg = 0;

	int anterior;

	int valor;
	cin >> valor;

	do {
		if (valor == 0) {
			cantc = cantc + 1;
		}
		if (valor > 0) { //positvo
			spos = spos + valor;
			cpos = cpos + 1;
		}
		if (valor < 0) { //negativo
			sneg = sneg + valor;
		}

		anterior = valor;
		cin >> valor;
	} while (valor != anterior);

	cout << cantc << endl;

	if(cpos > 0) {
		float promedio = spos*1.0/cpos;
		cout << promedio << endl;
	} else {
		cout << "No hubo valores positivos" << endl;
	}

	cout << sneg << endl;

	return 0;
}
