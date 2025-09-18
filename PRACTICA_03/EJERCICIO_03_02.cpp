// Materia: Programación I, Paralelo 4
// Autor: Samuel Andrés Castañeta Argollo
// Fecha creación: 05/09/2025
// Número de ejercicio: 2

#include <bits/stdc++.h>
using namespace std;

double celsiusAFahrenheit(double c) {
    return (c * 9.0 / 5.0) + 32;
}

int main() {
    double c;
    cout << "Ingrese grados Celsius: ";
    cin >> c;
    cout << "Equivale a " << celsiusAFahrenheit(c) << " °F\n";
    return 0;
}
