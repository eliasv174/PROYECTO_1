#include <iostream>
#include <string>
#include <cmath>

// Función para convertir una parte entera de hasta 999 en letras
std::string convertirParteEntera(int numero) {
    if (numero == 0) {
        return "cero";
    }

    const std::string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    const std::string especiales[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};
    const std::string decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    const std::string centenas[] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};

    std::string resultado;

    // Centenas
    if (numero >= 100) {
        resultado += centenas[numero / 100];
        numero %= 100;
        if (numero > 0) {
            resultado += " ";
        }
    }

    // Decenas
    if (numero >= 10 && numero <= 19) {
        resultado += especiales[numero - 10];
        return resultado;
    } else if (numero >= 20) {
        resultado += decenas[numero / 10];
        numero %= 10;
        if (numero > 0) {
            resultado += " y ";
        }
    }

    // Unidades
    if (numero > 0) {
        resultado += unidades[numero];
    }

    return resultado;
}

// Función para convertir la parte decimal en letras
std::string convertirParteDecimal(int numero) {
    const std::string unidades[] = {"cero", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    
    std::string resultado;
    if (numero > 0) {
        resultado += " punto ";
        int d1 = numero / 10;
        int d2 = numero % 10;
        resultado += unidades[d1] + " " + unidades[d2];
    }

    return resultado;
}

// Función principal para convertir números enteros con decimal en letras
std::string convertirANumerosLetras(double numero) {
    int parteEntera = static_cast<int>(numero);
    int parteDecimal = static_cast<int>((numero - parteEntera) * 100); // Multiplicamos por 100 y convertimos a entero para obtener los dos primeros dígitos decimales
    
    std::string numeroEnLetras = convertirParteEntera(parteEntera) + convertirParteDecimal(parteDecimal);
    return numeroEnLetras;
}

int main() {
    double numero;
    std::cout << "Ingrese un número con decimal: ";
    std::cin >> numero;

    std::string numeroLetras = convertirANumerosLetras(numero);
    std::cout << "El número en letras es: " << numeroLetras << std::endl;

    return 0;
}

