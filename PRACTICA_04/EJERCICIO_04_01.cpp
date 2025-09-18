// Materia: Programación I, Paralelo 4
// Autor: Samuel Andrés Castañeta Argollo
// Fecha creación: 11/09/2025
// Número de ejercicio: 1

#include <bits/stdc++.h>
using namespace std;

void IntercambiarValores(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;
    cout << "Ingrese dos valores: ";
    cin >> x >> y;

    cout << "Antes: x=" << x << ", y=" << y << "\n";
    IntercambiarValores(x, y);
    cout << "Despues: x=" << x << ", y=" << y << "\n";
    return 0;
}
