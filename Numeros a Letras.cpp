#include <iostream>
#include <string>

// Función para convertir un número de hasta 999 en letras
std::string convertirANumerosLetras(int numero) {
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



