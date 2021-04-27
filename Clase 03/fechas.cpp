#include <iostream>
using namespace std;


/* Esta es la clase nummero 3 */

int main() {
	
	unsigned int fecha;
	cout << "Por favor, ingresa la fecha: " << endl;
	cin >> fecha;
	
	unsigned int dia = fecha / 1000000;
	unsigned int mes = (fecha % 1000000)/10000;
	unsigned int anio = fecha % 10000;
	cout << anio << " " << mes << " " << dia ;
	
	return 0;
}
