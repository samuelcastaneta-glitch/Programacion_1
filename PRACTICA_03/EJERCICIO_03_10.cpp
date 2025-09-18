// Materia: Programación I, Paralelo 4
// Autor: Samuel Andrés Castañeta Argollo
// Fecha creación: 05/09/2025
// Número de ejercicio: 10

#include <bits/stdc++.h>
using namespace std;

double calcularTarifa(double km) {
    double total = 10 + (km * 2);
    if (km > 10) total *= 0.9; // descuento del 10%
    return total;
}

int main() {
    double km;
    cout << "Ingrese kilometros recorridos: ";
    cin >> km;
    cout << "Tarifa: " << calcularTarifa(km) << " Bs\n";
    return 0;
}
