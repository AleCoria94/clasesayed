#include <iostream>
using namespace std;

/*Ejercicio Nro. 6:
Dado un conjunto de valores c/u de los cuales representa el sueldo de un empleado, excepto el
último que es cero e indica fin del conjunto.
Desarrollar el programa que determine e imprima:
a) Cuantos empleados ganan menos de $520 b) Cuantos ganan $520 o más pero menos de
$780
c) Cuantos ganan $780 o más pero menos de
$999
d) Cuantos ganan $999 o más */

int main() {
	int M, cmenos=0, cent= 0, ctre =0, cmas=0;
	
		cout << "Ingrese Sueldos"<< endl;
	cin >> M;
	
	while (M !=0){

		if( M <520)
	cmenos++;
	else if
			(M>=520 && M<780)
			cent++;
				else if (M>=780 && M<999)
			ctre++;
				else 
					cmas++;
		cout << "Ingrese otro sueldo"<< endl;
		cin >> M;
	}

	
	cout<< "Cantidad de empleados que ganan menos de 520: "<< cmenos<< endl;
	cout<< "Cantidad de empleados que ganan 520 pero menos de 780: "<< cent<< endl;
	cout<< "Cantidad de empleados que ganan 780 pero menos de 999: "<< ctre<< endl;
	cout<< "Cantidad de empleados que ganan mas de 999: "<< cmas<< endl;
	return 0;
}
