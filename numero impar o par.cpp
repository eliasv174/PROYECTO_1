#include<iostream>
#include<string>
using namespace std;

string numero_impar_o_par(int numero){

	
	cout<<"Ingrese un numero: ";
	cin>>numero;
	
	if (numero % 2 !=0 ) {
		cout<<"El numero ingresado es impar "<<endl;
		
	}else{
		cout<<"El numero ingresado es par"<<endl;
	}
}	
