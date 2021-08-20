#include <iostream>
using namespace std;

/* Ejercicio Nro. 5:
Dado un valor M, determinar e imprimir los M primeros múltiplos de 3 que no lo sean de 5, dentro del
conjunto de números naturales. */

int main() {
	int M,i;
	
	cout<< "Ingresa M"<<endl;
	cin>>M;

	
	for (i<0;i<M;i++){
		if (((i % 3) == 0) && ((i % 5) != 0))
		cout<< i<< "\n";
	}
	return 0;
}
