#include <iostream>
#include <string>
#include <algorithm>

// Función para verificar si una cadena es un palíndromo
bool esPalindromo(const std::string& cadena) {
    // Crear una copia de la cadena
    std::string copia = cadena;
    
    // Eliminamos los espacios en blanco de la cadena
    copia.erase(std::remove_if(copia.begin(), copia.end(), [](char c) { return std::isspace(c); }), copia.end());

    // Convertimos la cadena a minúsculas
    std::transform(copia.begin(), copia.end(), copia.begin(), [](char c) { return std::tolower(c); });

    // Creamos una copia inversa de la cadena
    std::string copiaInversa = copia;
    std::reverse(copiaInversa.begin(), copiaInversa.end());

    // Comparamos la cadena original con la copia inversa
    return copia == copiaInversa;
}


