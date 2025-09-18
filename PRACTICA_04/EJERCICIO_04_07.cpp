// Materia: Programación I, Paralelo 4
// Autor: Samuel Andrés Castañeta Argollo
// Fecha creación: 11/09/2025
// Número de ejercicio: 7

#include <bits/stdc++.h>
using namespace std;

int MCD(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int MCM(int a, int b) {
    return (a * b) / MCD(a, b);
}

int main() {
    int m, n;
    cout << "Ingrese m y n: ";
    cin >> m >> n;

    cout << "MCD: " << MCD(m, n) << "\n";
    cout << "MCM: " << MCM(m, n) << "\n";
    return 0;
}
