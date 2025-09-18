// Materia: Programación I, Paralelo 4
// Autor: Samuel Andrés Castañeta Argollo
// Fecha creación: 05/09/2025
// Número de ejercicio: 11
#include <bits/stdc++.h>
using namespace std;
double retirarDinero(double saldo, double cantidad) {
    if (cantidad > saldo) {
        cout << "Saldo insuficiente.\n";
        return saldo;
    }
    if ((int)cantidad % 10 != 0) {
        cout << "El monto debe ser multiplo de 10.\n";
        return saldo;
    }
    saldo -= cantidad;
    cout << "Retiro exitoso. Nuevo saldo: " << saldo << " Bs\n";
    return saldo;
}
int main() {
    double saldo = 1000, cantidad;
    cout << "Saldo actual: " << saldo << " Bs\n";
    cout << "Ingrese cantidad a retirar: ";
    cin >> cantidad;
    saldo = retirarDinero(saldo, cantidad);
    return 0;
}
