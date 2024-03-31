#include <iostream>
#include <cmath>

using namespace std;

void opcion16() {
    double lado1, lado2, hipotenusa;

    cout << "Ingrese la longitud del primer lado: ";
    cin >> lado1;

    cout << "Ingrese la longitud del segundo lado: ";
    cin >> lado2;

    hipotenusa = sqrt(pow(lado1, 2) + pow(lado2, 2));
    cout << "La longitud de la hipotenusa es: " << hipotenusa << endl;
}
