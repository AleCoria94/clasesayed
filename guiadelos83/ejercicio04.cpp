#include <iostream>
using namespace std;

/* Ejercicio Nro. 4:
Dados dos valores enteros A y B determinar e imprimir el producto de ambos obtenido por sumas
sucesivas.*/

int main() {
	int A, B, res,i ;
	
cout<< "Ingrese A" << endl;
cin >> A;
cout<< "Ingrese B" << endl;
cin >> B;

for (i=0;i<B;i++)
{res=res +A;
}

cout << "Resultado: "<< res << endl;
	return 0;
}
