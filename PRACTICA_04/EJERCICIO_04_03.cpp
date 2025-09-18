// Materia: Programación I, Paralelo 4
// Autor: Samuel Andrés Castañeta Argollo
// Fecha creación: 11/09/2025
// Número de ejercicio: 3

#include <bits/stdc++.h>
using namespace std;

void ModificarValores(int valor, int &referencia) {
    valor *= 2;
    referencia += 10;
    cout << "Dentro de la funcion -> valor: " << valor << ", referencia: " << referencia << "\n";
}

int main() {
    int a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;

    ModificarValores(a, b);
    cout << "Fuera de la funcion -> a: " << a << ", b: " << b << "\n";
    return 0;
}
