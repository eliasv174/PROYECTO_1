#include <iostream>

class Operaciones {
public:
    double sumar(double a, double b) {
        return a + b;
    }

    double restar(double a, double b) {
        return a - b;
    }

    double multiplicar(double a, double b) {
        return a * b;
    }

    double dividir(double a, double b) {
        if (b == 0) {
            std::cout << "Error: No se puede dividir por cero." << std::endl;
            return 0;
        }
        return a / b;
    }
};


