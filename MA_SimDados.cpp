#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int resultado = rand() % 6 + 1; 

    std::cout << "El dado ha sido lanzado. Resultado: " << resultado << std::endl;

    return 0;
}
