// Materia: Programación I, Paralelo 4
// Autor: Samuel Andrés Castañeta Argollo
// Fecha creación: 11/09/2025
// Número de ejercicio: 9
#include <bits/stdc++.h>
using namespace std;
void calcularSueldos(int n) {
    for (int i = 0; i < n; i++) {
        double antiguedad, totalVendido;
        cout << "\nVendedora " << i+1 << ":\n";
        cout << "Ingrese sueldo base segun antiguedad: ";
        cin >> antiguedad;
        cout << "Ingrese total vendido: ";
        cin >> totalVendido;

        double comision = totalVendido * 0.10;
        double total = antiguedad + comision;

        cout << "Sueldo base: " << antiguedad << "\n";
        cout << "Comision: " << comision << "\n";
        cout << "Total a pagar: " << total << "\n";
    }
}

int main() {
    int n;
    cout << "Cantidad de vendedoras: ";
    cin >> n;
    calcularSueldos(n);
    return 0;
}
