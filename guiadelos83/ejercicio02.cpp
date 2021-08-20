/*Ejercicio Nro. 2:
Dado un conjunto de triángulos representados por sus lados L1, L2 y L3 que finaliza con un triángulo
con un lado nulo, determinar e imprimir la cantidad de triángulos equiláteros, isósceles y escalenos.


*/


#include <iostream>
using namespace std;
int main() {
	int L1,L2,L3,ceq=0,ces=0,cis=0;

do{


cout<< "Ingrese los lados del triangulo"<< endl;
cin>> L1;
cin>> L2;
cin>> L3;

	if(L1 == L2 && L2 == L3){
	cout<< "Este es un triangulo equilatero" << endl;
	 ceq++;
	}else{
		if(L1 != L2 && L2 !=L3 && L1 != L3){
			cout << "Este es un triangulo escaleno"<<endl;
			ces++;
			}else{
				cout << "Este es un triangulo isosceles"<< endl;
				cis++;
			}
	
	}

}while ( (L1 != 0)&& (L2 != 0)&& (L3 != 0));
	cout<< "Ingresaste " << ceq << " triangulos equilateros"<< endl;
	cout<< "Ingresaste " << ces << " triangulos escalenos"<< endl;
	cout<< "Ingresaste " << cis << " triangulos isosceles"<< endl;
	return 0;
}
