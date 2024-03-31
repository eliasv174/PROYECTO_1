#include <iostream>
#include <string>
#include <cctype>

void opcion20() {
    std::string palabra;

    // Solicitar al usuario que ingrese una palabra
    std::cout << "Ingrese una palabra: ";
    std::cin >> palabra;

    int contadorLetras = 0;

    // Contar el número de letras en la palabra
    for (std::string::size_type i = 0; i < palabra.length(); ++i) {
        if (std::isalpha(palabra[i])) { // Comprobar si el carácter es una letra
            contadorLetras++;
        }
    }

    // Imprimir el resultado
    std::cout << "La palabra \"" << palabra << "\" tiene " << contadorLetras << " letras." << std::endl;
}

