#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned int>(time(0)));

    std::vector<std::string> prefijos = {"Luna", "Sol", "Estrella", "Aurora", "Nebula"};
    std::vector<std::string> sufijos = {"dor", "dora", "lia", "nus", "lita"};

    std::string nombre = prefijos[rand() % prefijos.size()] + sufijos[rand() % sufijos.size()];

    std::cout << "Nombre generado: " << nombre << std::endl;

    return 0;
}
