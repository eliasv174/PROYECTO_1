#include <iostream>
#include <string>
using namespace std;

    string convertirANumerosRomanos(int numero) {
    const int valores[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const std::string romanos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    string resultado;
    for (int i = 0; i < 13; i++) {
        while (numero >= valores[i]) {
            resultado += romanos[i];
            numero -= valores[i];
        }
    }
    return resultado;
}

   


