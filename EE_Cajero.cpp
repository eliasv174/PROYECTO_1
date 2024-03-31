#include <iostream>

using namespace std;

void opcion15() {
    int saldo = 500; 

    cout << "Cajero Automatico 3B" << endl;
    cout << "Su saldo actual es: Q" << saldo << endl;

    int opcion;
    do {
        cout << "\nSeleccione la operacion a realizar: " << endl;
        cout << "1. Retirar dinero" << endl;
        cout << "2. Depositar dinero" << endl;
        cout << "3. Salir" << endl;
        cout << "Opción: ";
        cin >> opcion;

        int cantidad;
        switch (opcion) {
            case 1:
                cout << "Ingrese la cantidad a retirar: ";
                cin >> cantidad;
                if (cantidad > saldo) {
                    cout << "Saldo insuficiente" << endl;
                } else {
                    saldo -= cantidad;
                    cout << "Retiro exitoso" << endl;
                }
                break;
            case 2:
                cout << "Ingrese la cantidad a depositar: ";
                cin >> cantidad;
                saldo += cantidad;
                cout << "Depósito exitoso" << endl;
                break;
            case 3:
                cout << "Gracias por utilizar nuestro servicio. ¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opción inválida. Por favor, seleccione una opción válida." << endl;
                break;
        }
        if (opcion != 3)
            cout << "Saldo actual: Q" << saldo << endl;
    } while (opcion != 3);
}

void Iniciar() {
    opcion15();
}
