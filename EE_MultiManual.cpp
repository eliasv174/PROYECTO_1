#include <iostream>

using namespace std;

int obtenerNumeroDigitos(int numero) {
    int contador = 0;
    while (numero != 0) {
        numero /= 10;
        contador++;
    }
    return contador;
}

void imprimirEspacios(int n) {
    for (int i = 0; i < n; ++i) {
        cout << " ";
    }
}

void imprimirNumero(int numero, int longitudMaxima) {
    int longitud = obtenerNumeroDigitos(numero);
    imprimirEspacios(longitudMaxima - longitud);
    cout << numero;
}

void opcion10() {
    int multiplicando, multiplicador;
    cout << "Ingrese el multiplicando: ";
    cin >> multiplicando;
    cout << "Ingrese el multiplicador: ";
    cin >> multiplicador;

    int resultado = multiplicando * multiplicador;

    int longitudMaxima = max(obtenerNumeroDigitos(multiplicando), obtenerNumeroDigitos(multiplicador));
    longitudMaxima = max(longitudMaxima, obtenerNumeroDigitos(resultado));
    cout << endl;
    imprimirNumero(multiplicando, longitudMaxima + 1);
    cout << endl;
    cout << "x";
    imprimirNumero(multiplicador, longitudMaxima);
    cout << endl;
    cout << "---------" << endl;

    int multiplicadorDigito;
    int espacioExtra = 0;
    int resultadoParcial;

    int multiplicadorCopia = multiplicador;
    while (multiplicadorCopia != 0) {
        multiplicadorDigito = multiplicadorCopia % 10;
        resultadoParcial = multiplicando * multiplicadorDigito;
        imprimirNumero(resultadoParcial, longitudMaxima + espacioExtra);
        espacioExtra--; 
        cout << endl;
        multiplicadorCopia /= 10;
    }
    for (int i = 0; i < longitudMaxima + espacioExtra; ++i) {
        cout << "---------";
    }
    cout << endl;

    imprimirNumero(resultado, longitudMaxima);
    cout << endl;

}

