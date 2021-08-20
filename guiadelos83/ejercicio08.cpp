#include <iostream>
using namespace std;

/* Ejercicio Nro. 8:
Dado un conjunto de boletos (c/u definido por 5 valores de un dígito) que finaliza con un boleto de 5
ceros, desarrollar un programa que determine e imprima cuantos boletos hubo de los siguientes tipos:
a) quíntuples b) cuádruples c) triples d) dobles */

int main() {
	unsigned int bol;
	unsigned int num1,num2,num3,num4,num5,num6;
    unsigned int s1=0,s2=0,s3=0,s4=0,s5=0,r1=0,r2=0,r3=0,r4=0;
	
	cout<< "Ingresá el boleto"<< endl;
		cin>> bol;
	
	while(bol!=0){
		num1=bol/10000;
        num2=(bol%10000)/1000;
        num3=(bol%1000)/100;
        num4=(bol%100)/10;
        num5=bol%10;
        num6=(bol%10000); //Se busca el resto
        
       if(s1==s2 and s2==s3 and s3==s4 and s4==s5){
            r1++;
        }
        else{
            if(s1==s2 and s2==s4 and s4==s5){
                r2++;
            }
            else{
                if((s2==s3 and s2==s4 and s1==num5) or (s1==s3 and s1==s5 and s2==s4)){
                    r3++;
                }
                else{
                    if(s1==s5 and s2==s4){
                        r4++;
                    }
                }
            }
        }
        
        
        
		cout<< "Ingresá el boleto"<< endl;
		cin>> bol;
	}	
	cout<< "1." << r1 <<endl; 
	cout<< "2." << r2 <<endl; 
	cout<< "3." << r3 <<endl; 
	cout<< "4." << r4 <<endl; 

	return 0;
}
