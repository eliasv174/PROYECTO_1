#include <iostream>

int main() {
    double cantidad;
    std::cout << "Ingrese la cantidad en Dolares: ";
    std::cin >> cantidad;

    double cantidadQ = cantidad * 7.91;

    std::cout << cantidad << " Dolares equivalen a " << cantidadQ << " Quetzales" << std::endl;

    return 0;
}
