#include <iostream>

#include "EE_DecimalLetras.cpp"
#include "EE_TablaMulti.cpp"
#include "EE_TodasTablas.cpp" 
#include "EE_MultiManual.cpp"
#include "EE_DecimalBin.cpp"
#include "EE_DecimalHexa.cpp"
#include "EE_FigurasGeometricas.cpp"
#include "EE_PuntoPantalla.cpp"
#include "EE_Cajero.cpp"
#include "Arabigos a Romanos.cpp"
#include "conversiones.cpp"
#include "Ndecimal a Letras.cpp"
#include "numero impar o par.cpp"
#include "Numeros a Letras.cpp"
#include "Palindromos.cpp"
#include "Operaciones.cpp"
using namespace std; 

int main(){
	int opcion;
	char resp;
	do{
		cout<<"MENU DE OPCIONES"<<endl;
		cout<<"--------------------------------"<<endl;
		cout<<"1. Suma, Resta, Multiplicación y Division de dos numeros"<<endl;
		cout<<"2. Determinar si un numero es par o impar"<<endl;
		cout<<"3. Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa"<<endl;
		cout<<"4. Determinar si una palabra o un numero es palindromo."<<endl;
		cout<<"5. Conversion de numeros arábigos a romanos (minimo 1,000)"<<endl;
		cout<<"6. Conversion de numeros enteros a letras"<<endl;
		cout<<"7. Conversion de numeros enteros con decimal a letras"<<endl;
		cout<<"8. Una tabla de multiplicar"<<endl;
		cout<<"9. Todas las tablas de multiplicar del 1 al 10"<<endl;
		cout<<"10. Crear de forma grafica la multiplicacion manual"<<endl;
		cout<<"11. Conversion de numeros decimales a binario"<<endl;
		cout<<"12. Conversion de numeros decimales a hexadecimales"<<endl;
        cout<<"13. Crear Figuras Geometricas Basicas."<<endl;
        cout<<"14. Mover un punto en toda la pantalla"<<endl;
		cout<<"15. Simulacion de un Cajero (Automata)"<<endl;
       	cout<<"16. Calcular la hipotenusa"<<endl;
		cout<<"17. libre"<<endl;
		cout<<"18. libre"<<endl;
		cout<<"19. libre"<<endl;
		cout<<"20. libre"<<endl;
		cout<<"0. SALIR"<<endl;
		cout<<"--------------------------------"<<endl;
		cout<<"Eliga un progama, para inciar"<<endl;
		cin>>opcion;
		
		system("cls");
		
		switch (opcion){
			case 1:
			opcion1();
			break;
			case 2:
			opcion2();
			break;
			case 3:
			opcion3();
			break;
			case 4:
			opcion4();
			break;
			case 5:
			opcion5();
			break;
			case 6:
			opcion6();
			break;
			case 7: 
			opcion7();
			break;
			case 8:
			opcion8();	
			break;	
			case 9:
			opcion9();
			break;
			case 10:
			opcion10();
			break;
			case 11:
			opcion11();
			break;
			case 12:
			opcion12();
			break;
			case 13:
			opcion13();
			break;
			case 14:
			opcion14();
			break;
			case 15:
			opcion15();
			break;
			case 16:
			opcion16();
			break;
			case 17:
			opcion17();
			break;
			case 18:
			opcion18();
			break;
			case 19:
			opcion19();
			break;
			case 20:
			opcion20();
			break;
			default: 
			cout<<"La opcion ingresada no es valida, reintentelo"<<endl;
			break;
		}
		cout<<"-----------------------"<<endl;
		cout<<"Desea Continuar? (s/n)"<<endl;
		cin>>resp;
	}while (resp=='s' || resp=='S');
	
	return 0;
} 

