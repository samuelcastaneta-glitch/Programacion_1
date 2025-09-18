// Materia: Programación I, Paralelo 4
// Autor: Samuel Andrés Castañeta Argollo
// Fecha creación: 05/09/2025
// Número de ejercicio: 3

#include <bits/stdc++.h>
using namespace std;

bool esCapicua(int n) {
    int original = n, invertido = 0;
    while (n > 0) {
        invertido = invertido * 10 + (n % 10);
        n /= 10;
    }
    return original == invertido;
}

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    if (esCapicua(num))
        cout << "Es capicua\n";
    else
        cout << "No es capicua\n";

    return 0;
}
