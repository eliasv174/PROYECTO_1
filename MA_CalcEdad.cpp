#include <iostream>

int main() {
    int Nacimiento;
    std::cout << "Ingresa tu año de nacimiento: ";
    std::cin >> Nacimiento;

    int Actual = 2024; // P
    int edad = Actual - Nacimiento;

    std::cout << "Tu edad es: " << edad << " años" << std::endl;

    return 0;
}
