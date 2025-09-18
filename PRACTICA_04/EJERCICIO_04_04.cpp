// Materia: Programación I, Paralelo 4
// Autor: Samuel Andrés Castañeta Argollo
// Fecha creación: 11/09/2025
// Número de ejercicio: 4

#include <bits/stdc++.h>
using namespace std;

double ConvertirCelsiusAFahrenheit(double c) {
    return (c * 9.0 / 5.0) + 32;
}

double MayorTemperatura(double t1, double t2) {
    return max(t1, t2);
}

int main() {
    double c1, c2;
    cout << "Ingrese dos temperaturas en Celsius: ";
    cin >> c1 >> c2;

    double f1 = ConvertirCelsiusAFahrenheit(c1);
    double f2 = ConvertirCelsiusAFahrenheit(c2);

    cout << "Fahrenheit: " << f1 << " y " << f2 << "\n";
    cout << "La mayor temperatura es: " << MayorTemperatura(f1, f2) << " °F\n";
    return 0;
}
