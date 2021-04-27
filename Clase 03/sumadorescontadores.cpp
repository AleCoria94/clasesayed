#include <iostream>
using namespace std; 

int main() {
	
	int x=30;
	int y=2;
	y=y+x;
	
	x= x+1;
	
	cout<< x << endl; //31
	cout<< y << endl;//32

 int z;
 z++;
 
 int a = 10;
 int b = 20;
 int c = a++ + ++b;
 
 	cout<< "a: "<< a << endl;
	cout<< "b: "<< b << endl;
	cout<< "c: "<< c << endl;
 
 
	return 0;
}
