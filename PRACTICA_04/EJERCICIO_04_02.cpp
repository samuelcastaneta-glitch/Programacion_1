// Materia: Programación I, Paralelo 4
// Autor: Samuel Andrés Castañeta Argollo
// Fecha creación: 11/09/2025
// Número de ejercicio: 2

#include <bits/stdc++.h>
using namespace std;

double CalcularVolumen(double radio, double altura = 10) {
    return M_PI * radio * radio * altura;
}

int main() {
    double r, h;
    cout << "Ingrese radio: ";
    cin >> r;
    cout << "Ingrese altura (0 para usar por defecto): ";
    cin >> h;

    if (h == 0) h = 10;

    cout << "Volumen del cilindro: " << CalcularVolumen(r, h) << "\n";
    return 0;
}
