

/* Ejercicio Nro. 13:
Se dispone de un conjunto de 8640 temperaturas horarias, que se tomaron durante los 12 meses del
a�o, considerando que todos los meses tienen 30 d�as y cada d�a 24 horas. Se debe desarrollar el
programa que determine e imprima cual fue� la mayor temperatura y en que mes, d�a y hora ocurri� */
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
