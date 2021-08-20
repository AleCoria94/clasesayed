#include <iostream>
using namespace std;

/*Ejercicio Nro. 3:
Dados dos valores N y M determinar e imprimir cuales y cuantos múltiplos de M hay dentro del
conjunto 1 a N. 
*/

int main() {
	int N, M, i,smul=0;
	
	cout<< "Ingrese el valor N"<< endl;
	cin >> N;
	
	cout<< "Ingrese el valor M"<< endl;
	cin >> M;
	
	for (i>=0; i<N ;i++){
		if ((i % M)==0){
			smul++;
		}
		
	}
	cout << "Cantidad de multiplos: "<< smul<< endl;
	
	
	return 0;
}
