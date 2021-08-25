

/* Ejercicio Nro. 13:
Se dispone de un conjunto de 8640 temperaturas horarias, que se tomaron durante los 12 meses del
año, considerando que todos los meses tienen 30 días y cada día 24 horas. Se debe desarrollar el
programa que determine e imprima cual fue‚ la mayor temperatura y en que mes, día y hora ocurrió */
#include <iostream>
using namespace std;

int main() {
	int temp, mes;
	
cout<< "Ingresa temperatura";
	for (mes = 1; mes<=12;mes++)
			
			cin >> temp;
			cout << "temperatura ingresada" <<temp<< endl;
			cout << mes;
	return 0;
}
