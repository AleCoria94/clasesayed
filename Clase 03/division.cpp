#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	float a;
	cin >> a;
	float b;
	cin >> b;
	
	
	if(b!=0){
		cout << a/b << endl;
		} else {
				cout << "No se puede dividir por cero" << endl;
		}
	
	return 0;
}
