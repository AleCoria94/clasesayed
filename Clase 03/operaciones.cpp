#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Clase 3

int main() {
	 bool variable = 3>2;
	 cout << variable <<endl;
	 
	 int x = 20;
	 int y =3 ;
	
	 bool comp = x == y;
	 cout << comp << endl; //false
	 
	 bool comp2 = x == y +17;
	 cout << comp2 << endl; //true
	 
	 bool neg = !comp2;
	 cout << neg << endl; //false
	 
	 bool res = true && false;

 // Quiero buscar que mi numero este entre el rango (3...8)
 
 //AND 
 
	int v = 4 ;
	bool estaDentrodelRango = (v>3) && (v<8);
	cout << estaDentrodelRango <<endl; // true	 

//OR
	
	bool comp3= (3>8) || (2>1);
	cout << comp3 << endl;// true
	
		return 0;
}
