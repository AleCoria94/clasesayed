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
     float promedio=0;

	while (((i <= N) && (cantCeros <= 4)) || (promedio<=6)){
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
		promedio = sumaPositivos*1.0/cantPositivos;
		cout << promedio << endl;
	} else {
		cout << "No hubo valores positivos" << endl;
	}

	cout << sumaNegativos << endl;

	return 0;
}
