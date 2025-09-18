// Materia: Programación I, Paralelo 4
// Autor: Samuel Andrés Castañeta Argollo
// Fecha creación: 11/09/2025
// Número de ejercicio: 8

#include <bits/stdc++.h>
using namespace std;

void calcularVentas(int n) {
    srand(time(0));
    double total = 0;
    for (int i = 0; i < n; i++) {
        double precio = (rand() % 31) + 20; // 20-50
        cout << "Producto " << i+1 << ": " << precio << " Bs\n";
        total += precio;
    }
    double conIVA = total * 1.13;
    if (conIVA > 2500) conIVA *= 0.95;
    double iva = total * 0.13;

    cout << "Total sin IVA: " << total << "\n";
    cout << "IVA a pagar: " << iva << "\n";
    cout << "Total final (con descuento si aplica): " << conIVA << "\n";
}

int main() {
    int n;
    cout << "Cantidad de productos vendidos: ";
    cin >> n;
    calcularVentas(n);
    return 0;
}
